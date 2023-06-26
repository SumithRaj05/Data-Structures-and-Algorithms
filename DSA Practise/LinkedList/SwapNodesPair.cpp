// Given a linked list, swap every two adjacent nodes and return its 
// head. You must solve the problem without modifying the values in the 
// list's nodes (i.e., only nodes themselves may be changed.)

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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        while(temp1 != nullptr && temp2->next != nullptr && temp2->next->next != nullptr){
            swap(temp1->val, temp2->val);
            temp1 = temp1->next->next;
            temp2 = temp2->next->next;
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};