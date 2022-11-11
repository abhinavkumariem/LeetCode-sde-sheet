class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),k,j;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                j=i;
                while(j<n&& nums[j]==nums[i]) j++;
                k=j-i;
                for(j;j<n;j++) nums[j-k]=nums[j];
                n-=k;
            }
        }
        return n;
    }
};