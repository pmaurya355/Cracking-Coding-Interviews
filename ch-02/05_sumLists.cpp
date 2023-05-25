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

ListNode* sumLists(ListNode* l1, ListNode* l2){
    ListNode* dummy = new ListNode();
    ListNode* temp = dummy;
    int carry = 0;
    while(l1 || l2 || carry){
        int sum = 0;
        if(l1){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum/10;
        
        ListNode* newNode = new ListNode(sum%10);
        temp->next = newNode;
        temp = temp->next;
    }
    return dummy->next;
}

int main(){
    // 617
    // 295
    // 912
    vector<int> arr1 = {7,1,6, 5};
    vector<int> arr2 = {5,9,2, 5};


    ListNode* head1 = makeList(arr1);
    ListNode* head2 = makeList(arr2);
    // ListNode* sumhead = sumLists(head1, head2);
    traverseList(sumLists(head1, head2)); 
}