class Solution {
public:
    bool isValid(string s) {
        stack<int> p;

        for(auto c: s){
            if(c=='(')p.push(0);
            else if(c=='{')p.push(1);
            else if(c=='[')p.push(2);
            else{
                if(p.empty())return false;
                if(c==')'){
                    if(p.top()!=0)return false;
                    p.pop();
                }
                if(c=='}'){
                    if(p.top()!=1)return false;
                    p.pop();
                }
                if(c==']'){
                    if(p.top()!=2)return false;
                    p.pop();
                }
            }   
        }
        return p.empty();
    }
};
