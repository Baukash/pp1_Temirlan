#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main(){
    int n;
    cin>>n;

    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    cout<<s.size();
}

// 5
// 4 4 5 6 1