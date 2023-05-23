#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool oneReplacement(string str1, string str2){
    int flag=0;
    for(int i=0;i<str1.length(); i++){
        if(str1[i] != str2[i])
           flag+=1;
    }
    if(flag == 1) return true;
    else return false;
}

bool oneEdit(string u, string v){
    // cout<< u << " " << v ;
    int index1 =0;
    int index2 =0;
    int flag=0;
    while(index1 < u.length() && index2 < v.length()){
        if(u[index1] != v[index2]){
            flag+=1;
            index2++;

         } else{
            index1++;
            index2++;
         }
    }
    if(flag>1) return false;
    else return true;
}


bool oneAway(string str1, string str2){
    if(str1.length() == str2.length()) return oneReplacement(str1,str2);
    else if(str1.length() -1 == str2.length()) return oneEdit(str2,str1);
    else if(str1.length() +1 == str2.length()) return oneEdit(str1,str2);
    else return false;
          
}



int main(){
    string str1 = "ple";
    string str2 = "pale";
    bool ans = oneAway(str1, str2);
    if(ans) cout<< "YES";
    else cout << "NO";
    return 0;

}