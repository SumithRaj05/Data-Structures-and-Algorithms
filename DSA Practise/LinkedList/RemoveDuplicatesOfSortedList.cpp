// Given the head of a sorted linked list, 
// delete all duplicates such that each element 
// appears only once. Return the linked list 
// sorted as well.

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* output = head;
        ListNode* temp;
        while(head->next != nullptr){
            temp = head->next;
            if(head->val == temp->val){
                head->next = temp->next;
            }else{
                head = head->next;
            }
        }
        return output;
    }
};