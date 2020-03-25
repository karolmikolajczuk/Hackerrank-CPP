#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c,d,e;
    int f,g;
    cin>>a>>b;
    c=a+b;
    f=a.length();
    g=b.length();
    d=b[0];
    e=a[0];
    for(int i=1; i<f; i++){
        d+=a[i];
    }
    for(int i=1; i<g; i++){
        e+=b[i];
    }
    cout<<f<<" "<<g<<endl;
    cout<<c<<endl;
    cout<<d<<" "<<e<<endl;
    return 0;
}
