#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    
    vector<int> v;
    
    int num;
    while(ss>>num){
        v.push_back(num);
    }
    
    for(int i: v){
      cout<<i<<" ";
    }

    
}

//  