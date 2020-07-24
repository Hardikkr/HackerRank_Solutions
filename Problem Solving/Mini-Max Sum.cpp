#include<iostream>
using namespace std;

int main(){
    long arr[1001], m=0, sum1=0, sum2=0;
    int i=0, j=0;
    int n=5;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
   
    for(i=0; i<n; i++){
       for(j=0; j<n-1; j++){
          if(arr[j]>arr[j+1]){
           m=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=m;
         }
       }  
    }

    for(i=0; i<n-1; i++){
        sum1+=arr[i];
    }
    for(i=1; i<n; i++){
        sum2+=arr[i];
    }

    cout<<sum1<<" "<<sum2;

    return 0;
}
