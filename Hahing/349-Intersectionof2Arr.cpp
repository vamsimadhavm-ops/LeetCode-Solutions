vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        unordered_set<int> result;

        for(int num : nums1){
            s.insert(num);
        }
        for(int num : nums2){
            if (s.find(num) != s.end()){
                result.insert(num);
            }
        }
        vector<int> ans;
        for(int num : result){
            ans.push_back(num);
        }
        return ans;
    }