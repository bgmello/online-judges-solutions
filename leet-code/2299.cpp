class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.length()<8)return false;

        for(int i=0;i<password.length()-1;i++){
            if(password[i]==password[i+1])return false;
        }

        bool has_lowerletter = false, has_upperletter = false, has_digit = false, has_special_character = false;

        for(auto c: password){
            if(c>='0' && c<='9')has_digit = true;
            if(c>='a' && c<='z')has_lowerletter = true;
            if(c>='A' && c<='Z')has_upperletter = true;
            for(auto s: "!@#$%^&*()-+"){
                if(s==c)has_special_character = true;
            }
        }

        return has_lowerletter && has_upperletter && has_digit && has_special_character;
    }
};
