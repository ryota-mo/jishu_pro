#coding:utf-8

#シリアル通信で文字をArduino側に送信
#なぜかシリアルモニタを開かないといけないことがある

# エラーパターン記録
# 右手上げないでに対して
# 右てあげないで -> なし
# 見て 手上げないで -> 両手を上
# 聞いてあげないで -> 無し
# 手を挙げないで ->無し
# 携帯を上に上げないで
# 上に上げないで

import sys #デバッグ用

import serial   #モジュール名はpyserialだが, importする際はserialである

import speech_recognition as sr


def python2arduino(text):
    with serial.Serial('/dev/ttyACM0', 9600, timeout=1) as ser:
        # while True:
        # flag=bytes(input(),'utf-8')
        # flag = input()
        # flag += '\0'
        flag=bytes("{}\0".format(text), 'utf-8')
        # flag=bytes('test', 'utf-8')
        # flag="test"

        #シリアル通信で文字を送信する際は, byte文字列に変換する
        #input()する際の文字列はutf-8

        # ser.write(flag.encode('utf-8'))
        ser.write(flag)
        print(flag)

        #シリアル通信:送信

        # if(flag==bytes('a','utf-8')):
        #     break;

        # line = ser.readline()  # 行終端'¥n'までリードする
        # print(line)
        # str=ser.read(100)
        # print(str.decode('utf-8'), end='\n')
        # sys.stdout.buffer(str)
    # ser.close()

def voice2text():
    """
    https://futurismo.biz/speech-recognition-with-python/
    """

    r = sr.Recognizer()
    mic = sr.Microphone(sample_rate=44100)

    with mic as source:
        r.adjust_for_ambient_noise(source)
        audio = r.listen(source)

    text = r.recognize_google(audio, language='ja-JP')
    print("解析結果: {}".format(text))
    return text

