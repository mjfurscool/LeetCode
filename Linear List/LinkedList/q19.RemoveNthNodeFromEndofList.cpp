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
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* first = head;
        int l = 0;
        while(first != nullptr){
            l++;
            first = first->next;
        }
        
        first = &dummy;
        for(int i = 0 ; i < l - n ; i++){
            first = first->next;
            
        }
        first->next = first->next->next;
        return dummy.next;
    }
};