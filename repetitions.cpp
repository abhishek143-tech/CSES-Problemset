#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     string s;
     cin>>s;
    int count=1;
    int max_count = 1;
     for(int i=0;i<s.length();i++){
         if(s[i]==s[i+1]){
             count++;
             if(count>max_count){
                 max_count = count;
             }
         }else{
             count=1;
         }
     }
     cout<<max_count<<endl;
     return 0;
}