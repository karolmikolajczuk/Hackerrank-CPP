#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int howmuch(string str){
    int much=1,
        leng=str.length();
    
    for(int i=0; i<leng; i++){
        if(str[i]==',')
            much++;
    }
    
    return much;
}

vector<int> splitt(string str){
    int n=howmuch(str);
    int temp=0;
    vector<int> ints(n);
    
    
    size_t last_colon=0;
    size_t last_beg=0;
    size_t how=0;    
    
    for(int i=0; i<n; i++){
        stringstream ss;
        ss<<str.substr(last_beg,
                       (last_colon=str.find_first_of(",",last_beg)) - last_beg);
        
        ss>>temp;
        ints[i]=temp;
        
        last_beg=last_colon+1;
    }
    
    return ints;
}

vector<int> parseInts(string str) {
    return splitt(str);    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
