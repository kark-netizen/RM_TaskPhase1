//find the png attachments to know the wheel and bot configuration
//i have sticked to standard configuration
#include<iostream>
#include<math.h>
using namespace std;
double wheelVelocity(double vx, double vy, double ang,double omg )//this function will calculate velocity of individual wheels
//i went with a function in hopes of recycling it for differential drive
{   
    double v=vx*sin(ang)+vy*cos(ang)+omg;
    return v;
}
    int main()
{
    double v,ang,omg,pi=3.1415926535;
    cout<<"Your Robot is facing Forward\n^\n|\n"<<endl;
    cout<<"Input velocity:\n>"; cin>>v;
    cout<<"Input angle(anticlockwise) in degrees:\n>"; cin>>ang;
    cout<<"Input angular velocity:\n>"; cin>>omg;
    
    double vx=v*sin(pi*ang/180), vy=v*cos(pi*ang/180);//calculating the horizontal and vertical component of velocity in which the bot needs to move
    //cout<<vx<<" "<<vy;

    for(int i=0;i<4;i++)//4 wheels
    {
        cout<<fixed;
        cout<<"velocity of wheel "<<i+1<<" is: "<<wheelVelocity(vx,vy,i*pi/2+pi/4,omg);
        cout<<endl;
    }


}