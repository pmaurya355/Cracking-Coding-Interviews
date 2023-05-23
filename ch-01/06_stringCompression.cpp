#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string stringCompression(string str){
    int count =1;
    string newstring ="";
    for(int i=0;i<str.length();i++){
        if(i+1 > str.length() || str[i] != str[i+1]){
            newstring+= str[i];
            newstring+= to_string(count);
            count=1;
        } else{
            count++;
        }
    }
    if(newstring.length() >= str.length()) return str;
    else return newstring;
}


int main(){
    string str = "aaaaaaaaabbc";
    string ans = stringCompression(str);
    cout << ans;
    return 0;

}