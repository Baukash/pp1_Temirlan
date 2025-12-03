#include <iostream>
using namespace std;


int fib(int n, int m){
  if(m<=1) return m;
  return n*fib(n,  m-2)+fib(n, m-1);
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    cout<<fib(n, m-1);
}
