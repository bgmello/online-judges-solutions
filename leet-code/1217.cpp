class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int num_chips_even = 0, num_chips_odd = 0;

        for(auto p: position){
            if(p%2==0)num_chips_even++;
            else num_chips_odd++;
        }

        return min(num_chips_even, num_chips_odd);
    }
};
