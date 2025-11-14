//  VALID ANAGRAM
#include <iostream>
using namespace std;
bool CheckAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "Not a Valid Anagram" << "\n";
        return false;
    }
    int count[26] = {0};  // 0 se initialize
    for(int i=0; i<str1.length(); i++){
        count[str1[i] - 'a']++;
    }
    for(int i=0; i<str2.length(); i++){
        if(count[str2[i] - 'a'] == 0){
            cout << "Not a Valid Anagram" << "\n";
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout << "Valid Anagram" << "\n";
    return true;
}
int main(){
    string str1;
    string str2;
    cout << "Enter 1st word : " << "\n";
    getline(cin, str1);
    cout << "Enter 2nd word : " << "\n";
    getline(cin, str2);
    CheckAnagram(str1, str2);
    return 0;
}