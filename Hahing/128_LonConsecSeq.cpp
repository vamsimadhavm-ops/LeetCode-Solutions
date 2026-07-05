class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set < int > s;
        for (int i = 0; i < nums.size() ; i++){
            s.insert(nums[i]);
        }
        int maxlen = 0;
        for (int num : s){
            if (s.find(num - 1) == s.end()){
                int current = num;
                int length = 1;

                while(s.find(current + 1) != s.end()){
                    current++;
                    length++;
                }
                if (length > maxlen){
                    maxlen = length;
                }
            }
        }
        return maxlen;
    }
};