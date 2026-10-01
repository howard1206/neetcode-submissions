class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> sCount(26, 0);
        vector<int> tCount(26, 0);

        for(char ch : s) {
            sCount[ch - 'a']++;
        }
        for(char ch : t) {
            tCount[ch - 'a']++;
        }
        return sCount == tCount;
    }
};
