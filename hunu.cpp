#include<iostream>
#include<string>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    char ch;
    int countA=0;int countD=0;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='A')
            countA++;
        else
            countD++;

    }
    if(countA==countD)
            cout<<"Friendship";

    else if(countA==max(countA,countD))
        cout<<"Anton";
    else 
        cout<<"Danik";
    return 0;
}

