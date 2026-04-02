class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);

        int k=distance(nums.begin(), it);
        return nums.size()==k? -1:k;
    }
};
