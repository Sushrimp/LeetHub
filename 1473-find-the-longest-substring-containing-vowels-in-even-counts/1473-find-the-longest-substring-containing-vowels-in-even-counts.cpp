class Solution {
public:
    int max(int a, int b){
        return a > b ? a : b;
    } 
    

    int findTheLongestSubstring(string s) {
        unordered_map<char, int> vowel_bit = {
            {'a', 1 << 0}, 
            {'e', 1 << 1}, 
            {'i', 1 << 2}, 
            {'o', 1 << 3}, 
            {'u', 1 << 4}  
        };

        int res = 0;
        int mask = 0;
        unordered_map<int, int> masks;
        masks[0] = -1;

        int i = 0;
        for(char c : s){
            if (vowel_bit.find(c) != vowel_bit.end()) mask ^= vowel_bit[c]; 
            if (masks.find(mask) != masks.end()) {
                int length = i - masks[mask];
                res = max(res, length);
            } else masks[mask] = i;
            i++;
        }
        return res;
    }
};