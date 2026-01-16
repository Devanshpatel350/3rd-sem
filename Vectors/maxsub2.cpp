#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k=2;
    for(int i=0;i<n-k;i++){
        int max=arr[i];
    for(int j=1;j<k;j++){
        if(arr[i+j]>max){
            max=arr[i+j];
        }
        cout << "max sum is :" << max << endl;
    }
}
cout << "\n";
    return 0;
}