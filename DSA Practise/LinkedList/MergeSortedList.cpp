// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. The list should be made by 
// splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *output = new ListNode(0);
        ListNode *temp = output;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val>list2->val){
                temp->next = list2;
                temp = temp->next;
                list2 = list2->next;
            }else{
                temp->next = list1;
                temp = temp->next;
                list1 = list1->next;
            }
        }

        while(list1!=nullptr){
            temp->next = list1;
            temp = temp->next;
            list1 = list1->next;
        }

        while(list2!=nullptr){
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        }

        return output->next;
    }
};