//Abstraction is the process of hiding implementation details and showing 
//only the essential features to the user.


#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car Started" << endl;
    }

    void stop() {
        cout << "Car Stopped" << endl;
    }
};

int main() {
    Car *c=new Car();

    c->start();
    c->stop();
}