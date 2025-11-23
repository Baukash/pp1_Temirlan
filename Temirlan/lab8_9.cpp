#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;


int main(){
   set<float> s;
   int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        float x;
        cin>>x;
        s.insert(x);
    }

    vector<float> v;
    
    
    for(float i:s){
        v.push_back(i);
    }

    cout<<v[0];
}
