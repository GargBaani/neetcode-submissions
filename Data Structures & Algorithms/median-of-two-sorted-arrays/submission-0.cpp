class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        // int k=(m+n)/2;
        int i=0;int j=0,cnt=0;
        vector<int>merge;
        while(i<m && j<n){
            // if(k==cnt)return 
            if(nums1[i]<=nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            merge.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            merge.push_back(nums2[j]);
            j++;
        }

        if((m+n) %2 ==0){
            int i=(m+n)/2;
            int j=i-1;
            return (merge[i]+merge[j])/2.0;
        }
        return merge[(m+n)/2];
    }
};
