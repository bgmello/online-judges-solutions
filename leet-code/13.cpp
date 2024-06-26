class Solution {
public:
    int romanToInt(string s) {
      int ans = 0;

      for(int i=0;i<s.length();i++){
        if(s[i]=='I'){
            if(i<s.length()-1 && (s[i+1] == 'V' || s[i+1] == 'X')){
                if(s[i+1]=='X')ans+=9, i++;
                else ans+=4, i++;
            }
            else{
                int tmp = 0;
                while(s[i]=='I' && i<s.length())i++, tmp++;
                ans+=tmp;
                if(i!=s.length())i--;
            }
        }
        else if(s[i]=='V'){
            ans += 5;
        }
        else if (s[i] == 'X'){
            if(i<s.length()-1 && (s[i+1]=='L' || s[i+1]=='C')){
                if(s[i+1]=='L')ans+=40, i++;
                else ans+=90, i++;
            }
            else{
                ans+=10;
            }
        }
        else if(s[i]=='L'){
            ans += 50;
        }
        else if(s[i]=='C'){
            if(i<s.length()-1 && (s[i+1]=='D' || s[i+1]=='M')){
                if(s[i+1]=='D')ans+=400, i++;
                else ans+=900, i++;
            }
            else{
                ans+=100;
            }
        }
        else if(s[i]=='D'){
            ans += 500;
        }
        else if(s[i]=='M'){
            ans += 1000;
        }
      }  
      return ans;
    }
    
};
