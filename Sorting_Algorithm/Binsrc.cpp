// BINARY SEARCH 
#include <iostream>
using namespace std;
int Binsrc(int *arr, int n, int key)
   {
    int st=0,end=n-1;
    while(st<=end){
    int mid=(st+end)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<key){
        st=mid+1;
    }else if(arr[mid]>key){
        end=mid-1;
    }
    }
    return -1;
    }
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter searching element :: ";
    cin >> key;
    cout << "Element is found at an index :: " << Binsrc(arr, n, key) << endl;
    return 0;
}

