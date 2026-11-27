class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxproductvalue = (nums[0]-1)*1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int f = (nums[i]-1)*(nums[j]-1);
                if(f>maxproductvalue)
                {
                    maxproductvalue = f;
                }
            }
        }
        return maxproductvalue;
    }
};