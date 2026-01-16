#include <iostream>
#include <climits>
using namespace std;
int main(){
        int arr[5]={1,2,3,4,5},i;
        int largest=INT_MIN;
        for(i=0;i<5;i++){
            largest = max(arr[i],largest);
        }
        cout << "max element is " << largest << endl ;
        int smallest=INT_MAX;
        for(i=0;i<5;i++){
            smallest = min(arr[i],smallest);
        }
        cout << "min element is " << smallest << endl;
        swap(largest,smallest);
        cout << "after swapping :\n max element is :" << largest << "\n" ;
        cout << " min element is :" << smallest << endl ;
    }