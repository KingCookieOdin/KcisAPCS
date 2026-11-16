#include <iostream>
using namespace std;

int isPalindrome(string str){
    int backIndex=str.size()-1;
    for(int i=0; i<str.size()/2;i++){
        if(str[i]!=str[backIndex]){
            return 0;
        }
        else{
            return 1;
        }
    }
    return 1;
}

int main(){
    string s;
    while(cin>>s){
        int check=0;
        check=isPalindrome(s);
        if(check==1){
            cout<< "True" <<endl;
        }
        else{
            cout<< "False" <<endl;
        }
    }
}