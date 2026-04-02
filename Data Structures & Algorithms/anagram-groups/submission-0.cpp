class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
    map<string, int> mp;
    vector<vector<string>> arr;
    int j = 0;

    for (int i = 0; i < n; i++) {
        string a = strs[i];
        sort(a.begin(), a.end());

        if (mp.find(a) != mp.end()) {
            arr[mp[a]].push_back(strs[i]);
        } else {
            mp[a] = j;
            arr.push_back(vector<string>{strs[i]});
            j++;
        }
    }

    return arr;
    }
};
