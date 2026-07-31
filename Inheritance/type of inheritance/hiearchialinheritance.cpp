#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    int age;

  student(string n,int r,int a){
    name=n;
    rollno=r;
    age=a;
  }

    void markattend(){
        cout<<name <<" is present"<<endl;

    }
    void print(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<age<<endl;
    }
};


class CSCstudent:public student{
   public:
 void lab(){
    cout<<name<<"attend lab"<<endl;
 }
   CSCstudent(string n,int r,int a)
     :student(n,r,a){

   }
};
class Mbbsstudent: public student{
    public:

    Mbbsstudent(string n,int r,int a):student(n,r,a){}

   void opraction(){
    cout<<name <<"coding kar sakta hai"<<endl;
   }

};

int main(){
    // student *s1=new student("pramod",55555,22);
    CSCstudent *c1=new CSCstudent("ansh",8888,12);
    Mbbsstudent *co=new Mbbsstudent("rahul",9999,29);

    // s1->print();
    // s1->markattend();
    c1->print();
    c1->markattend();
    c1->lab();
    co->print();
    co->markattend();
    co->opraction();
    
}