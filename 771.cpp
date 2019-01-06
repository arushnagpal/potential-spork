class Solution {
public:
    int i,j=0;
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(i=0;i<S.length();i++){
            for(j=0;j<J.length();j++){
                if(J[j]==S[i]){
                    count++;
                }
            }
        }
        return count;
    }
};