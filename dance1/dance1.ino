// #include <Servo.h>
#include "ServoControl.h"
#include "hai3.h"
#include "yada.h"
#include "hello2.h"
#include "issa.h"

// サーボモータ宣言
/*
  回転方向の関係で腕は1を、足は2を指定
*/
ServoControl servo_righthand(1);
ServoControl servo_lefthand(1);
ServoControl servo_rightleg(2);
ServoControl servo_leftleg(2);
ServoControl servo_righthand2(1);
ServoControl servo_lefthand2(1);

// 状態変数宣言
volatile int state_emergency = 0;
int servo_control_num = 0;
int state_correction = 4;
// volatile int servo_control_num = 0;
// volatile int state_correction = 4;
int state_usa = 0;
unsigned long usa_time = 0;
// unsigned long USASONGTIME=13600;
unsigned long COMEON = 850;
unsigned long MIDTIME = 1700;

// LED等用時計宣言
unsigned long time = 0;
unsigned long ttime = 0;

// 各種定数の定義
// サーボモータ指定定数
#define RIGHT_HAND_UPDOWN 0
#define LEFT_HAND_UPDOWN 1
#define RIGHT_LEG 2
#define LEFT_LEG 3
#define RIGHT_HAND_BF 4
#define LEFT_HAND_BF 5
#define ALL_SERVO 6

// LEDピン
static const int LED[] = {4,7,8,9};
// モード切り替え用スイッチ
#define MODESWITCH 12

// 指令番号保持変数定義
String command_num = "-1";

// Kinect用左右の手と肩の座標保持変数宣言
int left_hand[2], left_shoulder[2], right_hand[2], right_shoulder[2];

/*
  mode01: Kinectから受け取った座標に応じて腕を上下させるプログラム
  mode02: Pythonから受け取った座標に応じて腕を上下、足を前後させるプログラム
          スピーカーからしゃべる
  ユニバーサル基板に移行、完成
  ただし、スピーカーは手動でD11番ピンへ接続のこと

  D2のスイッチでモード切り替え
  待機(0)->サーボモータ調整モード(1)->声, Kinectで操作(2)
  例外: ダンス(10): 通信で命令受信時のみ
*/

/*
  各種制御線、信号線の接続先について
  A0~A5->アナログピン
  D1~D13->デジタルピン（本当は1~13）

  右手上下サーボ1はA4
  左手上下サーボ2はA5
  右手前後サーボ3は3
  左手前後サーボ4は5
  右足サーボ5はA1
  左足サーボ6はA3
  可変抵抗はA0
  attachInterruptスイッチはD2
  手動回転サーボモータ切り替え用スイッチはD12
  LEDは4,7,8,9

  スピーカーはD11

  可変抵抗の真ん中を制御線、両端は6VとGND
  スイッチは一方を6V、他方を制御線と10kΩの抵抗、抵抗の先にGND
*/

void setup_speaker_11(){
  /*
  // 11番ピンからスピーカー出力するための設定
  // void setup()内にこの関数を記述のこと
  */
  pinMode(11, OUTPUT); // OC2A
  TCCR2A = _BV(COM2A1) | _BV(WGM21) | _BV(WGM20);
  TCCR2B = _BV(CS20);
}

void setup() {
  // put your setup code here, to run once:
  // 入出力設定
  // サーボモータ
  servo_righthand.attach(A4);
  servo_lefthand.attach(A5);
  servo_righthand2.attach(5);
  servo_lefthand2.attach(3);
  servo_rightleg.attach(A1);
  servo_leftleg.attach(A3);
  // LED
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
  // スイッチ
  attachInterrupt(digitalPinToInterrupt(2), emergency_pushed, RISING);
  pinMode(MODESWITCH, INPUT_PULLUP);

  // シリアル通信設定
  Serial.begin(9600);

  // 状態保持変数
  state_emergency = 0;

  // スピーカー設定
  setup_speaker_11();

  // Serial.println("Arduino setup finished.");
}

