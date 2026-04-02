class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else if(nums[i]-nums[i-1]>1)
            {
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        if(nums.size()==0) ans=0;
        return ans;
    }
};
