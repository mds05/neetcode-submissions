/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr|| head->next==nullptr) return head;
        ListNode *prev=nullptr;
        ListNode *curr=head;
        ListNode *temp=head->next;
        while(temp->next!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=temp;
            temp=temp->next;
            
        }
        curr->next=prev;
        temp->next=curr;
        head=temp;
        return head;
    }
};
