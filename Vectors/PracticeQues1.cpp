// PRACTICE QUESTION ...(1)...
// Given numbers from 1 to n. Find the number that occurs twice and the number that is missing.
#include <iostream> 
#include <vector>
using namespace std;
vector<int> FUNC(vector<int> vec, int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i] == vec[j]){
                ans.push_back(vec[j]);
                ans.push_back(j+1);
                return ans;
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter size of a vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements of a vector from 1 to " << n << " : " ;
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    vector<int> ans = FUNC(vec, n);
    cout << "The repeated element is " << ans[0] << " and the number that is missing at that place is " << ans[1] << "." << endl;
    return 0;
}