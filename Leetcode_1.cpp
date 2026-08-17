class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if ( nums.size()<2)
            return {};
        
        vector<int>myReturn;
        unordered_map<int, int>Seen;

        for (int i = 0 ; i <  nums.size(); i++){
            if(Seen.find(target - nums[i]) != Seen.end()){
                myReturn.push_back(Seen[target-nums[i]]);
                myReturn.push_back(i);
                return myReturn;
            }
            else
            Seen[nums[i]] = i;
        }

        return myReturn;