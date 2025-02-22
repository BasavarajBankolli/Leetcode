class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector <int> ref;
        
        while (i < m || j < n) {
            if (i < m && j < n && nums1[i] <= nums2[j])
                ref.push_back(nums1[i]),i++;

            else if (j < n && i < m && nums2[j] < nums1[i])
                ref.push_back(nums2[j]),j++;

            else if (i == m){
                while (j < n)ref.push_back(nums2[j]), j++;
            }
            else {
                while (i < m) ref.push_back(nums1[i]), i++;
            }
        }


        for (int i = 0; i < n + m; i++ ){
            nums1[i] = ref[i];
        }

    }
};