#include <iostream>
using namespace std;

int main(){
    int n, limit;
    cin >> n >> limit;

    int a[n];
    int sumTime=0;
    int count=0;

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=0; i<n; i++){
        sumTime += a[i];

        if(a[i] < limit){
            count++;
        }
    }

    cout << count << " " << sumTime/60 << " " << sumTime%60;

    return 0;
}