#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkPermutation(string str1, string str2){
     if (str1.length() != str2.length()) return false;

     unordered_map<char, int> mp;
     for(int i =0; i< str1.length();i++){
        mp[str1[i] ]++;
        mp[str2[i] ]--;
     }
     for(int i =0; i< str1.length();i++){
        if(mp[str1[i]] != 0)
           return false;
     }
     return true;
}


int main(){
    string str1 = "aabbcc";
    string str2 = "ccbbaa";
    bool ans =  checkPermutation(str1 , str2);
    if(ans) cout << "YES";
    else cout << "NO";
    return 0;

}