class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int n = nums.size();
        seen.reserve(n);

        for(int n : nums) {
            seen.insert(n);
        }
        int maxLen = 0;
        for(int n : seen) {
            if(seen.count(n - 1) == 0) {
                int currNum = n;
                int currCount = 1;

                while(seen.count(currNum + 1)) {
                    currNum++;
                    currCount++;
                }
                maxLen = max(maxLen, currCount);
            }
            
        }
        return maxLen;
    }
};
