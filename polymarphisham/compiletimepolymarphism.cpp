//Polymorphism means "many forms." It allows the same function to perform 
//different tasks depending on the object.


#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;

    cout << obj.add(10, 20) << endl;
    cout << obj.add(10, 20, 30) << endl;

    return 0;
}