void loop() {
  // 時計設定
  clock();

  // シリアル通信受信確認
  if (Serial.available() > 0){
    command_num = serial_command(command_num);
  }

  // Kinect座標受信時は手と肩のy座標比較が必要
  if(command_num=="01"){
    /*
    / 手と肩の両方のy座標が0でないときに比較し、arm_compareに結果を保存
    */
    if(right_hand[1]!=0 && right_shoulder[1]!=0){
      servo_righthand.set_compare(pos_compare(right_shoulder[1], right_hand[1]));
    }
    if(left_hand[1]!=0 && left_shoulder[1]!=0){
      servo_lefthand.set_compare(pos_compare(left_shoulder[1], left_hand[1]));
    }
  }

  if (state_emergency == 0) {
    state_correction = ALL_SERVO;

      servo_righthand.set_compare(-1);
      servo_lefthand.set_compare(-1);
      servo_righthand2.set_compare(-1);
      servo_lefthand2.set_compare(-1);
      servo_rightleg.set_compare(-1);
      servo_leftleg.set_compare(-1);
      servo_righthand.set_state(0);
      servo_lefthand.set_state(0);
      servo_righthand2.set_state(0);
      servo_lefthand2.set_state(0);
      servo_rightleg.set_state(0);
      servo_leftleg.set_state(0);

    led_blink(LED[0], time);
    led_blink(LED[1], time);
    led_blink(LED[2], time);
    led_blink(LED[3], time);

    servo_control(ALL_SERVO, 90);

  } else if (state_emergency == 1) {
    // Serial.print("state_correction=");
    // Serial.println(state_correction);

    if(state_correction == ALL_SERVO){
      servo_control(ALL_SERVO, 90);
      digitalWrite(LED[0], LOW);
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);
    } else{
      servo_control(state_correction, variable_resistor_2_servo());
    }

    if(digitalRead(MODESWITCH)==LOW){
      servo_control(ALL_SERVO, 90);
      digitalWrite(LED[0], LOW);
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);
      delay(500);
      if(state_correction==ALL_SERVO){
        state_correction=0;
      } else{
        state_correction++;
      }
    }
  } else if (state_emergency == 2) {
    // LED点灯
    led_each_condition(0, servo_lefthand.get_state(), servo_lefthand.get_compare());
    led_each_condition(1, servo_righthand.get_state(), servo_righthand.get_compare());
    led_each_condition(2, servo_leftleg.get_state(), servo_leftleg.get_compare());
    led_each_condition(3, servo_rightleg.get_state(), servo_rightleg.get_compare());

    servo_righthand.state_machine();
    servo_lefthand.state_machine();
    servo_rightleg.state_machine();
    servo_leftleg.state_machine();
  } else if (state_emergency == 10) {
    // DA PUMP mode
    // 最初は4秒間LED点灯
    if(state_usa==0){
      digitalWrite(LED[0], HIGH);
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], LOW);
      digitalWrite(LED[3], LOW);
      if(millis()-usa_time>1000){
        state_usa = 1;
        Serial.println("before 3 sec");
        usa_time = millis();
      }
    } else if(state_usa==1){
      digitalWrite(LED[0], LOW);
      digitalWrite(LED[1], HIGH);
      if(millis()-usa_time>1000){
        state_usa = 2;
        Serial.println("before 2 sec");
        usa_time = millis();
      }
    } else if(state_usa==2){
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], HIGH);
      if(millis()-usa_time>1000){
        state_usa = 3;
        Serial.println("before 1 sec");
        usa_time = millis();
      }
    } else if(state_usa==3){
      digitalWrite(LED[2], LOW);
      digitalWrite(LED[3], HIGH);
      if(millis()-usa_time>1000){
        state_usa = 4;
        Serial.println("Start!");
        usa_time = millis();
      }
    } else if(state_usa == 4){
      // Come on Baby
      dance_comeon();
    } else if(state_usa == 5){
      // America~
      dance_baby();
    } else if(state_usa == 6){
      // ひまなとこ1
      dance_mid_1();
    } else if(state_usa == 7){
      // ひまなとこ2
      dance_mid_2();
    } else if(state_usa == 8){
      // Come on Baby
      dance_comeon();
    } else if(state_usa == 9){
      // America~
      dance_baby();
    } else if(state_usa == 10){
      // ひまなとこ1
      dance_mid_1();
    } else if(state_usa == 11){
      // ひまなとこ2
      dance_mid_2();
    } else if(state_usa == 12){
      // America
      dance_comeon();
    } else if(state_usa == 13){
      // ~~
      dance_baby();
    } else if(state_usa == 13){
      dance_mid_1();
    } else if(state_usa == 14){
      dance_mid_2();
    } else if(state_usa == 15){
      servo_control(ALL_SERVO, 93);
      if(millis() - usa_time > 1000){
        state_usa++;
        usa_time = millis();
      }
    } else if(state_usa == 16){
      servo_control(ALL_SERVO, 87);
      if(millis() - usa_time > 1000){
        state_usa=0;
        state_emergency=0;
        servo_control(ALL_SERVO, 90);
        usa_time = millis();
      }
    }
  }
}

