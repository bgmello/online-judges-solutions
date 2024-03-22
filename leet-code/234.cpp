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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* start=head;
        while(head!=nullptr)s.push(head->val), head=head->next;

        head = start;
        while(head!=nullptr){
            if(head->val!=s.top())return false;
            s.pop();
            head = head->next;
        }

        return true;
    }
};
