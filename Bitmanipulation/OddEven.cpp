#include <iostream>
using namespace std;
void OddEven(int n){
    if((n & 1) == 0){    // !(n & 1)
        cout << "Even" << "\n";
    }else{
        cout << "Odd" << "\n";
    }
}
int main(){
    int n;
    cout << "Enter value : ";
    cin >> n;
    OddEven(n);
}