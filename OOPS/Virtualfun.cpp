// VIRTUAL FUNCTION 
#include <iostream>
using namespace std;
class Parent {
    public:
    virtual void hello() {
        cout << "HELLO EVERYONE..." << "\n";
    }
    void show() {
        cout << "Parent class show ..." << "\n";
    }
};
class Child : public Parent {
    public:
    void hello() {
        cout << "HELLO CHILDRENS..." << "\n";
    }
    void show() {
        cout << "Child class show ..." << "\n";
    }
};
int main(){
    Child c1;
    c1.show();
    Parent *p1;
    p1 = &c1;  // RUNTIME BINDING
    p1->hello();  // VIRTUAL FUNCTION
    return 0; 
}
