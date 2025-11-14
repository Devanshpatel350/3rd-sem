// STATIC OBJECT
#include <iostream>
using namespace std;
class Example {
    public:
    Example(){
        cout <<"CONSTRUCTOR CALL ..." << "\n";
    }
    ~Example(){
        cout <<"DESTRUCTOR CALL ..." << "\n";
    }
};
int main() {
    int a=0;
    if(a==0){
        static Example eg1;  // OBJECT LIFETIME CREATE HOJAYEGA CODE END HONE KE BAAD HI DELETE HOGA (DESTRUCTOR CALL HOGA)
    }
    cout << "CODE ENDING ..." << "\n";
    return 0;
}
