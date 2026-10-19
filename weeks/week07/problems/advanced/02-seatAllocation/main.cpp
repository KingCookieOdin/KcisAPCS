# include <iostream>
using namespace std;
int main(){
    int cap=0;
    int req=0;
    while(cin>>cap){
        cin >> req;
        if(cap ==0 && req==0)
            break;

        int temp=0;
        int accept=0;
        int deny=0;
        for (int i=0; i<req; i++){
            cin >> temp;
            if (temp>cap){
                deny++;
            }
            else{
                accept++;
                cap= cap-temp;
            }
        }
        cout <<accept<< " "<< deny<<" "<<cap<<endl;
    }
}