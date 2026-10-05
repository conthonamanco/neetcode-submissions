class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        vector<vector<int>> cnt(nums.size() + 1);

        for (int i : nums) mp[i]++;
        
        for (auto x : mp) cnt[x.second].push_back(x.first);

        for (int i = cnt.size() - 1; i >= 0; i--)
        {
            for (int x : cnt[i])
            {
                ans.push_back(x);  
                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
