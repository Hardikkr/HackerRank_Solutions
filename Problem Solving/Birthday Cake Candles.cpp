#include<iostream>
using namespace std;

int main(){
    long i, n, ar[1000001];
    long count=0, num=0;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }

    for(i=0; i<n; i++){
        if(ar[i]>num) num=ar[i];
    }

    for(i=0; i<n; i++){
        if(ar[i]==num) count++;
    }

    cout<<count;
    
    return 0;
    
}
