class Solution {
public:
    bool isValid(string s) {
        if(s=="")return true;

        bool found = false;

        while(true){
            found = false;
            for(int i=0;i<s.length();i++){
                if(s.substr(i, 3)=="abc"){
                    s = s.substr(0, i)+s.substr(i+3, s.length()-i-3);
                    found = true;
                }
            }

            if(!found)break;
        }

        return s=="";
    }
};
