#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    void getdata(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void sum(Time, Time);
    void putdata();
};

void Time::sum(Time t11, Time t22)
{
    minutes = t11.minutes + t22.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t11.hours + t22.hours;
}

void time::putdata()
{
    cout << "Hours : Minutes = " << hours << " : " << minutes << endl;
}

int main()
{
    Time t1, t2, t3;
    int hr1, mint1, hr2, mint2;
    cout << "Enter a time in hour and minute : ";
    cin >> hr1 >> mint1;
    cout << "Enter another time in hour and minute : ";
    cin >> hr2 >> mint2;

    t1.getdata(hr1, mint1);
    t2.getdata(hr2, mint2);

    cout << "Before operation the entered time, " << endl;
    t1.putdata();
    t2.putdata();
    t3.sum(t1, t2);
    cout << "After operation the sum of two times, ";
    t3.putdata();
    return 0;
}

