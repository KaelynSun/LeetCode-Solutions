class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        unordered_map<int, int> frequencyMap;
        for(int i = 0; i < n; i++){
            int numbers = nums[i];
            int currentCount = frequencyMap[numbers];
            currentCount++;
            frequencyMap[numbers] = currentCount;
        }

        for(int i = 0; i < n; i++){
            numbers = nums[i];
            if(frequencyMap[numbers] > 1){
                return true;
            }
        }
        return false;
    }
};
