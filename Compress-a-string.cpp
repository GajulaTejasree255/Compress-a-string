#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;

 
int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(long unsigned int i=0;i<s.length();i++){
        mp[(s[i])]++;
        if(s[i]!=s[i+1]){
            cout<<s[i]<<mp[(s[i])];
            mp.erase(s[i]);
        }
    }
    return 0;
}