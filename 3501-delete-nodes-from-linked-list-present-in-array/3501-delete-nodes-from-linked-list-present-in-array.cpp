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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> set(nums.begin(), nums.end());

        ListNode solve(0);
        ListNode* tempSolve = &solve;

        ListNode* curr = head;

        while(curr != NULL){
            if(set.find(curr->val) == set.end()){
                tempSolve->next = new ListNode(curr->val);
                tempSolve = tempSolve->next;
            }
            curr = curr->next;
        }

        return solve.next;

    }
};