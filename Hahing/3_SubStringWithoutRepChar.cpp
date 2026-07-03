class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, maxlen = 0;
        unordered_map <char, int> freq;

        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;

            while(freq[s[right]] > 1){
                freq[s[left]]--;
                left++;
            }

            int len = right - left + 1;
            if (len > maxlen){
                maxlen = len;
            }
        }
        return maxlen;
        
    } 
        
};