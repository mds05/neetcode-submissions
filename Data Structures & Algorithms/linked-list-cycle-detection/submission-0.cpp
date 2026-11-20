#include <unordered_set>
using namespace std;
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

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return false;
       unordered_set<ListNode*> visited;
       ListNode* curr=head;
       while(curr!=nullptr){
        auto it=visited.find(curr);
        if(it!=visited.end()){
           return true;
        }
        else{
            visited.insert(curr);
        }
        curr=curr->next;
       }
       return false; 
    }
};
