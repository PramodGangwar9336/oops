#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int age;
  int rollno;
  string collage;


  
};
int main(){
  student s1;
   s1.name="pramod";
    s1.age=18;
     s1.rollno=123456;
      s1.collage="lotus instuitite of management";


      cout<<s1.name<<endl;
      cout<<s1.age<<endl;
      cout<<s1.rollno<<endl;
      cout<<s1.collage<<endl;
}