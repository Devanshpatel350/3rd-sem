#include <iostream>
using namespace std;
void palindrome(int arr, int n){
    int st = 0, end = n-1;
    if(arr[st]==arr[end]){
        st++;
        end--;
        palindrome(arr, st, end);
    }
}
int main(){
    int arr[3] = {1, 2, 1};
    palindrome(arr, 3);

}
