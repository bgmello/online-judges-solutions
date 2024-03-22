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
        vector<vector<int>> ans(m, vector<int>(n, -1));

        int i = 0,j = 0, dir=0;

        while(head!=nullptr){
            ans[i][j] = head-> val;
            if(dir==0){
                if(j==n-1 || ans[i][j+1]!=-1)dir = 1, i++;
                else j++;
            }
            else if(dir==1){
                if(i==m-1 || ans[i+1][j]!=-1)dir=2, j--;
                else i++;
            }
            else if(dir==2){
                if(j==0 || ans[i][j-1]!=-1)dir=3, i--;
                else j--;
            }
            else if(dir==3){
                if(i==0 || ans[i-1][j]!=-1)dir=0, j++;
                else i--;
            }
            head = head->next;
        }

        return ans;
    }
};
