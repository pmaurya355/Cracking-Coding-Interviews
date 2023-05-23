#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void URLify(string &str, int len){
    int count=0, index =0;
     for(int i =0 ; i<len;i++){
        if(str[i] == ' ') count++;
     }
     index = len + count*2;
     for(int i = len -1 ; i>=0;i--){
         if(str[i] == ' '){
            str[index -1] = '0';
            str[index -2] = '2';
            str[index -3] = '%';
            index=index-3;
         } else{
            str[index-1] = str[i];
            index--;
         }
     }
}


int main(){
    string str = "Mr John Smith    ";
    int len = 13;
    URLify(str,len);
    cout << str;
    
    return 0;

}