class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(auto x:nums)
        {
            if(x%3!=0)count++;
        }
        return count;
    }
};
