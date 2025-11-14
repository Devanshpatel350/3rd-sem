// CONTAINER WITH MOST WATER BY BRUTE FORCE APPROACH
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxwater(vector<int> height, int n){
    int maxwater = 0, width, length, area;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            width = j - i;
            length = min(height[i], height[j]);
            area = length * width;
            maxwater = max(maxwater, area);
        }
    }
    return maxwater;
}
int main(){
    int n;
    cout << "enter size of a vector : ";
    cin >> n;
    vector<int> height(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    int ans = maxwater(height, n);
    cout << "maximum amount of water container can store : " << ans << endl;
    return 0;
}