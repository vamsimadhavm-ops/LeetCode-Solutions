class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int > freq;

        for(char ch : t){
            freq[ch]++;
        }
        for(char ch : s){
            freq[ch]--;
        }
        for (auto pair : freq){
            if (pair.second != 0){
                return pair.first;
            }
        }
        return '\0';
    }
};