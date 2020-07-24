#include<iostream>
using namespace std;

int main(){
    int count, x, i=0, j=0, k, n, ar[100001];

    cin>>n>>k;
    for(i=0; i<n; i++)
      cin>>ar[i];

    for(i=0; i<n; i++){
      x=0;
      for(j=i+1; j<n; j++){
        x=ar[i] + ar[j];
        if((x%k)==0){
            count++;
        }
      }
    }

    cout<<count;

    return 0;
    
}
