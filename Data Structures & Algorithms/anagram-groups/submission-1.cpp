class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strMap;
        vector<vector<string>> result;
        for(const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            strMap[key].push_back(str);
        }

        for(const auto& [_, second] : strMap) {
            result.push_back(move(second));
        }
        return result;
    }
};
