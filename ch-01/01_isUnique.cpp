#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isUnique(string str){
    if(str.length() >128) return false;

    unordered_map<char , int> mp;
    for(int i = 0; i<str.length(); i++){
         if(mp[str[i] - 'a'] >= 1)
            return false;
         mp[str[i] - 'a']++;    
    }
    return true;
}


int main(){
    string str = "abc";
    bool ans = isUnique(str);
    cout << ans;
    return 0;

}