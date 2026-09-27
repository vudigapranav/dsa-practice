class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;

        for (int i = 0; i < candies.size(); i++) {
            int temp = candies[i] + extraCandies;
            bool isHighest = true;

            // TODO: Compare temp against each original candy count.
            // Set isHighest to false if you find a larger count.

            result.push_back(isHighest);
        }

        return result;
    }
};