class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(auto i: s){
            if((i >= 'A' && i <='Z') || (i >='a' && i<='z') || (i >= '0' && i<='9')){
                ans+=tolower(i);
            }
        }
        int i=0;
        int j = ans.size()-1;
        while(i < j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