void dance_comeon(){
  led_blink(LED[0], ttime);
  led_blink(LED[1], ttime);
  digitalWrite(LED[2], LOW);
  digitalWrite(LED[3], LOW);
  servo_righthand.write(90+20);
  servo_rightleg.write(90-20);
  dance_reset_time(COMEON);
}

void dance_baby(){
  digitalWrite(LED[0], LOW);
  digitalWrite(LED[1], LOW);
  led_blink(LED[2], ttime);
  led_blink(LED[3], ttime);
  servo_righthand.write(90-20);
  servo_rightleg.write(90+20);
  dance_reset_time(COMEON);
}

void dance_mid_1(){
  digitalWrite(LED[0], HIGH);
  digitalWrite(LED[1], HIGH);
  digitalWrite(LED[2], LOW);
  digitalWrite(LED[3], LOW);
  servo_righthand.write(90+10);
  servo_lefthand.write(90+10);
  dance_reset_time(MIDTIME);
}

void dance_mid_2(){
  digitalWrite(LED[0], LOW);
  digitalWrite(LED[1], LOW);
  digitalWrite(LED[2], HIGH);
  digitalWrite(LED[3], HIGH);
  servo_righthand.write(90-10);
  servo_lefthand.write(90-10);
  dance_reset_time(MIDTIME);
}

void dance_reset_time(unsigned long dance_time){
  if(millis() - usa_time > MIDTIME){
    servo_control(ALL_SERVO, 90);
    state_usa++;
    usa_time = millis();
  }
}

String serial_command(String command_num){
  /*
  // シリアル通信からの入力を処理する関数
  // delay(10)によってすべてを確実に受信し終える
  // 受信する文字列は、"コマンド種,コマンド"（カンマ区切り）
  // 01 -> Kinect(01,where,x,y)
  // 02 -> Voice(02,right_arm_compare,left_arm_compare,right_leg_compare,left_leg_compare)
  //
  // 入力値: コマンド種
  // 出力値: コマンド種
  */

  // delayによって確実に受信し終える。
  delay(10);
  // まず終端文字まで読み込む。読み込むものは(指令番号,指令)とする。
  String str = Serial.readStringUntil('\0');
  // 1つの","の位置で区切ったときそれが何文字目かと、分割した文字列を取得する。
  int delimiterpos = str.indexOf(",", 0);
  String str1, str2;
  str1 = str.substring(0, delimiterpos);
  str2 = str.substring(delimiterpos+1, str.length());

  Serial.println(str1);
  Serial.println(str2);

  if(str1=="01"){
    getpos(str2);
  } else if(str1=="02") {
    if(state_emergency!=2){
      play_voice(yada_raw, yada_raw_len, "やだ！");
      return str1;
    }
    getvoice(str2);

    if(servo_righthand.state_check() && servo_lefthand.state_check() && servo_rightleg.state_check() && servo_leftleg.state_check()){
      // 正しいときは元気にはい！
      play_voice(hai3_raw, hai3_raw_len, "はい！");
    }else{
      // 正しくない時は嫌です。
      play_voice(yada_raw, yada_raw_len, "やだ！");
    }
  // } else if(str1=="03") {
  //   arm_down();
  } else if(str1=="04"){
    correction(str2);
  } else if(str1=="05"){
    play_voice(hello2_raw, hello2_raw_len, "こんにちは");
  } else if(str1=="06"){
    play_voice(hai3_raw, hai3_raw_len, "はい！");
  } else if(str1=="07"){
    play_voice(yada_raw, yada_raw_len, "やだ！");
  } else if(str1=="08"){
    play_voice(issa_raw, issa_raw_len, "くま！");
  } else if(str1=="10"){
    play_voice(hai3_raw, hai3_raw_len, "ダンス開始");
    dance();
  } else if(str1=="99"){
    emergency_pushed();
  }
  return str1;
}

