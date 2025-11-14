// OPTIMAL APPROACH TO FIND PRODUCT OF ARRAY EXCEPT SELF
#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> nums, int n){
    vector<int> pre(n);
    pre[0] = 1;
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] * nums[i-1];
    }
    vector<int> suff(n);
    suff[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        suff[i] = suff[i+1] * nums[i+1];
    }
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[i] = pre[i] * suff[i];
    }
    return ans;
}
int main(){
    int n;
    cout << "enter size of a vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter elements of a vector : ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    vector<int> ans = product(nums, n);
    cout << "product of a vector except self : ";
    for(int i=0;i<n;i++){
        cout << ans[i] <<endl;
    }
    return 0;
}