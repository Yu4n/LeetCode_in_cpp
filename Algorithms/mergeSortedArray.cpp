//
// Created by Yu4n on 2021-04-07.
//

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int index = m + n - 1;
    while(n && m)
    {
        if(nums1[m-1] > nums2[n-1])
        {
            nums1[index] = nums1[m-1];
            --m;
        }
        else
        {
            nums1[index] = nums2[n-1];
            --n;
        }
        --index;
    }
    while(n)
    {
        nums1[index--] = nums2[--n];
    }
}
