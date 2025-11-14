// STOCK BUY AND SELL APPROACH 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxprofit(vector<int> price, int n){
    int maxprofit=0, bestbuy=price[0];
    for(int i=1;i<n;i++){
        if(price[i]>bestbuy){
            maxprofit = max(maxprofit, price[i]-bestbuy);
        }
        bestbuy = min(bestbuy, price[i]);
    }
    return maxprofit;
}
int main(){
    int n;
    cout << "enter size of a vector : ";
    cin >> n;
    vector<int> price(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> price[i];
    }
    int ans = maxprofit(price, n);
    cout << "maximum profit is : " << ans;
    return 0;
}