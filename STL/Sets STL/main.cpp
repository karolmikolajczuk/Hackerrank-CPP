#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q,x,y;
    set<int>s;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>x>>y;
        if(x==1){
            s.insert(y);
        }else if(x==2){
            set<int>::iterator result=s.find(y);
            if(result!=s.end())
               s.erase(y); 
        }else{
            set<int>::iterator result=s.find(y);
            if(result!=s.end())
                cout<<"Yes"<<"\n";
            else
                cout<<"No"<<"\n";
        }
    }
    return 0;
}
