// IN BUILT SORT IN C++
#include <iostream>
#include <algorithm>
using namespace std;
void Sort(int *arr, int n){
    sort(arr, arr + n, greater<int>()); // sort in decending
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
    Sort(arr, n);
    cout << "elements of array in sorted form are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}