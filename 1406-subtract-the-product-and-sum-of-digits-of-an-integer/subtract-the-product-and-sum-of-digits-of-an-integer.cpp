class Solution {
public:
    int subtractProductAndSum(int n) {
        int x = 1, y= 0;
        while(n>0)
        {
            int digit = n%10;
            x = x * digit ;
            y = y + digit ;
            n /= 10;
        }
        return x - y ;
    }
};