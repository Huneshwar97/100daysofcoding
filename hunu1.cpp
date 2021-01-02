#include<iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int j=0;
    for (int i=0;i<s2.size();i++){
        if(s2[i]==s1[j]){
            j++;
        }
    }
    cout<<++j;
    return 0;

    
}
