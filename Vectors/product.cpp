// BRUTE FORCE APPROACH TO FIND PRODUCT OF ARRAY EXCEPT SELF
#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> nums, int n){
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++){
            if(i != j){
                prod=prod*nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}
int main(){
    int n;
    cout << "enter size of vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    vector<int> ans = product(nums, n);
    cout << "product of a vector except self is : " << endl;
    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}