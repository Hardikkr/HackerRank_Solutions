#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {   
//     long int n, q, i, j, len, q1, q2, a[1000][1000];
//     cin>>n>>q;

//     for(i=0; i<n; i++){
//         cin>>len;
//         for(j=0; j<len; j++){
//             cin>>a[i][j];
//         }
//     }

//     for(i=0; i<q; i++){
//         cin>>q1>>q2;
//         cout<<a[q1][q2]<<endl;
//     }

//     return 0;
// }


int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
