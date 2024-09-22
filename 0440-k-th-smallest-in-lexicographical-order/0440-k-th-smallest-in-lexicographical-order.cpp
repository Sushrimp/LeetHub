// class Solution {
// public:
//     int fetchNext(int num, int n){
//         if( num <= INT_MAX / 10 && num * 10 <= n) return num*10;
        
//         if(num >= n) num /= 10;

//         num++;
//         while(num%10 == 0){
//             num /= 10;
//         }

//         return num;
//     }

//     int findKthNumber(int n, int k) {
//         int curr = 1;

//         for(int i = 1 ; i < k ; i++){
//             curr = fetchNext(curr, n);
//         }

//         return curr;
//     }
// };

class Solution {
public:
    long countSteps(int curr, long n) {
        long steps = 0;
        long first = curr;
        long last = curr;
        while (first <= n) {
            steps += std::min(n + 1, last + 1) - first;
            first *= 10;
            last = last * 10 + 9;
        }
        return steps;
    }

    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;  
        while (k > 0) {
            long steps = countSteps(curr, n);
            if (steps <= k) {
                k -= steps; 
                curr++;    
            } else {
                curr *= 10; 
                k--;
            }
        }

        return curr;
    }
};