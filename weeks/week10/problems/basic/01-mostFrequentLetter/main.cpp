#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    int a[26]={0};

    for(int i=0; i<n; i++){
        cin >> s;

        for(int j=0; j<s.size(); j++){
            if('A' <= s[j] && s[j] <= 'Z'){
                a[s[j]-'A']++;
            }

            if('a' <= s[j] && s[j] <= 'z'){
                a[s[j]-'a']++;
            }
        }
    }

    int maxIndex=0;
    int max=0;

    for(int i=0; i<26; i++){
        if(a[i]>max){
            maxIndex=i;
            max=a[i];
        }
    }

    char temp='A'+maxIndex;
    cout << temp << " " << max;

    return 0;
}
