
#include <iostream>
using namespace std;

int main(){
    int n, limit;

    while(cin >> n){
        cin >> limit;

        if(n==0 && limit==0)
            break;

        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int count=0;
        int max=0;
        int cont=0;

        for(int i=0; i<n; i++){
            if(a[i] > limit){
                count++;
                cont++;
            }
            else{
                cont=0;
            }

            if(cont > max)
                max=cont;
        }

        cout << count << " " << max << endl;
    }

    return 0;
}
