#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string:";
    getline(cin, str2);
    for(int i=0; i<str1.length(); i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }   
for(int i=0; i<str2.length(); i++){
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] = str2[i] + 32;
        }
    }
    cout << "After converting to lowercase, the first string is: " << str1 << endl;
    cout << "After converting to lowercase, the second string is: " << str2 << endl;
    return 0;
}