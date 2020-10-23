#include<iostream>
using namespace std;

int main(){
    string a, b;
    char c;

    cin>>a;
    cin>>b;

    cout<<a.size()<<' '<<b.size()<<endl<<a<<b<<endl;
    
    c = a[0];
    a[0] = b[0];
    b[0] = c;

    cout<<a<<' '<<b;

    return 0;
}
