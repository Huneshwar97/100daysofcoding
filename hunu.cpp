#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1;
    cin>>s1;
    int count1=0;
    int count2=0;
    for(int i=0;i<s1.size();i++){
        if(isupper(s1[i])==0) count1++;
        else count2++;
    }
    if (count1<count2)
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    }
    else
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        cout<<s1; 
    return 0;
    
}

