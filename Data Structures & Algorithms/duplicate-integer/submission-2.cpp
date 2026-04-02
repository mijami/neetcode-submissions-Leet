class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
            map<int,bool>mp;
            int fl=0;
            for(int i=0;i<nums.size();i++)
            {
                if(mp[nums[i]]==true)
                {
                    fl++;
                    break;
                }
                mp[nums[i]]=true;
            }
            if(fl) return true;
            else return false;
    }
};
