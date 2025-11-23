#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


int comp(int a, int b){
  return a>b;
}


int main(){
  vector<int> v;
  v.push_back(3);
  v.push_back(7);
  v.push_back(0);
  v.push_back(2);

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  
  for(int i: v){
    cout<<i<<" ";
  }
}

