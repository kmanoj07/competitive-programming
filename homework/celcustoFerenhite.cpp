#include<iostream>
using namespace std;

int main()
{
    //(0°C × 9/5) + 32 = 32°F
    double c, f;
    cout<<"Enter the temprature in degree celcius: "<<endl;
    cin>>c;
    f = (c*9/5) + 32;
    cout<<"The temperature in ferenhite is: "<<f<<endl;
    return 0;
}