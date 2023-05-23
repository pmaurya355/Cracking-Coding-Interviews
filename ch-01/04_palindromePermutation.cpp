#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkOdd(string str){
    unordered_map<char,int> mp;
    for(char ch: str){
        if(ch != ' '){
            if(ch >= 'A' && ch<='Z')   ch = ch - 'A' + 'a';
            mp[ch]++;
        }
     }
     int flag=0;
     for(auto x: mp){
        if((x.second % 2) !=0) flag+=1;
     }
     if(flag > 1) return false;
     else return true;
          
}



int main(){
    string str = "Tac Coa";
    bool ans = checkOdd(str);
    if(ans) cout<< "YES";
    else cout << "NO";
    return 0;

}