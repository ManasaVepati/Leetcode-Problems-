class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int temp = num;
        if(num<10 && num>0)
        {
            return 1;
        }
        else{
            while(num>0)
            {
                 int digit = num%10;
                 if(temp%digit == 0)
                 {
                    count++;
            }   
              num /= 10;
            }
        }
        return count;
    }
};