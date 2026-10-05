# include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=0;
    int n=0;
    cin >>a>>b>>n;
    for (int i=0; i<n; i++){
        cout <<a<<" ";
        a=a+b;
    }
}