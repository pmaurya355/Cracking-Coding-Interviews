#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void traverseList(ListNode* head){
    ListNode* n = head;
    while(n != NULL){
        cout << n->val << ' ';
        n = n->next;
    }
}

ListNode* makeList(vector<int> &arr){
    ListNode* head = nullptr;
    ListNode* prev = nullptr;

    for (int i = 0; i < arr.size(); i++) {
        ListNode* newNode = new ListNode;
        newNode->val = arr[i];
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            prev->next = newNode;
        }

        prev = newNode;
    }

    return head;
}

