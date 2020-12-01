#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<t;i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout<<count;

    return 0;
    
}

