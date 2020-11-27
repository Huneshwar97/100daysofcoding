#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1;
    cin>>s1;
    int a[256]={0};
    int count=0;
    for(int i=0;i<s1.size();i++)
        a[s1[i]]++;
    for(int i=0;i<256;i++){
        if(a[i]>=1)
            count++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
    
}

