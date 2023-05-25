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


ListNode* loop(ListNode* head){
    ListNode* slow = head , *fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) break;
         }
        if (!(fast && fast->next)) return NULL;
        while( head != slow){
            head = head->next;
            slow = slow->next;
        }
        return head; 
}

