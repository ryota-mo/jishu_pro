#include "ServoControl.h"
// #include "test_hello_2.h"
#include <Arduino.h>


// ServoControl::ServoControl(){
//   start_time = 0;
//   state = 0;
//   compare = -1;
//   Servo::write(90);
// }
ServoControl::ServoControl(int play_mode){
  start_time = 0;
  state = 0;
  compare = -1;
  playmode = play_mode;
  Servo::write(90);
}

void ServoControl::state_machine(){
  if (state == 0 && compare == 1) {
    /*
    // 状態stateが0(=下にある、平常時の状態)のときに、比較compareが1(=上に行きたい)とき
    // サーボモータ回転開始時刻を記録し、stateを1にする
    */
    Servo::write(90);
    // delay(1000);
    state = 1;
    start_time = millis();
  } else if(state == 1){
    /*
    // サーボモータをROTATION_TIMEの間、反時計回りに回転
    */
    if (playmode==1) {
      Servo::write(90+20);
    } else if(playmode==2){
      Servo::write(90-20);
    }
    if(millis()-start_time>ROTATION_TIME){
      /*
      // 現在時刻mills()が開始時刻start_timeから規定の回転時間ROTATION_TIME経過したら、状態stateを2(=上、通常でない状態)とし、サーボモータの回転を止める
      */
      state = 2;
      Servo::write(90);
    }
  } else if (state == 2 && compare == 0) {
    /*
    // 状態stateが2(=上、通常でない状態)のときに、比較compareが0(=下に行きたい)とき
    // サーボモータ回転開始時刻を記録し、stateを3にする
    */
    // if (playmode==1) {
    //   ServoControl::play();
    // }
    Servo::write(90);
    // delay(1000);
    start_time = millis();
    state = 3;
  } else if (state==3){
    /*
    // サーボモータをROTATION_TIMEの間、時計回りに回転
    */
    if (playmode==1) {
      Servo::write(90-20);
    } else if(playmode==2){
      Servo::write(90+20);
    }
    if (millis() - start_time > ROTATION_TIME) {
      /*
      // 現在時刻mills()が開始時刻start_timeから規定の回転時間ROTATION_TIME経過したら、状態stateを0(=下、通常状態)とし、サーボモータの回転を止める
      */
      state = 0;
      Servo::write(90);
    }
  }
}

// void ServoControl::play() {
//   // microtime = micros();
//   for (int i = 0; i < test_hello_2_raw_len; i++) {
//     // microtime = micros();
//     // OCR2B = pgm_read_byte_near(&test_hello_2_raw[i]);
//     OCR2A = pgm_read_byte_near(&test_hello_2_raw[i]);
//     delayMicroseconds(125);
//     // unsigned long init_time=microtime;
//     // while(micros()-init_time<=125){
//     // }
//   }
// }

// void ServoControl::set_compare(volatile int set_compare){
void ServoControl::set_compare(int set_compare){
  compare = set_compare;
}

// void ServoControl::set_state(volatile int set_state){
void ServoControl::set_state(int set_state){
  state = set_state;
}

// void ServoControl::set_playmode(int set_playmode){
//   playmode = set_playmode;
// }

// volatile int ServoControl::get_compare(){
volatile int ServoControl::get_compare(){
  return compare;
}

// volatile int ServoControl::get_state(){
volatile int ServoControl::get_state(){
  return state;
}

// int ServoControl::get_playmode(){
//   return playmode;
// }

int ServoControl::state_check(){
  // compareとstateをチェックして動けるものかどうかを判定
  if((ServoControl::get_state() == 0 && ServoControl::get_compare() == 0) || (ServoControl::get_state() == 2 && ServoControl::get_compare() == 1)){
    return 0;
  } else {
    return 1;
  }
}
