#include<iostream>
using namespace std;

union test{
    short a;
    char b[sizeof(short)];
};

void byteorder(){
    test t;
    t.a=0x0102;
    if(t.b[0]==0x02&&t.b[1]==0x01)
        cout<<"xiao duan"<<endl;
    else if(t.b[0]==0x01&&t.b[1]==0x02)
        cout<<"big "<<endl;
    else
    {
        cout<<"unknown"<<endl;
    }
    
}

int main(){
    //byteorder();
    cout<<char(69)<<endl;
    int a=0x0102345;
    char*p=(char*)&a;
    if(*p==0x45)
        cout<<"little";
   //cout<<*p<<endl;
    return 0;
}