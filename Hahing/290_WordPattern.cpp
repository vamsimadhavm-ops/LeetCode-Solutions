class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        if (words.size() != pattern.length()){
            return false;
        }
        unordered_map< char, string> ptos;
        unordered_map<string, char> stop;
        for (int i = 0; i < pattern.size(); i++){
            char c1 = pattern[i];
            string c2 = words[i];

            if(ptos.count(c1)){
                if(ptos[c1] != c2){
                    return false;
                }
            }else{
                ptos[c1] = c2;
            }
            if(stop.count(c2)){
                if(stop[c2] != c1){
                    return false;
                }
            }else{
                stop[c2] = c1;
            }  
        }
        return true;
    }
};