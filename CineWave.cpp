#include<iostream>
#include<cmath>
#include<chrono>
#include<thread>


using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main()
{
    double x; 
    double start = 0.0;
    double end = 2*M_PI;
    double step = 0.1;
    int amplitude = 10; 
    int shift= 20;
    while(true)
    {
        for(double i= start; i<=end; i+=step)
        {
            x= sin(i);
            int spaces = static_cast<int>(x*amplitude + shift);
            for(int j=0 ; j<=spaces; j++)
            {
                cout<<" ";
            }
            cout<<"😂"<<endl;
            sleep_for(milliseconds(50));
        }
    }
}