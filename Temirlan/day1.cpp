#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;

    while(n!=0){
        if(n%16<=9) s.push_back(n%16+48);
        else if(n%16==10) s.push_back('A');
        else if(n%16==11) s.push_back('B');
        else if(n%16==12) s.push_back('C');
        else if(n%16==13) s.push_back('D');
        else if(n%16==14) s.push_back('E');
        else if(n%16==15) s.push_back('F');
        n=n/16;
    }




    for(int i=s.size()-1; i>=0; i--){
        cout<<s[i];
    }
}