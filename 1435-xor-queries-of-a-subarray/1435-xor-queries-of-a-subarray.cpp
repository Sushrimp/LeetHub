class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> temp;
        vector<int> solve;

        for(int i = 0 ; i < arr.size()-1 ; i++){
            temp.push_back(arr[i] ^ arr[i+1]);
        }
        for(vector<int> num : queries){
            if(num[0] == num[1]) solve.push_back(arr[num[0]]);
            else if(num[1]-num[0] == 1){
                solve.push_back(temp[num[0]]);
            } else {
                int total = temp[num[0]];
                for (int i = num[0] + 2; i <= num[1]; i++) {
                    total ^= arr[i];
                }
                solve.push_back(total);
            }
        }

        return solve;
    }
};