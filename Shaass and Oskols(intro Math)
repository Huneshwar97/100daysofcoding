#include<iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        a[x-1]+=y-1;
        a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
