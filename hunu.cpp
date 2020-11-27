#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1,s2;
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cin>>s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    
    if(s1.compare(s2)==0) cout<<0;
    else if(s1.compare(s2)>0) cout<<1;
    else cout<<-1;

    return 0;
}

