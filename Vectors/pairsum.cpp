#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> PAIRSUM(vector<int> vec, int n, int target){
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                return ans;
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter size of a vector : " << endl;
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements of a vector : " << endl;
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