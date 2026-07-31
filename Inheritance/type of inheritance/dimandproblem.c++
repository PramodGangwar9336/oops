#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"showing Base class"<<endl;
    }
};

class A:public base{

};
class B:public base{

};
class c:public A,public B{

};int main(){
    c *c1=new c();
    c1->A::show();
}