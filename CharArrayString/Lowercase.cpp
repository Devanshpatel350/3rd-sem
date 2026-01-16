// LOWERCASE
#include <iostream>
#include <cstring>
using namespace std;
void Lowercase(char word[], int n){
    for(int i=0; i<n; i++){
        int ch = word[i];
        if(ch >= 'a' && ch <= 'z'){
            continue;
        }else if(ch >= 'A' && ch <= 'Z'){
            word[i] = ch - 'A' + 'a';
        }
    }
}
int main(){
    char word[100];
    cout << "Enter a string : ";
    cin.getline(word, 100);
    Lowercase(word, strlen(word));
    cout << "Elements of a string in Lowercase form : " << word << endl;
    return 0;
}