class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> freqele;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            count[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for (auto &it : count){
            pq.push({it.second, it.first});
        }
        while (k--){
            freqele.push_back(pq.top().second);
            pq.pop();
        }
        return freqele;
    }
};
