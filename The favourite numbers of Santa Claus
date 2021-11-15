// My solution of https://www.e-olymp.com/en/problems/33

#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define ll long long

using namespace std;

bool isPrime (int n){
    if(n==1) return false;
    if(n==2) return true;
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

bool hasThreeAfterOne (int n){
    string s;
    while(n>0){
        s+=(n%10)+'0';
        n/=10;
    }
    reverse(s.begin(),s.end());
    for (int i=0; i<s.length()-1; i++){
        if ((s[i]=='1')&&(s[i+1]=='3')) return true;
    }
    return false;
}

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++){
        if((isPrime(i))&&(!hasThreeAfterOne(i))){
            c++;
            }
    }
    cout<<c;
}
