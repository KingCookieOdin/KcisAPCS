#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    char b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        cin >> b[i];
    }
    int young=0;
    int member=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int price=120;
        if (a[i]<18){
            young++;
            price=80;
        }
        if (b[i]=='Y'){
            member++;
            price=price-20;
        }
        sum=sum+price;
    }

    cout <<young << " "<<member << " "<<sum;
}