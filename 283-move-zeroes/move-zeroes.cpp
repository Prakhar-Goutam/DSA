class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int Pos = 0;

        for (int i =0; i<nums.size() ; i++) {
            if(nums[i] != 0){
                nums[Pos] = nums[i];
                Pos++;
            }
        }

        for (int i = Pos; i <nums.size(); i++){
            nums[i]=0;
        }
        
    }
};