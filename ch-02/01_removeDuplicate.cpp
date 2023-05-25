#include "headers/linked_list.h"
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>

using namespace std;

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

ListNode* removeDup(ListNode* head){
    unordered_set<int> st;
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr != NULL){
        if(st.find(curr->val) != st.end()){
            prev->next = curr->next;
        } else {
            st.insert(curr->val);
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,2,3,3,3,1,4};
    ListNode* head = makeList(arr);
    traverseList(removeDup(head));
}