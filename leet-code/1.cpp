class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> sorted_nums;

        for(int i=0;i<nums.size();i++)sorted_nums.push_back({nums[i], i});

        sort(sorted_nums.begin(), sorted_nums.end());

        int start = 0, end = sorted_nums.size()-1;

        int sum = sorted_nums[start].first+sorted_nums[end].first;

        while(sum!=target){
            //cout << start << " " << end << endl;
            if(sum>target)end--;
            else start++;
            sum = sorted_nums[start].first+sorted_nums[end].first;
        }

        return {sorted_nums[start].second, sorted_nums[end].second};
    }
};
