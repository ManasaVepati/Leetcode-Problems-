class Solution {
public:
    int numberOfSteps(int x) {
        int c = 0;
        while(x>0)
        {
            if(x%2==0)
            {
                x = x/2;
                c++;
            }
            else{
                x = x-1;
                c++;
            }
        }
        return c;
    }
};