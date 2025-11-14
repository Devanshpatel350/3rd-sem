// SELECTION SORT
#include <iostream>
#include <algorithm>
using namespace std;
void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
    for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minIdx]){
            minIdx = j;
        }
    }
    swap(arr[minIdx], arr[i]);
    }
}
int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    selectionSort(arr, n);
    cout << "elements of array in sorted form are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}