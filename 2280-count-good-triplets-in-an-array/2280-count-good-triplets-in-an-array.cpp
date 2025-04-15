struct FenwickTree {
    vector<int> BIT;
    int n;

    FenwickTree(int n): n(n), BIT(n+1, 0) {}

    void add(int idx, int x) {
        idx++;
        for (; idx<=n; idx+=(idx & -idx)) 
            BIT[idx]+=x;
    }

    int sum(int idx) { // Prefix sum
        int ans=0;
        idx++;
        for (; idx>0; idx-=(idx & -idx))
            ans+=BIT[idx];
        return ans;
    }
};

class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        const int n = nums1.size();
        vector<int> id2(n);
        for (int i = 0; i < n; i++)
            id2[nums2[i]] = i;

        vector<int> inv(n);
        for (int i = 0; i < n; i++)
            inv[id2[nums1[i]]] = i;

        FenwickTree tree(n);

        long long ans = 0;
        for (int x = 0; x < n; x++) {
            int pos = inv[x];
            long long L = tree.sum(pos);
            tree.add(pos, 1);
            long long R = (n - 1 - pos) - (x - L);
            ans += L * R;
        }

        return ans;
    }
};