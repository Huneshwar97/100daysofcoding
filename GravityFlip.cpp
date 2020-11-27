#include<iostream>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x;
    cin>>x;
    int a[x-1];
    for(int i=0;i<x;i++)cin>>a[i];
    int l=sizeof(a)/sizeof(int);
    sort(a,a+x);
    for(int i=0;i<x;i++)cout<<a[i]<<" ";
    return 0;
}

