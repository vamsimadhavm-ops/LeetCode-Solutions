class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int > freq;
        vector<pair<int, int >> v;
        vector<int> ans;

        for(int num : nums){
            freq[num]++;
        }
        for(auto pair : freq){
            v.push_back({pair.second, pair.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        for (int i = 0; i < k; i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};