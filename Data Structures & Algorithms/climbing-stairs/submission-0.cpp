class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;

        int curr = 2;
        int prev = 1;
        int next; 

        for(int i=3; i<=n; i++){
            next = curr + prev;
            prev = curr;
            curr = next;
        }

        return curr;
    }
};
