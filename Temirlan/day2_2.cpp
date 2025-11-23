#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;


int main(){
    map<char, int> m;

    string s;

    getline(cin, s);

    for(char i: s){
        m[i]+=1;
    }

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
/*
    abcda

    m['b']=1
    m['c']=1
    m['d']=1
    m['a']=2
*/

// sfsdklj lksj sfs gdss

// s 6
// f 2
// d 2