#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    unsigned long long int Q, count;
    string x;
    map<string, unsigned long long int>m;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>count>>x;
        switch(count){
            case 1:
                {
                    unsigned long long int y;
                    cin>>y;
                    map<string, unsigned long long int>::iterator it=m.find(x);
                    if(it==m.end())
                        m.insert(make_pair(x,y));
                    else{
                        unsigned long long int wynik=it->second;
                        wynik+=y;
                        m.erase(x);
                        m.insert(make_pair(x,wynik));
                    }
                    break;
                }
            case 2:
                m.erase(x);
                break;
            default:
                {   
                    map<string, unsigned long long int>::iterator it=m.find(x);
                    if(it==m.end())
                        cout<<"0"<<"\n";
                    else
                        cout<<it->second<<"\n";
                    break;
                }
        }
    }
    return 0;
}
