// FUNCTION OVERLOADING...
#include <iostream>
using namespace std;
class Print {
    public:
    void show(int x){
        cout << "int : " << x << "\n";
    }
    void show(string str){
        cout << "string : " << str << "\n";
    }
};
int main(){
    Print obj1;
    obj1.show(2);
    obj1.show("RADHE RADHE");
    return 0;
}