void correction(String str){
  /*
  // サーボモータ修正用関数
  // Input: str = サーボモータ番号,コマンド,回転時間
  // コマンドは0->時計回り、1->半時計回り
  // 勝手に回転するのを修正するのは0
  */
  int delimiterpos1 = str.indexOf(",", 0);
  int delimiterpos2 = str.indexOf(",", delimiterpos1+1);
  String str1, str2, str3;
  str1 = str.substring(0, delimiterpos1);
  str2 = str.substring(delimiterpos1+1, delimiterpos2);
  str3 = str.substring(delimiterpos2+1, str.length());

  int pos = str2int(str1);
  int com = str2int(str2);
  unsigned long rotation_time = (unsigned long)str2int(str3);

  if(com==0){
    servo_control(pos, 90-15);
    delay(rotation_time);
    servo_control(pos, 90);
  } else if (com==1){
    servo_control(pos, 90+15);
    delay(rotation_time);
    servo_control(pos, 90);
  }
}

void getvoice(String str){
  // 3つの","の位置で区切ったときそれが何文字目かと、分割した文字列を取得する。
  int delimiterpos1 = str.indexOf(",", 0);
  int delimiterpos2 = str.indexOf(",", delimiterpos1+1);
  int delimiterpos3 = str.indexOf(",", delimiterpos2+1);

  // 各種指令の取得（命令は数字1文字とする）
  String right_arm_compare_com, left_arm_compare_com, right_leg_compare_com, left_leg_compare_com;
  right_arm_compare_com = str.substring(0, delimiterpos1);
  left_arm_compare_com = str.substring(delimiterpos1+1, delimiterpos2);
  right_leg_compare_com = str.substring(delimiterpos2+1, delimiterpos3);
  left_leg_compare_com = str.substring(delimiterpos3+1, str.length());

  // 入力指令をstr型からint型に直したうえでcompareに代入
  servo_righthand.set_compare(str2int(right_arm_compare_com));
  servo_lefthand.set_compare(str2int(left_arm_compare_com));
  servo_rightleg.set_compare(str2int(right_leg_compare_com));
  servo_leftleg.set_compare(str2int(left_leg_compare_com));
}

int str2int(String str_num){
  /*
  // 文字列をint型に変換する関数(8桁まで)
  // Input: 文字列の数字8桁まで
  // Output: int型の数字
  */

  // 直接は直せないので一旦char型に
  char char_num[8];
  for(int i=0; i<str_num.length(); i++){
    char_num[i] = str_num[i];
  }
  // int型に変換
  int int_num = atoi(char_num);
  return int_num;
}

void getpos(String str){
  // 3つの","の位置で区切ったときそれらが何文字目かと、分割した文字列を取得する。
  int delimiterpos1 = str.indexOf(",", 0);
  int delimiterpos2 = str.indexOf(",", delimiterpos1+1);
  // int delimiterpos3 = str.indexOf(",", delimiterpos2+1);
  String str1, str2, str3;
  str1 = str.substring(0, delimiterpos1);
  str2 = str.substring(delimiterpos1+1, delimiterpos2);
  str3 = str.substring(delimiterpos2+1, str.length());
  // str型を(C言語の範囲内では)直接int型に変更できなさそうなため1文字ずつ一旦char型に
  char pos_x_char[16], pos_y_char[16];
  for(int i = 0; i < str2.length(); i++){
    pos_x_char[i] = str2[i];
  }
  for(int i = 0; i < str3.length(); i++){
    pos_y_char[i] = str3[i];
  }
  // int型に変更（両手両肩のみ）
  if(str1 == "11"){
   right_hand[0] = atoi(pos_x_char);
   right_hand[1] = atoi(pos_y_char);
 }
 if(str1 == "12"){
   right_shoulder[0] = atoi(pos_x_char);
   right_shoulder[1] = atoi(pos_y_char);
 }
  if(str1 == "05"){
    left_hand[0] = atoi(pos_x_char);
    left_hand[1] = atoi(pos_y_char);
  }
  if(str1 == "06"){
    left_shoulder[0] = atoi(pos_x_char);
    left_shoulder[1] = atoi(pos_y_char);
  }
}

// void arm_down(){
//   servo_righthand.write(90-15);
//   servo_lefthand.write(90-15);
//   delay(500);
//   servo_righthand.write(90);
//   servo_lefthand.write(90);
// }

int pos_compare(int pos1, int pos2){
  // 座標の比較をするだけの関数
  if(pos1>pos2){
    return 0;
  } else {
    return 1;
  }
}

void dance(){
  servo_control(ALL_SERVO, 90);
  state_emergency = 10;
  usa_time = millis();
}

