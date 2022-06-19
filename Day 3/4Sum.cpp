class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target1 = target - nums[i];
            for(int j=i+1;j<n;j++){
                int target2 = target1 - nums[j];
                int s = j+1, e = n-1;
                while(s<e){
                    if(nums[s]+nums[e]==target2){
                        vector<int> tmp(4,0);
                        tmp[0]=nums[i];
                        tmp[1]=nums[j];
                        tmp[2]=nums[s];
                        tmp[3]=nums[e];
                        ans.push_back(tmp);
                        while (s < e && nums[s] == tmp[2]) ++s;
                        while (s < e && nums[s] == tmp[2]) --e;
                    }else   if(nums[s]+nums[e]>target2){
                        e--;
                    }else{
                        s++;
                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};