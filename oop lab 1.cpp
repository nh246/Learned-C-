#include<iostream>
using namespace std;

class time
{
    private:
        int hours,minutes,scalar;
    public:
        void getdata(int h,int m,int s)
        {
            hours = h;
            minutes = m;
            scalar = s;
        }
        void sum(time);
        void putdata();
};
void time::sum(time t1)
{
    minutes = (t1.hours*60) + t1.minutes;
    minutes = minutes*t1.scalar;
    hours = minutes/60;
    minutes = minutes%60;
}

void time::putdata()
{
    cout<<"Hours : Minutes = "<<hours<<" : "<<minutes<<endl;
}

int main()
{
    time t;
    int hr,mint,sc=3;
    cout<<"Enter a time in hour and minute : ";
    cin>>hr>>mint;
    cout<<endl<<"Here the using scalar value is : "<<sc<<endl<<endl;
    t.getdata(hr,mint,sc);
    cout<<"Before operation the entered time, ";
    t.putdata();
    t.sum(t);
    cout<<"After operation the sum [entered time +(entered time * scalar value)] of two times , ";
    t.putdata();
    return 0;
}
