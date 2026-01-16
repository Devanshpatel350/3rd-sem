#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> PAIRSUM(vector<int> vec, int n, int target){
    vector<int> ans;
    int pairsum;
    int st = 0, end = n-1;
    while(st < end){
        pairsum = vec[st] + vec[end];
        if(pairsum == target){
            ans.push_back(vec[st]);
            ans.push_back(vec[end]);
            return ans;
        }else if(pairsum < target){
            st ++;
        }else if(pairsum > target){
            end --;
        }
    }
}
int main(){
    int n;
    cout << "Enter size of a vector : " << endl;
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements of a vector in sorted form : " << endl;
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    int target;
    cout << "Enter target sum : ";
    cin >> target;
    vector<int> ans = PAIRSUM(vec, n, target);
    cout << "This is the sum of the elements " << ans[0] << " and " << ans[1] << " in the vector." << endl;
    return 0;
}