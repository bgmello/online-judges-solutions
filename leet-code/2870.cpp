class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_map<int, int> counter;
       unordered_map<int, int>::iterator itr;

       for(auto n: nums){
            if(counter.find(n)==counter.end())counter[n]=1;
            else counter[n]++;
       }

       int total = 0;

       for(itr=counter.begin();itr!=counter.end();itr++){
            int nums_6 = itr->second/6;
            int rest_6 = itr->second%6;

            if(rest_6==1 && nums_6==0)return -1;
            else if(rest_6==1){
                total+=3;
                nums_6--;
            }
            else if(rest_6==2 || rest_6==3)total+=1;
            else if(rest_6==5 || rest_6==4)total+=2;

            total += nums_6*2;
       }

       return total;
    }
};
