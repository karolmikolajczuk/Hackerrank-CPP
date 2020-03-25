#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    cin>>a;
    vector<int>tablica(a);
    for(int i=0; i<a; i++){
        cin>>tablica[i];
    }
    cin>>b;
    cin>>c>>d;
    
    tablica.erase(tablica.begin()+b-1);
    tablica.erase(tablica.begin()+c-1, tablica.begin()+d-1);
    cout<<tablica.size()<<endl;
    for(int i=0; i<tablica.size(); i++){
        cout<<tablica[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}

