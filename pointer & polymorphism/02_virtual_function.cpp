#include <iostream>
#include <cstring>

using namespace std;
class Media{
    protected:
        char title[30];
        float price;
    public:
        Media(char *s,float a){
            strcpy(title,s);
            price=a;
        }
        // void display(void){cout<<"This is base class...";};  Default call 
        virtual void display(){}; //empty virtual function.
};
class book: public Media{
    int pages;
    public:
        book(char *s,float a, int p):Media(s,a){
            pages=p;
        }
        void display(void){
            cout<<" Title: "<<title<<endl;
            cout<<" Pages: "<<pages<<endl;
            cout<<" Prices: "<<price<<endl;
        }
};
class tape: public Media{
    float time;
    public:
        tape(char *s,float a, float t): Media(s,a){
            time =t;
        }
        void display(void){
            cout<<" Title: "<<title<<endl;
            cout<<" Playtime: "<<time<<endl;
            cout<<" Prices: "<<price<<endl;
        }
};
int main(){
    char *title = new char[30];
    float price,time;
    int pages;
    cout<<"-------Enter Book Details-------"<<endl;
    cout<<" Title: "; cin>>title;
    cout<<" Pages: "; cin>>price;
    cout<<" Prices: "; cin>>pages;

    book book1(title,price,pages);

    cout<<"-------Enter Tape Details-------"<<endl;
    cout<<" Title: "; cin>>title;
    cout<<" Playtime: "; cin>>time;
    cout<<" Prices: "; cin>>pages;

    tape tape1(title,price,time);

    Media *list[2];
    list[0]=&book1;
    list[1]=&tape1;
    cout<<"---------Here Book Details Describe--------";
    list[0]->display();
    cout<<"---------Here Tape Details Describe--------";
    list[1]->display();
    return 0;
}