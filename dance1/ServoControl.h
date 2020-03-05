#ifndef _servo_control
#define _servo_control

#include <Servo.h>


class ServoControl : public Servo{
  private:
    unsigned long ROTATION_TIME = 1000;
    // volatile unsigned long start_time;
    // volatile int state;
    // volatile int compare;
    unsigned long start_time;
    volatile int state;
    volatile int compare;

    int playmode;

  public:
    // ServoControl();
    ServoControl(int play_mode);
    void state_machine();
    // void play();
    // void set_compare(volatile int set_compare);
    // void set_state(volatile int set_state);
    void set_compare(int set_compare);
    void set_state(int set_state);
    // void set_playmode(int set_playmode);
    // volatile int get_compare();
    // volatile int get_state();
    volatile int get_compare();
    volatile int get_state();
    // int get_playmode();
    int state_check();
};

#endif
