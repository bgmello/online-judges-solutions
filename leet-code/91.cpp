// 226
// (2) - (26)
// (2) - (6)
// (26)
// (22) - (6)

// (xy) - (xy) - (x)(y)
// dp[i] = number of ways to decode string starting at index i
int numDecodingsDP(string s, int start_idx, vector<int> &dp){
    if(dp[start_idx]!=-1)return dp[start_idx];
    if(s.length()<=start_idx+2){
        if(s[start_idx]=='0') return dp[start_idx]=0;

            if(s.length()==start_idx+1)return dp[start_idx]=1;

            if(s[start_idx]>='3' && s[start_idx+1]=='0')return dp[start_idx]=0;
            if(s[start_idx]>='3')return dp[start_idx]=1;
            //(26) - (26)/(2)(6)
            //(10) - (10)/(1)(0)
            //(20)

            if(s[start_idx]=='2' && s[start_idx+1]<='6' && s[start_idx+1]>'0') return dp[start_idx]=2;
            if(s[start_idx]=='1' && s[start_idx+1]>'0') return dp[start_idx]=2;
            return dp[start_idx]=1;
    }

    //(1|020)

    int ans = 0;
    if(s[start_idx]=='0')return dp[start_idx]=0;
    //removing the first character 
    ans += numDecodingsDP(s, start_idx+1, dp);
    //removing the first two characters
    if(s[start_idx]>='3');
    //case 2
    else if(s[start_idx]=='2'){
        
        if(s[start_idx+1]<='6') ans += numDecodingsDP(s, start_idx+2, dp);
        
    }
    //case 1
    else {
        ans += numDecodingsDP(s, start_idx+2, dp);
    }
    return dp[start_idx]=ans;

}

class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.length(), -1);

        numDecodingsDP(s, 0, dp);
        //for(auto d: dp)cout << d << endl;
        return dp[0];
    }
};
