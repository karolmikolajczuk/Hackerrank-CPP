#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>en(n);
    for(int i=0; i<n; i++){
        cin>>en[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<en[i]<<" ";
    }
    
    
    
    return 0;
}
