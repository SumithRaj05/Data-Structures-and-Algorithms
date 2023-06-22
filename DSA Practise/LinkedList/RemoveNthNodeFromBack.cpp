// Given the head of a linked list, remove the nth node 
// from the end of the list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            len++;
        }
        int idx = len-n-1;
        if(len == n){
            head = head->next;
            return head;
        }
        len = 0;
        temp = head;
        while(len != idx){
            temp = temp->next;
            len++;
        }
        if(temp->next == nullptr){
            temp = nullptr;
        }else{
            ListNode* temp2 = temp;
            temp2 = temp2->next;
            if(temp2->next == nullptr){
                temp->next = nullptr;
            }else{
                temp2 = temp2->next;
                temp->next = temp2;
            }
        }
        return head;
    }
}; 