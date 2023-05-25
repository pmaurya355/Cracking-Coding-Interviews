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

ListNode*  deleteMiddleNode(ListNode* n, ListNode* head){ 
    // if(head != NULL && head == n){
    //     return head->next;
    // }
    n->val = n->next->val;
    n->next = n->next->next;
    
    return head;
}

int main(){
    vector<int> arr = {1,2,6,3,3,1,4};
    ListNode* head = makeList(arr);
    traverseList(deleteMiddleNode(head->next->next, head));
}