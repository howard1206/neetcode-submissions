class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //1, 1, 2, 8
        //48,24,6,1
        int n = nums.size();
        vector<int> result(n, 1);

        vector<int> prefix(n, 1);
        vector<int> posfix(n, 1);

        for(int i = 1; i < n; ++i) {
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }

        for(int i = n - 2; i >= 0; --i) {
            posfix[i] = posfix[i + 1] * nums[i + 1];
        }

        for(int i = 0; i < n; ++i) {
            result[i] = posfix[i] * prefix[i];
        }

        return result;
    }
};
