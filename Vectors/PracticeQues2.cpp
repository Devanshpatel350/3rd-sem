
#include <iostream>
#include <vector>
using namespace std;
vector<int> FUNC(vector<int> vec, int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(vec[i] + vec[j] + vec[k] == 0){
                    ans.push_back(vec[i]);
                    ans.push_back(vec[j]);
                    ans.push_back(vec[k]);
                }
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter size of a vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements of a vector : ";
    for (int i=0; i<n; i++){
        cin >> vec[i];
    }
    vector<int> ans = FUNC(vec, n);
    cout << "{";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
        if((i + 1) % 3 != 0){
            cout << ",";
        }else{
            cout << "} , {";
        }
    }
    return 0;
}