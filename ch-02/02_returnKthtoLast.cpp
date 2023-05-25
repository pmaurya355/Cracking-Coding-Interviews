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

ListNode* returnKthtoLast(ListNode* head, int k){
    ListNode* p1 = head;
    ListNode* p2 = head;


    for(int i=0;i<k;i++){
        if(p1 == NULL) return NULL;
            p1 = p1->next;
    }

    while (p1 != NULL){
        p1=p1->next;
        p2=p2->next;
    }

    return p2;
    
}

int main(){
    vector<int> arr = {1,2,3,3,3,1,4};
    ListNode* head = makeList(arr);
    int k = 6;
    traverseList(returnKthtoLast(head , k));
}