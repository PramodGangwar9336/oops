#include <iostream>
using namespace std;

// Abstract Class
class Person {
public:
    virtual void work() = 0;   // Pure Virtual Function
};

// Child Class
class Student : public Person {
public:
    void work() {
        cout << "Student is studying." << endl;
    }
};

// Child Class
class Teacher : public Person {
public:
    void work() {
        cout << "Teacher is teaching." << endl;
    }
};

int main() {
    Person *p;

    Student s;
    Teacher t;

    p = &s;
    p->work();

    p = &t;
    p->work();

    return 0;
}