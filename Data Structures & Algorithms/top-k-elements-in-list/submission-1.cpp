struct cmp {
    bool operator() (const auto& a, const auto& b) {
        return a.second > b.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> minHeap;
        unordered_map<int, int> numMap;

        for(int n : nums) {
            numMap[n]++;
        }

        for(auto p : numMap) {
            minHeap.push(p);
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while(!minHeap.empty()) {
            result.push_back(minHeap.top().first);
            minHeap.pop();
        }
        return result;
    }
};
