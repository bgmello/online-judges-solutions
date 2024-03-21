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
        if(head == nullptr)return head;
        int size = 0;
        ListNode* start = head;

        while(head!=nullptr)head = head->next, size++;

        k = k%size;

        if(k==0)return start;

        int rotate_idx = size-k;

        head = start;

        for(int i=0;i<rotate_idx-1;i++)head = head->next;

        ListNode* newstart = head->next, *newend = head;

        while(head->next != nullptr) head = head->next;

        head->next = start;

        newend->next = nullptr;

        return newstart;

    }
};