void emergency_pushed() {
  for(int i=0; i<1000; i++){
    NULL;
  }
  // Serial.println("emergency_pushed");
  servo_righthand.set_compare(-1);
  servo_lefthand.set_compare(-1);
  servo_righthand2.set_compare(-1);
  servo_lefthand2.set_compare(-1);
  servo_rightleg.set_compare(-1);
  servo_leftleg.set_compare(-1);
  servo_righthand.set_state(0);
  servo_lefthand.set_state(0);
  servo_righthand2.set_state(0);
  servo_lefthand2.set_state(0);
  servo_rightleg.set_state(0);
  servo_leftleg.set_state(0);
  if (state_emergency == 2) {
    // Serial.println("Emergency Stop!");
    state_emergency=0;
  } else {
    state_emergency++;
  }
}

int variable_resistor_2_servo(void) {
  int val=analogRead(0);
  // Serial.print("V=");
  // Serial.print(val);
  //map()を使って0~1023のセンサ読取り値を0~180の角度に変換
  int angle=map(val,0,1023,75,105);
  //サーボ出力
  // Serial.print(", ang=");
  // Serial.println(angle);
  return angle;
}

void servo_control(int servo_num, int angle) {
  servo_righthand.write(90);
  servo_lefthand.write(90);
  servo_righthand2.write(90);
  servo_lefthand2.write(90);
  servo_rightleg.write(90);
  servo_leftleg.write(90);

  switch(servo_num){
    case RIGHT_HAND_UPDOWN:
      led_blink(LED[0], ttime);
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_righthand.write(angle);
      break;

    case LEFT_HAND_UPDOWN:
      digitalWrite(LED[0], LOW);
      led_blink(LED[1], ttime);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_lefthand.write(angle);
      break;

    case RIGHT_HAND_BF:
      led_blink(LED[0], ttime);
      digitalWrite(LED[1], HIGH);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_righthand2.write(angle);
      break;

    case LEFT_HAND_BF:
      digitalWrite(LED[0], HIGH);
      led_blink(LED[1], ttime);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_lefthand2.write(angle);
      break;

    case RIGHT_LEG:
      digitalWrite(LED[0], HIGH);
      digitalWrite(LED[1], LOW);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_rightleg.write(angle);
      break;

    case LEFT_LEG:
      digitalWrite(LED[0], LOW);
      digitalWrite(LED[1], HIGH);
      digitalWrite(LED[2], HIGH);
      digitalWrite(LED[3], HIGH);

      servo_leftleg.write(angle);
      break;

    case ALL_SERVO:
      servo_righthand.write(angle);
      servo_lefthand.write(angle);
      servo_righthand2.write(angle);
      servo_lefthand2.write(angle);
      servo_rightleg.write(angle);
      servo_leftleg.write(angle);
      break;

    default:
      break;
  }
}

void clock(){
  if (millis()/1000.0 - time > 0.999) {
    // 起動時からの時間
    time++;
    Serial.print("state_emergency=");
    Serial.println(state_emergency);
  }
  if (millis()/100.0 - ttime>0.999){
    // 起動時からの時間(0.1sec)
    ttime++;
    if(state_emergency==10){
      Serial.print("DA PUMP mode: state_usa = ");
      Serial.println(state_usa);
    }
  }
}


void led_blink(const int led, unsigned long TIME){
  /*
  / LEDを点滅させる
  / Input: LED, time
  / Output: None
  */
  switch(TIME%2){
    case 0:
      digitalWrite(led, LOW);
      break;
    case 1:
      digitalWrite(led, HIGH);
      break;
    default: break;
  }
}


void led_each_condition(int lednum, int state, int compare){
  if(state==0){
    if(compare==0){
      led_blink(LED[lednum], ttime);
    }else{
      digitalWrite(LED[lednum], HIGH);
    }
  }
  else if(state==3){
    if(compare==1){
      led_blink(LED[lednum], time);
    }else{
      digitalWrite(LED[lednum], LOW);
    }
  }
}

void play_voice(const unsigned char raw[], unsigned int raw_len, String message){
  /*
  OCR2B 3番ピン
  OCR2A 11番ピン
  */
  Serial.println(message);
  for (int i = 0; i < raw_len; i++) {
    OCR2A = pgm_read_byte_near(&raw[i]);
    delayMicroseconds(125);
  }
}
