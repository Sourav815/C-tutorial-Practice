#include <iostream>

using namespace std;

class time
{
    int hour,min,sec;
    public:
        void getdata(int h,int m,int s)
        {
            hour=h;
            min=m;
            sec=s;
        }
        void puttime(void)
        {
            cout<<"<----After adding times---->"<<endl;
            cout<<"Hour/s\t"<<"Minute\t"<<"Second"<<endl;
            cout<<hour<<"\t"<<min<<"\t"<<sec;
        }
        void sum(time,time);

};

void time:: sum(time t1,time t2)
{
    sec=t1.sec+t2.sec;
    min=sec/60;
    sec=sec%60;
    min=min+t1.min+t2.min;
    hour=min/60;
    min=min%60;
    hour=hour+t1.hour+t2.hour;
}

int main()
{
        time t1,t2,t3;
        int h1,m1,s1,h2,m2,s2;

        cout<<"Enter the first time (like-> hh:mm:ss:): "<<endl;
        cin>>h1>>m1>>s1;
        t1.getdata(h1,m1,s1);

        cout<<"Enter the second time (like-> hh:mm:ss:): "<<endl;
        cin>>h2>>m2>>s2;
        t2.getdata(h2,m2,s2);

        t3.sum(t1,t2);
        t3.puttime();
    
    return 0;
}