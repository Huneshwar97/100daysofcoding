#include<iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a,b;
    cin>>a>>b;
    string die_roll[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    int x=max(a,b);

    cout<<die_roll[6-x];
    return 0;
}
