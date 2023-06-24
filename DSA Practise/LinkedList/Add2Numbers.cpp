// You are given two non-empty linked lists representing two 
// non-negative integers. The digits are stored in reverse order, 
// and each of their nodes contains a single digit. Add the two 
// numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading 
// zero, except the number 0 itself.


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = new ListNode();
        ListNode* temp = head;
        while(l1!=nullptr && l2!=nullptr){
            temp->next = new ListNode();
            temp = temp->next;
            temp->val = l1->val + l2->val;
            if(carry){
                carry = 0;
                temp->val +=1;
            }
            if(temp-> val > 9){
                carry = 1;
                temp->val = temp->val%10;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            temp->next = new ListNode();
            temp = temp->next;
            temp->val = l1->val;
            if(carry){
                carry = 0;
                temp->val +=1;
            }
            if(temp-> val > 9){
                carry = 1;
                temp->val = temp->val%10;
            }
            l1 = l1->next;    
        }
        while(l2!=nullptr){
            temp->next = new ListNode();
            temp = temp->next;
            temp->val = l2->val;
            if(carry){
                carry = 0;
                temp->val +=1;
            }
            if(temp-> val > 9){
                carry = 1;
                temp->val = temp->val%10;
            }
            l2 = l2->next;
        }
        if(carry){
            carry = 0;
            temp->next = new ListNode();
            temp = temp->next;
            temp->val = 1;
        }
        if(head->next == nullptr){
            return head;
        }
        head = head->next;
        return head;
    }
};