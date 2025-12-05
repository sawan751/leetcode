class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        // If total is odd → no valid partition
        if (total % 2 == 1) return 0;

        // If total is even → all n-1 partitions are valid
        return nums.size() - 1;
    }
};
