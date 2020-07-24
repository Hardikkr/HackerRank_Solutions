#include<iostream>
using namespace std;

int main(){
    long arr[1002],sum=0;
    int n,i;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        sum+=arr[i];
    }

    cout<<sum;

    return 0;
}
