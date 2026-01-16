// 2 pointer approch
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int st=0,end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    cout << "elements of array in reverse order are : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}