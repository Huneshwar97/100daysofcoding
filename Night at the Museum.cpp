#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin >> s;
    int sum = 0;
    if(((s[0]-'a')+1)>13)
        sum+=(26-(s[0]-'a'));
    else
         sum+=(s[0]-'a');
    for (int i = 1;i < s.size(); i ++){
        int x =(s[i]-'a');
        int y = (s[i-1]-'a');
        sum+=min(abs(x-y),26-abs(x-y));
    }   
    cout<<sum;
  
    return 0;

}

