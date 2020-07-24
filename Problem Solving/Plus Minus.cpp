#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i=0, n, arr[1001];
    float countP=0, countN=0, count0=0;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        if(arr[i]>0) 
          countP+=1;
        else if(arr[i]<0) 
          countN+=1;
        else if(arr[i]==0) 
          count0+=1;
    }
    cout<<setprecision(6);
    cout<<countP/n<<endl;
    cout<<countN/n<<endl;
    cout<<count0/n<<endl;

    return 0;
}
