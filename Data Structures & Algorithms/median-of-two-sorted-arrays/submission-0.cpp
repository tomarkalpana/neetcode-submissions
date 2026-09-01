class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        int resultedArrSize = n + m;

        vector<int> resultedArr(resultedArrSize);

        int p1 = 0, p2 = 0;

        for(int i = 0; i < resultedArrSize; i++){

            if(p1 == n) {
                resultedArr[i] = nums2[p2];
                p2++;
            }
            else if(p2 == m) {
                resultedArr[i] = nums1[p1];
                p1++;
            }
            else if(nums1[p1] <= nums2[p2]) {
                resultedArr[i] = nums1[p1];
                p1++;
            }
            else {
                resultedArr[i] = nums2[p2];
                p2++;
            }
        }

        int mid = resultedArrSize / 2;

        if(resultedArrSize % 2 == 0) {
            return (resultedArr[mid - 1] + resultedArr[mid]) / 2.0;
        }
        else {
            return resultedArr[mid];
        }
    }
};