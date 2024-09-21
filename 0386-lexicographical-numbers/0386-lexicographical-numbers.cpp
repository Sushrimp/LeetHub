class Solution {
public:
    int fetchNext(int num, int n){
        if(num * 10 <= n) return num*10;
        
        if(num >= n) num /= 10;

        num++;
        while(num%10 == 0){
            num /= 10;
        }

        return num;
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;

        int curr = 1;

        for(int i = 0 ; i < n ; i++){
            res.push_back(curr);
            curr = fetchNext(curr, n);
        }

        return res;
    }
    
};