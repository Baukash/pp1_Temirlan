#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    int num;
    vector<int> v;
    while(cin>>num){
      if(num!=0) v.push_back(num);
      else break;
    }
    
    for(int i: v){
      cout<<i<<" ";
    }

    
}

//  