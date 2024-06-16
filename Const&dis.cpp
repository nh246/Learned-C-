#include<iostream>
using namespace std;
class add
{
    int sum;
    public:
        add()        
        {
            sum = 0;
        }
        add(int a,int b,int c = 10) 
        {
            sum = a + b + c;
            cout<<"Sum = "<<sum<<endl;
        }
};
class subtract
{
    int sub = 0;
    public:
        subtract(int a = 50,int b = 10) 
        {
            sub = a - b;
            cout<<"Subtract = "<<sub<<endl;
        }
};
int main()
{
    add a1;
    add a2(30,20);
    add a3(30,20,40);

    subtract s1;
    return 0;
}
