class Solution {
public:
    int minDifference(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       if(nums.size()<=4)return 0;

        int ans = INT_MAX;
       for(int i=0;i<=3;i++){
        ans = min(ans, max(nums[nums.size()-1-3+i]-nums[i], 0));
       }

       return ans;
    }
};
