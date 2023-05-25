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

ListNode* partition(ListNode* node, int k){
    ListNode* head = node;
    ListNode* tail = node;

    while(node != NULL){
        ListNode* temp = node->next;
        if(node->val<k){
            node->next = head;
            head = node;
        } else{
            tail->next = node;
            tail = node;
        }
        node = temp;
    }
    tail->next = NULL;
    return head;
}

int main(){
    vector<int> arr = {3,5,8,5,10,2,1};
    ListNode* node = makeList(arr);
    traverseList(partition(node , 5));
}