#include<iostream>
#include<math.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                int a=(abs(i-2)+abs(j-2));
                cout<<a;
            }
        }
    }
    return 0;
}

