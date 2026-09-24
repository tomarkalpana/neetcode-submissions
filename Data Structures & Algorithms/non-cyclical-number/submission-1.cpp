class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;

        while(n != 1){
            if(seen.count(n)){
                //cycle detect
                return false;
            }

            seen.insert(n);

            int total = 0;

            while(n > 0){
                int digit = n % 10;
                n = n / 10;

                total += digit*digit;
            }
    
            if(total == 1){
                return true;
            }

            n = total;
        }

        return true;
    }
};
