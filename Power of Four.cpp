class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 0){
            return 0;
        }   
        double val = (double) (log(num) / (log(4)));
        if(ceil(val) == floor(val)){
            return true;
        }
        return false;
    }
};