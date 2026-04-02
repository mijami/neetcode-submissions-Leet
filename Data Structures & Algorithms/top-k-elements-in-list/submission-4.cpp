class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>result;
        vector< pair< int, int> > vec;
        for(int i=nums.size()-1;i>=0;i--)
        {
            mp[nums[i]]++;
        }
        
        for(auto x:mp)
        {
           vec.push_back(make_pair(x.second, x.first));
        }
        sort(vec.rbegin(),vec.rend());
        int i=0;
        while(k--)
        {
            result.push_back(vec[i].second);
            i++;
        }
        return result;
    }
};
