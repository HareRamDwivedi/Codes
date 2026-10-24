class Solution {
private:
    // void solve(string digits, string temp, int index, vector<string> &ans){
    //     if(temp.size()==digits.size()){
    //         ans.push_back(temp);
    //         return;
    //     }

    // }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans = {""};
        
        unordered_map<int, string> mps = {
            {0, ""}, {1, ""}, {2, "abc"}, {3, "def"}, {4, "ghi"}, 
            {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}
        };
        

        for(char ch:digits){
            int digit = ch-'0';
            vector<string> temp;
            for(string combo:ans){
                for(char d:mps[digit]){
                    temp.push_back(combo+d);
                }
            }
            ans = temp;

        }

        return ans;



        // for(int i=0;i<digits.size();i++){
        //     for(int j=0;j<mps[digits[i].size()];j++){
        //         ans.push_back(mps[digits[i]]);
        //         cnt++;
        //     }
        //     for()
        }
};
