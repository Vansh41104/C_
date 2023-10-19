#include <iostream>
using namespace std;

class DemoConst {
private:
    int n1, n2, n3;

public:
    int i;
    DemoConst(); // Declaration of the constructor

    void display() {
        cout << "\nNumber 1 is = " << n1 << "\nNumber 2 is = " << n2 << "\nNumber 3 = " << n3;
    }
};

DemoConst::DemoConst() {
    cout << "Calling The Constructor" << endl;
    i = 4;
    n1 = 10;
    n2 = 20;
    n3 = 30;
}

int main() {
    DemoConst i;
    i.display();
    return 0;
}
        
