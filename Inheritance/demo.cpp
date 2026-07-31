// //nheritance means a child class can use the data and functions of a parent class.


//not using inheritance
// #include<iostream>
// using namespace std;

// class student{
//     public:
//    string name;
//    int age;
//    int rollno;
//    string college;

//    student(string n,int a,int r,string c){

//     name=n;
//     age=a;
//     rollno=r;
//     college=c;

//    }

//    void Markattendenc(){
//     cout<<name<<"is present"<<endl;
//    }
//     void print(){
//     cout<<name<<endl;
//     cout<<age<<endl;
//     cout<<rollno<<endl;
//     cout<<college<<endl;
//    }


// };

// class Engrieengstudent{
//     public:
//    string name;
//    int age;
//    int rollno;
//    string college;


//      Engrieengstudent(string n,int a,int r,string c){

//     name=n;
//     age=a;
//     rollno=r;
//     college=c;

//    }

  
//    void Markattendenc(){
//     cout<<name<<"is present"<<endl;
//    }

//    void print(){
//     cout<<name<<endl;
//     cout<<age<<endl;
//     cout<<rollno<<endl;
//     cout<<college<<endl;
//    }

// };

// int main(){
//  student *s1=new student("pramod",13,222222,"louts");
// Engrieengstudent *e1=new Engrieengstudent("ansh",11,11111,"invertise");
// s1->Markattendenc();
// s1->print();

// e1->Markattendenc();
// e1->print();
//}







//using inheritance
#include<iostream>
using namespace std;

class student{
    public:
   string name;
   int age;
   int rollno;
   string college;

   student(string n,int a,int r,string c){

    name=n;
    age=a;
    rollno=r;
    college=c;

   }

   void Markattendenc(){
    cout<<name<<"is present"<<endl;
   }
    void print(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollno<<endl;
    cout<<college<<endl;
   }


};


class Engrieengstudent : public student {

public:
 Engrieengstudent(string n, int a, int r, string c)
        : student(n, a, r, c){}
    

};

int main(){
 student *s1=new student("pramod",13,222222,"louts");
Engrieengstudent *e1=new Engrieengstudent("ansh",11,11111,"invertise");
s1->Markattendenc();
s1->print();

e1->Markattendenc();
e1->print();
}


  