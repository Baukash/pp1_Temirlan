#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin>>s;

    int dec=0;

    int j=0;

    for(int i=s.size()-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9') dec+=(int(s[i])-48)*pow(16,j);
        else if(s[i]=='A') dec+=10*pow(16,j);
        j++;
    }

    cout<<dec;
}