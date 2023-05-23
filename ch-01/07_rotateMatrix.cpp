#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>


using namespace std;

void rotateMatrix(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i =0; i<n; i++){
        for(int j =i; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
       
    }
    for(int i=0; i<n; i++){
        int l=0, r=n-1;
        while(l<=r){
            swap(arr[i][l], arr[i][r]);
            l++;
            r--;
        }
    }
}


int main(){
    vector<vector<int>> arr= {{1,2,3},{4,5,6},{7,8,9}}; 
    rotateMatrix(arr);
    for(int i =0; i<arr.size(); i++){
        for(int j =0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
       
    }
    return 0;

}