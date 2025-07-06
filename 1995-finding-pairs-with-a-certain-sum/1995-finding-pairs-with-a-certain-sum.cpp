class FindSumPairs {
public:
    vector<int> nums1, nums2;
    unordered_map<int, int> freq; 

    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        nums1 = n1;
        nums2 = n2;
        for (int num : nums2) {
            freq[num]++;
        }
    }
    
    void add(int index, int val) {
        int oldVal = nums2[index];
        freq[oldVal]--;                  
        nums2[index] += val;            
        freq[nums2[index]]++;           
    }
    
    int count(int tot) {
        int result = 0;
        for (int a : nums1) {
            int b = tot - a;
            result += freq[b];          
        }
        return result;
    }
};
