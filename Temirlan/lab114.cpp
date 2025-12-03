#include <iostream>
using namespace std;


int rec(int n){
  if(n==0) return 1;
  return rec(n-1)*2;
}

int main(){
    int n;
    cin>>n;
    
    cout<<rec(n);

}


// n = 6    i=5   1
// n 5      3     2
// n 4      1     3
// n 3      -1    4
// n 2      -3    5 
