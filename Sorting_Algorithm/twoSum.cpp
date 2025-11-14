// Find Two number in an array whose sum is target 
#include <iostream>
using namespace std;
pair<int, int> twoSum(int *arr, int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return make_pair(i, j);
            }
        }
    }
}
int main(){
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "enter target element:: ";
    cin >> target;
    pair<int, int> result = twoSum(arr, n, target);
    cout << "index of two element are " << result.first << " & " << result.second << " whose sum is " << target << endl;
    return 0;
}
