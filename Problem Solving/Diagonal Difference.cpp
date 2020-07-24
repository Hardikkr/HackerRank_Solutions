#include<iostream>
using namespace std;

int main(){
    int arr[1001][1001];
    int n, i=0, j=0, sum1=0, sum2=0, ans=0;

    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(i=0; i<n; i++){
        sum1+=arr[i][i];
    }

    for(i=0, j=n-1; i<n; i++, j--){
        sum2+=arr[i][j];
    }

    if(sum1>sum2) ans=sum1-sum2;
    else ans=sum2-sum1;

    cout<<ans;
    
    return 0;
}
