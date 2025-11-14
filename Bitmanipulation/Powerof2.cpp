#include <iostream>
using namespace std;
void CHECK(int nums){
    if((nums & (nums - 1)) == 0){
        cout << "This num is power of 2";
    }else{
        cout << "This num is not a power of 2";
    }
}
int main(){
    int nums;
    cout << "Enter number : ";
    cin >> nums;
    CHECK(nums);
}