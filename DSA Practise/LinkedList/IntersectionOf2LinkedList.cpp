// Given the heads of two singly linked-lists headA and headB, 
// return the node at which the two lists intersect. If the two 
// linked lists have no intersection at all, return null.

// The judge will then create the linked structure based on these 
// inputs and pass the two heads, headA and headB to your program. 
// If you correctly return the intersected node, then your solution 
// will be accepted.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1 = 0, count2 = 0;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        while(temp1 != NULL){
            temp1 = temp1->next;
            count1++;
        }
        while(temp2 != NULL){
            temp2 = temp2->next;
            count2++;
        }
        int diff = max(count1, count2) - min(count1, count2);
        temp1 = headA;
        temp2 = headB;
        if(count1>count2){
            while(diff != 0){
                temp1 = temp1->next;
                diff--;
            }
        }else{
            while(diff != 0){
                temp2 = temp2->next;
                diff--;
            }
        }
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};