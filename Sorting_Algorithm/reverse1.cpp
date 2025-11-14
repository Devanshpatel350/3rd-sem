#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr1[n];
    cout << "enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        arr2[j]=arr1[i];
    }
    for(int i=0;i<n;i++){
        arr1[i]=arr2[i];
    }
    cout << "elements of array in reverse order are : ";
     for(int i=0;i<n;i++){
        cout >> arr1[i];
    }
}
