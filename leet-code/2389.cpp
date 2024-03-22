class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> prefixSum;
        prefixSum.push_back(0);
        for(int i=0;i<nums.size();i++)prefixSum.push_back(prefixSum[i]+nums[i]);

        vector<int> ans;

        for(auto q: queries){
            int i=0;
            while(i<prefixSum.size() && prefixSum[i]<=q)i++;
            ans.push_back(--i);
        }

        return ans;
    }
};
