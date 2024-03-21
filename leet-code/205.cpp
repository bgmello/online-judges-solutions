class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t, t_to_s;

        for(int i=0;i<s.length();i++){
            if(s_to_t.find(s[i])!=s_to_t.end() && s_to_t[s[i]]!=t[i])return false;
            if(t_to_s.find(t[i])!=t_to_s.end() && t_to_s[t[i]]!=s[i])return false;

            if(s_to_t.find(s[i]) == s_to_t.end())s_to_t[s[i]] = t[i];
            if(t_to_s.find(t[i]) == t_to_s.end())t_to_s[t[i]] = s[i];
        }

        return true;
    }
};
