#include <iostream>
#include <limits.h>   //////////  #include <climits>
using namespace std;
int main(){
    int size=5,i;
    int marks[size];
    cout << "enter elements of array : ";
    for( i=0;i<size;i++){
        cin >> marks[i];
    }
    cout << "Array elements are : ";
    for(i=0;i<size;i++){
        cout << marks[i] << "\n" ;
    }
    int largest=INT_MIN ;    //  INT_MIN = - INFINITY
    for(i=0;i<size;i++){
        largest = max(marks[i],largest) ;
    }
    cout << "largest element of array is " << largest ;
    return 0;
}