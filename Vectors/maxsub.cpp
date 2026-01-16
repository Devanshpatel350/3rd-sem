#include <iostream>
#include <limits.h>
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
    int k;
    cout << "enter value of window: ";
    cin >> k;
    int wsum=0;
    int msum=0;
    for(int i=0;i<n;i++){
        wsum=wsum+arr[i];
    }
    msum=wsum;
    for(int i=k;i<n;i++){
        wsum= wsum + arr[i]-arr[i-k];
        if(wsum>msum){
            msum=wsum;
        }
    }
    cout << "max sum is : " << msum;
    return 0;
}