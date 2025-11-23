#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


string change(string s, char e, char f){
  for(int i=0; i<s.size(); i++){
    if(s[i]==e) s[i]=f;
  }
  
  return s;
}

int main(){
  string s;
  cin>>s;
  
  char e, f;
  cin>>e>>f;
  
  cout<<change(s, e, f);
}