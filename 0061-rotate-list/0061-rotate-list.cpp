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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* next = NULL;
        ListNode* pre = NULL;
        ListNode* temp = head;
        if(!head || k ==0 || !head->next){return head;}
        int count = 1;
        while(temp->next){
            count ++;
            temp = temp->next;
        }
        count = k%count;
        temp->next = head;
        temp = temp->next;
        for(int i = 0;i<=count;i++){
            pre = temp;
            temp = temp->next;
            next = temp->next;
        }
        pre->next = NULL;
        return temp;

    }
};