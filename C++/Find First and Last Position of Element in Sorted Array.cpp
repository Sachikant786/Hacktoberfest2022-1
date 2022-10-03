class Solution {
    int left_binary(vector<int>& nums, int t){
        int s=0, e=nums.size()-1, ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==t){
                ans=m;
                e=m-1;
            }else if(nums[m]<t){
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return ans;
    }
    int right_binary(vector<int>& nums, int t){
        int s=0, e=nums.size()-1, ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==t){
                ans=m;
                s=m+1;
            }else if(nums[m]<t){
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int leftIndex=left_binary(nums, target);
        int rightIndex=leftIndex==-1 ? -1 : right_binary(nums, target);
        ans.push_back(leftIndex);
        ans.push_back(rightIndex);
        return ans;
    }
};
