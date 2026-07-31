#include <iostream>
using namespace std;

class Father {
public:
    void money() {
        cout << "Father's Money" << endl;
    }
};
class Mother {
public:
    void care() {
        cout << "Mother's Care" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    c.money();
    c.care();
}