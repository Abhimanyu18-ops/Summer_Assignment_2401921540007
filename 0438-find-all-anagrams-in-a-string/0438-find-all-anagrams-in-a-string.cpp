class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (p.size() > s.size()) return result;

        vector<int> countP(26, 0), countS(26, 0);

        for (char c : p) countP[c - 'a']++;
        for (int i = 0; i < p.size(); i++) countS[s[i] - 'a']++;

        if (countP == countS) result.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {
            countS[s[i] - 'a']++;
            countS[s[i - p.size()] - 'a']--;
            if (countP == countS) result.push_back(i - p.size() + 1);
        }

        return result;
    }
};
