#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>


using namespace std;

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
}
bool stringRotation(string str1, string str2){
    if(str1.length() != str2.length()) return false;
    
    string newstring = str1 + str1;
    if(isSubstring(str2, newstring)) return true;
    return false;
    
}



int main(){
    string str1 = "waterbottle";
    string str2 = "erbotltat";
    bool ans = stringRotation(str1, str2);
    cout<< ans;
    return 0;

}