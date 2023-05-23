#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>


using namespace std;
void nullifyRows(int x, vector<vector<int>> &arr){
    for(int i=0;i<arr[0].size();i++)
        arr[x][i] = 0;
}
void nullifyColumns(int x, vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++)
        arr[i][x] = 0;
}

void zeroMatrix(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<bool> rows(m,false);
    vector<bool> columns(n,false);
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            if(arr[i][j] == 0){
                rows[i] = true;
                columns[j] = true;
            }
        }
    }
    for(int i =0; i<m; i++) {
        if(rows[i])
            nullifyRows(i,arr);
    }
     for(int i =0; i<m; i++) {
        if(columns[i])
            nullifyColumns(i,arr);
    }
    
}



int main(){
    vector<vector<int>> arr= {{1,0,3},{4,5,6},{7,8,9}}; 
    zeroMatrix(arr);
    for(int i =0; i<arr.size(); i++){
        for(int j =0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
       
    }
    return 0;

}