class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // bool flag=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]]>1) {
        //         flag=1;break;
        // }
        // }
        // return flag;
        // Approach-2
        set<int>s;
        int n=nums.size();
        for(int i=0 ;i<n ; i++){
            s.insert(nums[i]);
        }
        return s.size()!=nums.size();
    }
};