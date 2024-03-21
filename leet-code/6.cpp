class Solution {
public:
    string convert(string s, int numRows) {
        string newString;
        int global_idx = 0;

        if(numRows==1)return s;

        for(int i=1;i<=numRows;i++){
            if(i==1 || i == numRows){
                int idx = i;
                while(idx<s.length()+1){
                    newString += s[idx-1];
                    idx+=2*numRows-2;
                }
            }
            else{
                int idx = i, second_idx = 2*numRows-i;
                while(idx<s.length()+1){
                   // cout << "-- " << newString << " " << idx << endl;
                    newString += s[idx-1];
                    //cout << "---- " << newString << " " << idx << endl;
                    if(second_idx < s.length()+1){
                         newString += s[second_idx-1];
                    }
                    //cout << "----- " << newString << " " << idx << endl;
                    idx += 2*numRows-2;
                    second_idx += 2*numRows-2;
                     
                }
            }
            
        }

        return newString;
    }
};
