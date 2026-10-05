class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = mp.find(target - nums[i]);
            if (it != mp.end() && i != it->second)
            {
                ans.push_back(min(i, it->second));
                ans.push_back(max(i, it->second));
                return ans;
            }
        }
        return ans;
    }
};
