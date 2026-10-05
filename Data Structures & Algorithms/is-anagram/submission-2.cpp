class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>  mp_s, mp_t;
        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i++)
        {
            mp_s[s[i]]++;
            mp_t[t[i]]++;
        }
        for (auto x : mp_s)
            if (x.second != mp_t[x.first]) return false;
        
        return true;
    }
};
