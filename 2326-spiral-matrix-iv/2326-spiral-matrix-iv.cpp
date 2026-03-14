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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int strow= 0,stcol = 0;
        int erow = m-1,ecol = n-1;
        vector<vector<int>> mat(m,vector<int>(n,-1));
        
        while(head != NULL && strow<= erow && stcol <= ecol){
            //top
            for(int i = stcol;i<=ecol && head;i++){
                mat[strow][i] = head->val;
                head = head->next;
            }
            strow++;
            //right side
            for(int i = strow;i<=erow && head;i++){
                mat[i][ecol] = head->val;
                head = head->next;
            }
            ecol--;

            //bottom
            for(int i = ecol;i>=stcol && head;i--){
                mat[erow][i] = head->val;
                head = head->next;
            }
            erow--;

            //left 
            for(int i = erow;i>=strow && head;i--){
                mat[i][stcol] = head->val;
                head = head->next;
            }
           stcol++;
           
        }
        return mat;
    }
};