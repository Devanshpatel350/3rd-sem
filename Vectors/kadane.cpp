//  KADANE'S ALGORITHM TO FIND MAXIMUM SUBARRAY SUM
#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int a[n];
    cout << "enter "<< n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int currentsum=0, maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout << "maximum subarray sum : " << maxsum;
    return 0;
}