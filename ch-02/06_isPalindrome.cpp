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
ListNode* reverseAndClone(ListNode* node){
    ListNode* head = NULL;
    while(node){
        ListNode* n = new ListNode(node->val);
        n->next = head;
        head = n;
        node = node->next;
    }
    return head;
}
bool isEqual(ListNode* one, ListNode* two){
    while(one !=NULL && two != NULL){
        if(one->val != two->val){
            return false;
        }
        one = one->next;
        two = two->next;
    }
    return (one == NULL && two == NULL);
}
bool isPalindrome(ListNode* head){
    ListNode* reversed = reverseAndClone(head);
    bool equal = isEqual(head, reversed);  
    return equal;   
}

int main(){
    vector<int> arr = {1,0,1};
    ListNode* head = makeList(arr);
    cout << isPalindrome(head); 
}