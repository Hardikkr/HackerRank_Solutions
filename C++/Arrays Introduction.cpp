#include <iostream>
using namespace std;

int main() {
    int i=0, n, array[1000];
    cin>>n;
    for(i=0; i<n; i++)
      cin>>array[i];

    for(i=n-1; i>=0; i--)
      cout<<array[i]<<" ";

    return 0;
}
