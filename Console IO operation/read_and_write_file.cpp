#include <iostream>
#include <fstream>  //it gives standard base (fstreambase) and derived (ofstream and ifstream) class. 

//To work with file at first you have to open it. Two ways to open--> using constructor and using open() function.

using namespace std;

int main(){
    string st1,st2;

    //opening file using construtor and writing on it.

    st1="नारायणं नमस्कृत्य नरं चैव नरोत्तमम् । देवीं सरस्वतीं व्यासं ततो जयमुदीरयेत् ।।";
    // ofstream write("write.txt");
    // write<<st1;
    // write.close();

    //opening file using constructor and reading from it.

    ifstream read("read.txt");
    // read>>st2; This statement read oneline before space
    getline(read,st2);  //to overcome read>>st2 statement.
    cout<<st2;
    read.close();
    return 0;
}