def text2coordinate(text):
    """
    ~compare
        初期値:-1
        上げるとき:1
        下げるとき:0
    """

    if "恥" in text or "やだ" in text or "ヤダ" in text or "嫌" in text or "いや" in text or "おかしい" in text:
        print("やだ!!")
        return "07,"
    elif "こんにちは" in text or "あいさつ" in text or "挨拶" in text or "印刷" in text:
        print("こんにちは!")
        return "05,"
    elif "準備" in text:
        return "99,"
    elif "ダンス" in text or "踊" in text or "おどって" in text or "炭素だって" in text:
        print("はい!!ダンスをおどるよ!")
        return "10,"
    elif "紹介" in text or "名前" in text:
        print("ISSA!!")
        return "08,"

    right_arm_compare = -1
    left_arm_compare = -1
    right_leg_compare = -1
    left_leg_compare = -1

    if "終" in text:
        return "-1"

    # 手
    if "両手" in text or "両腕" in text or "料理" in text:
        if "上げない" in text or "挙げない" in text or "あげない" in text or "揚げない" in text or "開けない" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        elif "上" in text or "挙" in text or "あげ" in text or "揚げ" in text or "うえ" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "下げない" in text or "降ろさない" in text or "おろさない" in text or "さげない" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "下" in text or "降" in text or "おろ" in text or "さげ" in text or "作業着" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        else:
            print("入力に両手が含まれていますがパターンに合致しませんでした。")

    elif ("右手" in text and "左手" not in text) or ("右腕" in text and "左腕" not in text) or "赤" in text or "カイロ" in text or "acca" in text or "アッカ" in text\
     or "あっか" in text or "ハッカ" in text or "見せて" in text or "逃げて" in text or "見れて" in text or "見てて" in text or "ゲームで" in text or "愛でて" in text or "みぎて" in text:
        if "上げない" in text or "挙げない" in text or "あげない" in text or "揚げない" in text or "開けない" in text:
            print("mode: 右手を下")
            right_arm_compare = 0
        elif "下げない" in text or "降ろさない" in text or "おろさない" in text or "さげない" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "上" in text or "挙" in text or "あげ" in text or "揚げ" in text or "うえ" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "下" in text or "降" in text or "おろ" in text or "さげ" in text or "作業着" in text:
            print("mode: 右手を下")
            right_arm_compare = 0
        elif "赤酒" in text:
            print("mode: 赤〜右下げる")
            right_arm_compare = 0
        else:
            print("入力:\"右手\" in text and \"左手\" not in text パターンに合致しませんでした。")

    elif ("左手" in text and "右手" not in text) or ("左腕" in text and "右腕" not in text) or "白" in text or "脂肪" in text or "死亡" in text or "志望" in text or "エロ" in text or "左で" in text or "光て" in text\
     or "左て" in text or "借りて" in text or "ひだりて" in text:
        if "上げない" in text or "挙げない" in text or "あげない" in text or "揚げない" in text or "開けない" in text:
            print("mode: 左手を下")
            left_arm_compare = 0
        elif "下げない" in text or "降ろさない" in text or "おろさない" in text or "さげない" in text:
            print("mode: 左手を上")
            left_arm_compare = 1
        elif "上" in text or "挙" in text or "あげ" in text or "揚げ" in text or "うえ" in text or "うえ" in text:
            print("mode: 左手を上")
            left_arm_compare = 1
        elif "下" in text or "降" in text or "おろ" in text or "さげ" in text or "作業着" in text:
            print("mode: 左手を下")
            left_arm_compare = 0
        elif "白酒" in text:
            print("mode: 白〜左下げる")
            left_arm_compare = 0
        else:
            print("入力:\"左手\" in text and \"右手\" not in text パターンに合致しませんでした。")

    elif right_arm_compare == -1 and ("右手" in text or "右腕" in text):
        if "右手を上げない" in text or "右手を挙げない" in text or "右手をあげない" in text  or "右手を揚げない" in text or "右腕を上げない" in text or "右腕を挙げない" in text or "右腕をあげない" in text or "右腕を揚げない" in text:
            print("mode: 右手を下")
            right_arm_compare = 0
        elif "右手を下げない" in text or "右手を降ろさない" in text or "右手をおろさない" in text or "右手をさげない" in text or "右腕を下げない" in text or "右腕を降ろさない" in text or "右腕をおろさない" in text or "右腕をさげない" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "右手を上" in text or "右手を挙" in text or "右手をあげ" in text or "右腕を上" in text or "右腕を挙" in text or "右腕をあげ" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "右手を下" in text or "右手を降" in text or "右手をおろ" in text or "右手をさげ" in text or "右腕を下" in text or "右腕を降" in text or "右腕をおろ" in text or "右腕をさげ" in text:
            print("mode: 右手を下")
            right_arm_compare = 0
        else:
            print("入力:\"右手\" in text パターンに合致しませんでした。")

    elif left_arm_compare == -1 and ("左手" in text or "左腕" in text or "なり手" in text):
        if "左手を上げない" in text or "左手を挙げない" in text or "左手をあげない" in text or "左手を揚げない" in text or "左腕を上げない" in text or "左腕を挙げない" in text or "左腕をあげない" in text or "左腕を揚げない" in text:
            print("mode: 左手を下")
            left_arm_compare = 0
        elif "左手を下げない" in text or "左手を降ろさない" in text or "左手をおろさない" in text or "左手をさげない" in text or "左腕を下げない" in text or "左腕を降ろさない" in text or "左腕をおろさない" in text or "左腕をさげない" in text:
            print("mode: 左手を上")
            left_arm_compare = 1
        elif "左手を上" in text or "左手を挙" in text or "左手をあげ" in text or "左腕を上" in text or "左腕を挙" in text or "左腕をあげ" in text:
            print("mode: 左手を上")
            left_arm_compare = 1
        elif "左手を下" in text or "左手を降" in text or "左手をおろ" in text or "左手をさげ" in text or "左腕を下" in text or "左腕を降" in text or "左腕をおろ" in text or "左腕をさげ" in text:
            print("mode: 左手を下")
            left_arm_compare = 0
        else:
            print("入力:\"左手\" in text パターンに合致しませんでした。")

    elif right_arm_compare == -1 and left_arm_compare == -1 and ("手" in text or "腕" in text):
        if "上げない" in text or "挙げない" in text or "あげない" in text or "揚げない" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        elif "下げない" in text or "降ろさない" in text or "おろさない" in text or "さげない" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "上" in text or "挙" in text or "あげ" in text or "揚げ" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "下" in text or "降" in text or "おろ" in text or "さげ" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        else:
            print("入力:\"手\" in text パターンに合致しませんでした。")

    elif right_arm_compare == -1 and left_arm_compare == -1:
        print("手: その他")
        if "右" and "空" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "左" and "空" in text:
            print("mode: 左手を上")
            left_arm_compare = 1
        elif "空" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif ("ヒーロー" in text and "揚げない" in text) or "シロサギ" in text:
            print("mode: 白〜左下げる")
            left_arm_compare = 0
        elif "それないで" in text:
            print("mode: 白〜左下げない")
            left_arm_compare = 1
        elif "上げない" in text or "揚げない" in text or "あげない" in text or "挙げない" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        elif "下げない" in text or "降ろさない" in text or "さげない" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "上" in text or "揚げ" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "下" in text or "降" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        elif "ゆであげて" in text or "見れてあげて" in text or "入れてあげて" in text or "いてあげて" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "ゆであげないで" in text or "入れてあげないで" in text or "めげてあげないで" in text or "見ててあげない" in text :
            print("mode: 右手を下")
            right_arm_compare = 0
        elif "ゲーム" in text and "あげない" in text:
            print("mode: 右手を下")
            right_arm_compare = 0
        elif "見て"  in text and "あげて" in text:
            print("mode: 右手を上")
            right_arm_compare = 1
        elif "開かれないで" in text:
            print("mode: 赤〜右下げる")
            right_arm_compare = 0
        elif "飛騨牛" in text or "やり手" in text:
            if "上げない" in text or "挙げない" in text or "あげない" in text:
                print("mode: 左手を下")
                left_arm_compare = 0
            elif "下げない" in text or "降ろさない" in text:
                print("mode: 左手を上")
                left_arm_compare = 1
            elif "上" in text or "挙" in text or "あげ" in text:
                print("mode: 左手を上")
                left_arm_compare = 1
            elif "下" in text or "降" in text:
                print("mode: 左手を下")
                left_arm_compare = 0
        elif "朝食ない" in text:
            print("mode: 赤〜右上げないで")
            right_arm_compare = 0
        elif "ワカサギ" in text:
            print("mode: 赤〜右下げる")
            right_arm_compare = 0
        elif "朝食" in text or "あっかけて" in text:
            print("mode: 赤〜右上げる")
            right_arm_compare = 1
        elif "シロアリ" in text:
            if "ない" in text:
                print("mode: 白〜左上げない")
                left_arm_compare = 0
            else:
                print("mode: 白〜左上げる")
                left_arm_compare = 1
        elif "あげない" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        elif "あげ" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "おろさない" in text or "さげない" in text:
            print("mode: 両手を上")
            right_arm_compare = 1
            left_arm_compare = 1
        elif "おろ" in text or "さげ" in text:
            print("mode: 両手を下")
            right_arm_compare = 0
            left_arm_compare = 0
        else:
            print("入力: none \"手\" パターンに合致しませんでした。")

    if "両足" in text:
        if "出さない" in text:
            print("mode: 両足を後")
            left_leg_compare = 1
            left_leg_compare = 1
        elif "戻さない" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "前" in text or "まえ" in text:
            print("mode: 両足を前")
            right_leg_compare = 0
            left_leg_compare = 0
        elif "後" in text or "うしろ" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "戻" in text:
            print("mode: 両足を前")
            right_leg_compare = 0
            left_leg_compare = 0
        else:
            print("入力:\"両足\" in text パターンに合致しませんでした。")

    elif "右足" in text and "左足" not in text:
        if "出さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "戻さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "前" in text or "まえ" in text:
            print("mode: 右足を前")
            right_leg_compare = 0
        elif "後" in text or "うしろ" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "戻" in text:
            print("mode: 右足を前")
            right_leg_compare = 0
        else:
            print("入力:\"右足\" in text and \"左足\" not in text パターンに合致しませんでした。")

    elif "左足" in text and "右足" not in text:
        if "出さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "戻さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "前" in text or "まえ" in text:
            print("mode: 左足を前")
            left_leg_compare = 0
        elif "後" in text or "うしろ" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "戻" in text:
            print("mode: 左足を前")
            left_leg_compare = 0
        else:
            print("入力:\"左足\" in text and \"右足\" not in text パターンに合致しませんでした。")

    elif right_leg_compare == -1 and "右足" in text:
        if "右足を前に出さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "右足を後ろに戻さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "右足を前" in text:
            print("mode: 右足を前")
            right_leg_compare = 0
        elif "右足を後" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "右足を出さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "右足を戻さない" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        elif "右足を出" in text:
            print("mode: 右足を前")
            right_leg_compare = 0
        elif "右足を戻" in text:
            print("mode: 右足を後")
            right_leg_compare = 1
        else:
            print("入力:\"右足\" in text パターンに合致しませんでした。")

    elif left_leg_compare == -1 and "左足" in text:
        if "左足を前に出さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "左足を後ろに戻さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "左足を前" in text:
            print("mode: 左足を前")
            left_leg_compare = 0
        elif "左足を後" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "左足を出さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "左足を戻さない" in text:
            print("mode: 左足を後")
            left_leg_compare = 1
        elif "左足を出" in text:
            print("mode: 左足を後")
            left_leg_compare = 0
        elif "左足を戻" in text:
            print("mode: 左足を後")
            left_leg_compare = 0
        else:
            print("入力:\"左足\" in text パターンに合致しませんでした。")

    elif right_arm_compare == -1 and left_arm_compare == -1 and ("足" in text or "脚" in text):
        if "出さない" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "戻さない" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "戻" in text:
            print("mode: 両足を前")
            right_leg_compare = 0
            left_leg_compare = 0
        elif "前" in text or "まえ" in text:
            print("mode: 両足を前")
            right_leg_compare = 0
            left_leg_compare = 0
        elif "後" in text or "うしろ" in text:
            print("mode: 両足を後")
            left_leg_compare = 1
            left_leg_compare = 1
        else:
            print("入力:\"足\" in text パターンに合致しませんでした。")

    elif right_leg_compare == -1 and left_leg_compare == -1:
        print("足: その他")
        if "八潮" in text or "もやし" in text:
            if "出さない" in text:
                print("mode: 右足を後")
                right_leg_compare = 1
            elif "戻さない" in text:
                print("mode: 右足を後")
                right_leg_compare = 1
            elif "前" in text or "まえ" in text:
                print("mode: 右足を前")
                right_leg_compare = 0
            elif "後" in text or "うしろ" in text:
                print("mode: 右足を後")
                right_leg_compare = 1
            elif "戻" in text:
                print("mode: 右足を前")
                right_leg_compare = 0
        elif "出さない" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "戻さない" in text:
            print("mode: 両足を後")
            right_leg_compare = 1
            left_leg_compare = 1
        elif "前" in text or "まえ" in text:
            print("mode: 両足を前")
            right_leg_compare = 0
            left_leg_compare = 0
        elif "後" in text or "うしろ" in text:
            print("mode: 両足を後")
            left_leg_compare = 1
            left_leg_compare = 1
        else:
            print("入力: none \"足\" パターンに合致しませんでした。")

    if "最初" in text or "リセット" in text:
        right_arm_compare = 0
        left_arm_compare = 0
        right_leg_compare = 0
        left_leg_compare = 0


    if(right_arm_compare==-1 and left_arm_compare == -1 and right_leg_compare == -1 and left_leg_compare == -1):
        return "07,"


    ret = "02," + str(right_arm_compare) + "," + str(left_arm_compare) + "," + str(right_leg_compare) + "," + str(left_leg_compare)

    return ret

