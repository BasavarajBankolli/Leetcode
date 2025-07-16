class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int odd = 0, even = 0, alter = 1, prev = nums[0];
        
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] % 2 == 1) odd++;
            else even++;
        
            if (prev % 2 != nums[i] % 2){
                alter++;
                prev = nums[i];
            }
        }

        return max({odd,even, alter});
    }   
};