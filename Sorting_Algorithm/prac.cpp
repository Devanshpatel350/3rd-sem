#include <iostream>
using namespace std;
int Binser(int arr[], int start,int end, int key)
   {

    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<key){
        return Binser(arr,mid+1,end,key);
    }else if(arr[mid]>key){
        return Binser(arr,start,mid-1,key);
    }
    else if(start>=end){
        return 0;
    }
    }

int main()
{
    int start,end,n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    start =0;
    end = n-1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter searching element :: ";
    cin >> key;
    cout << "Element is found at an index :: " << Binser(arr, start,end, key) << endl;
    return 0;
}