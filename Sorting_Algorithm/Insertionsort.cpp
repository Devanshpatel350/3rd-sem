// INSERTION SORT 
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(int *arr, int n) {
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev;
        for(prev =i-1 ; prev >= 0 && arr[prev] > curr ; prev--){
            swap(arr[prev], arr[prev+1]);
        }
        arr[prev + 1] = curr;
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
    insertionSort(arr, n);
    cout << "elements of array in sorted form are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}