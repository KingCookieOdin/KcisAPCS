
#include <iostream>
using namespace std;

int main(){
    int a[1000] = {0};
    int n;
    int count=0;

    while(cin >> n){
        a[n]=1;
        count++;
    }

    int flag=0;

    for(int i=1; i<=count; i++){
        if(a[i]!=1){
            cout << i << endl;
            flag=1;
        }
    }

    if(flag==0)
        cout << "None";

    return 0;
}
