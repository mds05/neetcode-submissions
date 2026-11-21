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
#include <unordered_map>
using namespace std;
class Solution {
public:
unordered_map<int,ListNode*> hashmap;
    int len(ListNode* head){
        int length=0;
        
        ListNode* curr=head;
        while(curr!=nullptr){
            hashmap.insert({length,curr});
            length++;
            curr=curr->next;
        }
        return length;
    }
    void reorderList(ListNode* head) {
        if(head==nullptr|| head->next==nullptr) return;
        int length=len(head);
        ListNode* curr=head;
        int index=1;
        int indexTracker=0;
        bool usedIndex=false;
        while(indexTracker<length-1){
            decltype(hashmap.end()) it;
            if(usedIndex==false){
                it=hashmap.find(length-index);
                usedIndex=true;
            }
            else{
                it=hashmap.find(index++);
                usedIndex=false;
            }
            curr->next=it->second;
            curr=curr->next;
            indexTracker++;
        }
        curr->next=nullptr;
    }
};
