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

ListNode* intersection(ListNode* head1,ListNode* head2 ){
    ListNode* a = head1;
    ListNode* b = head2;

    while(a != b){
        if(a == NULL) 
            a = head2;
        else
            a = a->next;
        
        if(b == NULL) 
            b = head1;
        else
            b = b->next;
    }
    return a;
}
