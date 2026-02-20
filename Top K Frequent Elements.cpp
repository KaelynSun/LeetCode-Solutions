class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for(int n : nums){
            counter[n]++;
        }

        auto compare = [](pair<int, int>&a, pair<int, int>&b){
            return a.second < b.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(compare) > heap(compare);

        for(auto &entry : counter){
            heap.push({entry.first, entry.second});
        }

        vector<int> res;
        while(k-- > 0){
            res.push_back(heap.top().first);
            heap.pop();
        }

        return res;
    }
};
