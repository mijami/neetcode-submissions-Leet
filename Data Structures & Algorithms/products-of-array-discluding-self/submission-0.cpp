class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int fl=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                p=p*nums[i];
            }
            else 
            {
                fl++;
            }
        }
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            if(fl==1 && nums[i]==0) 
            {
                vec.push_back(p);
            }
            else if(fl==0)
            {
                vec.push_back(p/nums[i]);
            }
            else
            {
                vec.push_back(0);
            }
        }
        return vec;

    }
};
