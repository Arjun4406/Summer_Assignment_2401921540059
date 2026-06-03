class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_set<int> unique;

        for (int num : nums) {
            if (unique.count(num)) {
                return true;
            }
            unique.insert(num);
        }

        return false;
    }
};