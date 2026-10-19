# include <iostream>
using namespace std;

int main(){
    int n=0;
    int sumtime=0;
    int limit=0;
    int temp=0;
    int count=0;
    cin >> n >> limit;

    for (int i=0; i<n; i++){
        cin >> temp;
        sumtime += temp;

        if(temp < limit){
            count++;
        }

        
    }
    int min=0;
    int second=0;
    min=sumtime/60;
    second=sumtime-(min*60);
    cout << min << " " << second << " ";
    return 0;
}