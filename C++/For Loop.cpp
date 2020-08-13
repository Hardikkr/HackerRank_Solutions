#include <iostream>
using namespace std;

int main()
{
    int number=0, a=0, b=0;
    cin >> a;
    cin >> b;
    
    for(number=a; number<=b; number++){
        if(number == 1) cout<<"one";
        else if(number == 1) cout<<"one";
        else if(number == 2) cout<<"two";
        else if(number == 3) cout<<"three";
        else if(number == 4) cout<<"four";
        else if(number == 5) cout<<"five";
        else if(number == 6) cout<<"six";
        else if(number == 7) cout<<"seven";
        else if(number == 8) cout<<"eight";
        else if(number == 9) cout<<"nine";
        else if(number > 9){
            if(number % 2 == 0) cout<<"even";
            else cout<<"odd";
        }
        else cout<<"Less than 1";
        cout<<"\n";
    }

    return 0;
}