def main(mode, command_input):
    # while(1):
    # print("init")
    if(mode==0):
        text = voice2text()
        command = text2coordinate(text)
        if command == "-1":
            return "end"
    elif(mode==1):
        command = text2coordinate(command_input)
        if command == "-1":
            return "end"
    elif(mode==2):
        command = "02," + command_input
    elif(mode==20):
        text = voice2text()
        command = text2coordinate(text)
        if command == "-1":
            return "end"
        else:
            print("未送信: {}".format(command))
            return command
    elif(mode==30):
        command = text2coordinate(command_input)
        if command == "-1":
            return "end"
        else:
            print("未送信: {}".format(command))
            return command
    elif(mode==99):
        command = command_input

    python2arduino(command)
    print("送信済み: {}".format(command))
    return


if __name__ == "__main__":
    if (len(sys.argv)==2):
        if (sys.argv[1] == "99"):
            # モード切替
            mode = 99
            command_input = "99,"
        elif (sys.argv[1] == "03"):
            # 腕を下げる
            # 両腕を500msの間、75degreeで回転
            mode = 99
            command_input = "03,"
        elif (sys.argv[1] == "05"):
            # こんにちは！
            mode = 99
            command_input = "05,"
        elif (sys.argv[1] == "06"):
            # はい！
            mode = 99
            command_input = "06,"
        elif (sys.argv[1] == "07"):
            # やだ！
            mode = 99
            command_input = "07,"
        elif (sys.argv[1] == "08"):
            # くま！
            mode = 99
            command_input = "08,"
        elif (sys.argv[1] == "10"):
            # ダンス開始
            mode = 99
            command_input = "10,"
        elif (sys.argv[1] == "20"):
            # デバッグモード
            mode=20
            command_input = None
        else:
            # 文字列入力
            mode = 1
            command_input = sys.argv[1]

    elif (len(sys.argv)==3):
        if (sys.argv[1] == "30"):
            # デバッグモード
            mode=30
            command_input = sys.argv[2]

    elif (len(sys.argv) == 5):
        if (sys.argv[1] == "04"):
            # サーボモータ修正用
            # Input: 04, サーボモータ番号, コマンド, 回転時間
            # コマンドは0が腕を下げる方向、1が上げる方向
            # サーボモータ番号は
                # RIGHT_HAND_UPDOWN 0
                # LEFT_HAND_UPDOWN 1
                # RIGHT_LEG 2
                # LEFT_LEG 3
                # ALL_SERVO 4
            mode = 99
            command_input = "04," + str(sys.argv[2]) + "," + str(sys.argv[3]) + "," + str(sys.argv[4])
        elif (sys.argv[1] == "01"):
            mode = 99
            command_input = "01," + str(sys.argv[2]) + "," + str(sys.argv[3]) + "," + str(sys.argv[4])
        else:
            # コマンド直接入力
            # 右腕、左腕、右足、左足の順に0 or 1
            mode = 2
            command_input = str(sys.argv[1]) + "," + str(sys.argv[2]) + "," + str(sys.argv[3]) + "," + str(sys.argv[4])
    else:
        # 引数なし->音声認識
        mode = 0
        command_input = None

    main(mode, command_input)
