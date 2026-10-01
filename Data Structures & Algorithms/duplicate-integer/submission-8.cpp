class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for(int n : nums) {
            if(numSet.count(n)) {
                return true;
            }
            numSet.insert(n);
        }

        return false;

    }
};