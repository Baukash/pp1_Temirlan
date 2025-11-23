#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;


int main(){
    map<int, int> m;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        m[x]+=1;

        if(m[x]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(s.count(x)) cout<<"NO"<<endl;
        else{
            s.insert(x);
            cout<<"YES"<<endl;
        }

    }
}
