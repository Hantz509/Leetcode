class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int index = 0;
        int indNums1 = nums1.size();
        int indNums2 = nums2.size();
        vector<int>mergedArray(indNums1+indNums2);
        while(i<indNums1 && j <indNums2){
            if(nums1[i] <= nums2[j]){
                mergedArray[index++] = nums1[i++];
            }
            else{
                mergedArray[index++] = nums2[j++];
            }
        }
        while(i < indNums1){
            mergedArray[index++] = nums1[i++];
        }
        while(j < indNums2){
            mergedArray[index++] = nums2[j++];
        }

        if (index % 2){
            double ans = mergedArray[(index/2)];
            return ans;
        }
        else{
            double ans = (mergedArray[(index/2) -1] + mergedArray[(index/2)])/2.0;
            return ans;
        }
        
    }
};