class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        if(n<=8){
            return n;
        }
        else if(n>8&&n<=16){
            return ((n-8)*2)+8;
        }
        else if(n>16&&n<=24){
            return ((n-16)*3)+24;
        }
        else 
        return ((n-24)*4)+48;
    }
};