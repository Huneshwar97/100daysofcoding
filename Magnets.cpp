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
    int a[t];
    cin>>a[0];
    int count=0;
    for(int i=1;i<t;i++){
        cin>>a[i];
        if(a[i]!=a[i-1])
            count++;
    }
    cout<<++count;
    return 0;
    
}

