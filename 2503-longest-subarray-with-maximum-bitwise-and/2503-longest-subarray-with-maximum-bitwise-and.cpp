class Solution {
public:
    int maxx(int a, int b){
        return  a > b ? a : b;
    }

    int longestSubarray(vector<int>& nums) {
        int longest = 0;
        int count = 0;
        int max = INT_MIN;

        for(int num : nums) {
            if(num > max) max = num;
        }

        for(int num : nums) {
            if(num == max){
                count++;
                longest = maxx(longest, count);
            } else count = 0;
        }


        return longest;
    }
};