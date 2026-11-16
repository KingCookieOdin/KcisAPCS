#include <iostream>
#include<sstream>
using namespace std;

int reverseDigit(int digit){
    int ans =0;
    int neg=0;
    string temp, rev;
    if(digit<0){
        digit=-digit;
        neg=1;
    }
    stringstream ss1, ss2;
    ss1<<digit;
    ss1>> temp;
    for (int i=temp.size()-1; i>=0; i--){
        rev= rev+temp[i];
    }
    ss2<<rev;
    ss2>>ans;
    if(neg==1){
        ans=-ans;
    }
    return ans;
}

int main(){
    int digit=0;
    while(cin>>digit){
        if(digit==0){
            return 0;
        }
        cout<<reverseDigit(digit)<<endl;
    }
}