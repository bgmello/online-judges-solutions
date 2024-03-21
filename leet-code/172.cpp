int numOf2s(int n){
    int count=0;
    while(n%2==0)count++, n/=2;

    return count;
}

int numOf5s(int n){
    int count=0;
    while(n%5==0)count++, n/=5;

    return count;
}

class Solution {
public:
    int trailingZeroes(int n) {
        int totalNum2 = 0, totalNum5 = 0;

        for(int i=1;i<=n;i++)totalNum2 += numOf2s(i), totalNum5 += numOf5s(i);

        return min(totalNum2, totalNum5);
    }
};
