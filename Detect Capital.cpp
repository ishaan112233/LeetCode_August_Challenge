class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.empty()){
            return true;
        }
        int Cap = 0, n = word.size();
        for(auto i: word){
            if(i == ' '){
                return false;
            }
            if(i>='A' && i<='Z'){
                Cap++;
                
            }
        }
        if(Cap == 0 || Cap == n){
            return true;
        }
        else if(Cap == 1 && word[0]<'a'){
            return true;
        }
        else{
            return false;
        }
    }
};
