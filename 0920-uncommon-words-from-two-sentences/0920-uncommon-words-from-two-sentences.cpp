class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        istringstream iss1(s1);
        istringstream iss2(s2);
        vector<string> words;
        string word;

        while (iss1 >> word) {
            words.push_back(word);
        }
        while (iss2 >> word) {
            words.push_back(word);
        }

        unordered_map<string, int> map;
        for (string w : words) {
            map[w]++;
        }

        
        vector<string> res;
        for(string w : words){
            if(map[w] < 2){
                res.push_back(w);
            }
        }
        

        return res;
    }
};