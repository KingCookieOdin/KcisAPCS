#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i]=0;
    }

    int count=0;

    for (int i=1; i<n-1; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            b[i]=1;
            count++;
        }
    }

    cout << count << endl;

    for(int i=0; i<n; i++){
        cout << a[i];

        if(b[i]==1){
            cout << "+++++";
        }

        cout << endl;
    }

    return 0;
}
