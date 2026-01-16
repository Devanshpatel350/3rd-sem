#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> num={1,2,4,2,5,5};
    int ans=0;
    for(int val: num){
        ans=ans ^ val; 
    }
    cout << "unique element is : " << ans ;
}