

//function==method  hota hai

// #include<iostream>
// using namespace std;
// class student{
//   public:
//   string name;
//   int age;
//   int rollno;
//   string collage;

//   student(string n,int a,int r,string c){
//     name=n;
//     age=a;
//     rollno=r;
//     collage=c;
//   }

// //methods  yea function

// void Markstudent(){
//     cout<<name <<" is present"<<endl;
// }

// void Print(){
//     cout<<name<<endl;
//       cout<<age<<endl;
//       cout<<rollno<<endl;
//       cout<<collage<<endl;

// }  
// };
// int main(){  //stack mein object ko rakhta hai
//   student s1("pramod",18,1234,"lotus instiute of management");
//    s1.Markstudent();
//     s1.Print();
// }


#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int age;
  int rollno;
  string collage;

  student(string n,int a,int r,string c){
    name=n;
    age=a;
    rollno=r;
    collage=c;
  }

//methods  yea function

void Markstudent(){
    cout<<name <<" is present"<<endl;
}

void Print(){
    cout<<name<<endl;
      cout<<age<<endl;
      cout<<rollno<<endl;
      cout<<collage<<endl;


}  
};
int main(){ //heap mein object ko rakheta hai
    
    student *s1=new student("pramod",18,1234,"lotus instiute of management");
    
    // s1->Print();
     //(*s1).Print();

    

 
}