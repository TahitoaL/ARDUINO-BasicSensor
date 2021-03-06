#ifndef BRI_H

#define BRI_H

class BasicMotor : public PwmReceiver {

    public:
        BasicMotor(char pin, int id, String name, int minPwm = 0, int maxPwm = 255);
        // void switchOn(int dutyCycleValue, boolean save = true); // ?
        void setSpeed(int speed);
        int getSpeed();

    private:
        int _speed;
        int _minPwm;
        int _maxPwm;

};

#endif