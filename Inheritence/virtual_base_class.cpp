#include <iostream>

using namespace std;

class student{
    protected:
        int roll;
    public:
        void getroll(int r){
            roll=r;
        }
        void printroll(void){
            cout<<"Roll no. is: "<<roll<<endl;
        }
};
class test : virtual public student{
    protected:
        float math, physics;
    public:
        void getmark(float m,float p){
            math=m;
            physics=p;
        }
        void printmark(void){
            cout<<"Mathematice: "<<math<<endl
                <<"physics: "<<physics<<endl;
        }
};
class score : virtual public student{
    protected:
        int score;
    public:
        void getscore(int sc){
            score= sc;
        }
        void printscore(void){
            cout<<"Game Score: "<<score<<endl;
        }
};
class result: public test,public score{
    float result;
    public:
        void printresult(void){
            result=math+physics+score;
            printroll();
            printmark();
            printscore();
            cout<<"Your final result is: "<<result<<endl;
        }
};
int main()
{
    result sourav;
    sourav.getroll(420);
    sourav.getmark(94.0,81.0);
    sourav.getscore(5);
    sourav.printresult();
    return 0;
}