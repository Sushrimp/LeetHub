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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while(curr->next != NULL){
            bool flag = false;
            ListNode* temp = curr->next;
            int i = temp->val;

            while(i != 0){
                if(curr->val%i == 0 && temp->val%i==0){
                    curr->next = new ListNode(i, temp);
                    flag = true;
                    break;
                }
                i--;    
            }

            if(flag){
                curr = curr->next->next;
            } else {
                curr = curr->next;
            }
            
        }
        return head;
    }
};