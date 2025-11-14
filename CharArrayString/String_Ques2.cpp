// PRACTICE QUESTION ...(2)...
#include <iostream>
using namespace std;
void REPLACED(string str1, string str2, int i, int j){
    swap(str1[i],str2[j]);
    cout << "After swapping these index value : " <<"\n";
    cout << "Your 1st word is : " << str1 << "\n";
    cout << "& Your 2nd word is : " << str2 << "\n";
}
int main(){
    string str1;
    string str2;
    int i, j;
    cout << "Enter 1st word : ";
    getline(cin, str1);
    cout << "Enter 2nd word : ";
    getline(cin, str2);
    cout << "Enter index of first word : ";
    cin >> i;
    cout << "Enter index of second word which can be replaced by first : ";
    cin >> j;
    REPLACED(str1, str2, i, j);
    return 0;
}