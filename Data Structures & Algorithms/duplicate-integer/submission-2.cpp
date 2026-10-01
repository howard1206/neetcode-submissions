class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numMap;

        for(int n : nums) {
            numMap[n]++;
        }

        for(auto & p : numMap) {
            if(p.second > 1) {
                return true;
            }
        }
        return false;

    }
};