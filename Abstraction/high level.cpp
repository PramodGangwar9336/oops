#include <iostream>
using namespace std;

class Car {  // tea classs abstract class hai iska object nahi ban sakta hai
    public:
    virtual void drive()=0;
    void start(){
        cout<<"car start"<<endl;
    }
};
class petrolcar:public Car{
    public:
    void drive(){
        cout<<"start petrol car"<<endl;

    }
};
class evcar:public Car{
    public:
    void drive(){
        cout<<"start evcar car"<<endl;
    }
};
int main(){
    //Car *c=new Car(); not allowed
    

    //potiner Car class ka ho ga lakin object ev yea petrol car ka bana ga 

    Car *pc= new petrolcar();
     Car *ec= new evcar();
    pc->drive();
     ec->drive();


}