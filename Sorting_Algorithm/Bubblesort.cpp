// BUBBLE SORT
#include <iostream>
#include <algorithm>
using namespace std;
void Bubblesort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Bubblesort(arr, n);
    cout << "elements of array in sorted form are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}