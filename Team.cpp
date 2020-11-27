#include<iostream>
#include<string>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    int count2=0;
    while(t--){
        int a[3];
        int count=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                count++;
            }
        }
        if(count>=2)
            count2++;
    }
    cout<<count2;
    return 0;
}

