class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        if(num==0){
            vector<int> arr(num+1, 0);
        }
        ans.push_back(0);
        for (int i=1;i<=num;i++){
            if(i%2==0)
                ans.push_back(ans[i/2]);
            else
                ans.push_back(ans[i/2]+1);
        }
        return ans;
    }
};