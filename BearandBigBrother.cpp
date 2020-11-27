#include<iostream>
#include<string>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int l,b;
    cin>>l>>b;
    int count=0;
    while(l<=b){
        l=l*3;
        b=b*2;
        count++;
    }
    cout<<count;
    return 0;
}

