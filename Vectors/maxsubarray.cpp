// BRUTE FORCE APPORCH TO FIND A MAXIMUM SUBARRAY SUM
#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter element of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currentsum=0;
        for(int end=start;end<n;end++){
            currentsum+=arr[end];
            maxsum=max(currentsum,maxsum);
        }
    }
    cout << "MAXIMUM SUBARRAY SUM :" << maxsum;
    return 0;
}