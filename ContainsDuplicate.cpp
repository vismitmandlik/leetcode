class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1){
            return false;
        }
        else{
            std::sort(nums.begin(), nums.end());
            bool duplicate = false;
            for(int i=0;i<nums.size();i++){

                if(i < nums.size() - 1 && nums[i] == nums[i+1]){
                    duplicate = true;
                    break;
                }
            }
            return duplicate;
        }
    }
};
