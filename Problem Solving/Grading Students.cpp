#include<iostream>
using namespace std;
int main(){
    int n, grade[10001], i=0, j=0, m=0;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>grade[i];
    }

    for(i=0; i<n; i++){
        if(grade[i]>=38){
            for(j=40; j<=100; j=j+5){
                if((j-grade[i]==1)||(j-grade[i]==2)){
                    m=j-grade[i];
                    grade[i]=grade[i]+m;
                }
            }
        }
        else continue;
    }

    for(i=0; i<n; i++){
        cout<<grade[i]<<endl;
    }
    
    return 0;
}
