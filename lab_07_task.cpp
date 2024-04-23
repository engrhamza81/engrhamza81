#include <iostream>
using namespace std;

class Time {
private:
    int min, hour;
    float sec;

public:
    // Constructor to initialize the time
    Time(int h = 0, int m = 0, float s = 0) : min(m), hour(h), sec(s) {}

    // Show function to display the time
    void show() {
        cout << "Time is: ";
        if (hour < 10) cout << "0";
        cout << hour << ":";
        if (min < 10) cout << "0";
        cout << min << ":";
        if (sec < 10) cout << "0";
        cout << sec << endl;
    }

    // Overload ++ operator to increase time by 1 minute
    Time operator++() {
        min++;
        if (min >= 60) {
            min = 0;
          //  sec = 0;
            hour++;
            if (hour >= 24) {
                hour = 0;
            }
        }
       
    }

    // Overload -- operator to decrease time by 1 minute
    Time operator--() {
        min--;
        if (min < 0) {
            min = 59;
           // sec = 0;
            hour--;
            if (hour < 0) {
                hour = 23;
            }
        }
      
    }
};

int main() {
    Time t(22, 59, 60.0);
    t.show();

    ++t;
    cout << "Time After increment by +1" << endl;
    t.show();

    --t;
    cout << "\nTime After decrement by -1" << endl;
    t.show();

    return 0;
}
