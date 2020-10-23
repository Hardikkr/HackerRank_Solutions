#include<iostream>
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = (temp>*b)?(temp-*b):(*b-temp);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
