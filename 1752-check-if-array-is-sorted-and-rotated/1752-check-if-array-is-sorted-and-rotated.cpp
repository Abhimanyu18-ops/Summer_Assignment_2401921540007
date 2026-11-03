class Solution {
public:
    int  count(vector<int>& nums,int i ,int cnt){
        if (i==nums.size()){
            return cnt;
        }
        if(nums[i]>nums[(i+1)%nums.size()]){
             cnt++;
        }
       return count(nums,i+1,cnt);
    }
    bool check(vector<int>& nums) {
       int cnt= count(nums,0,0);
        return cnt<=1;

        
    }
};