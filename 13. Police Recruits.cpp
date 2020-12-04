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
    cin>>t;int n;
    int sum=0;
    int count=0;
    while(t--){
        cin>>n;
        if(n<0 and sum>0)
            sum-=1;
        else if(n<0 and sum<=0)
            count++;
        else 
            sum+=n;

    }
    cout<<count;
    return 0;
    
}

