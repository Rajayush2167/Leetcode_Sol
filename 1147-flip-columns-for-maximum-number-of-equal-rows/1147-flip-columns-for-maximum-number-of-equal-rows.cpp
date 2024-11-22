class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> patternCount; // This will map row patterns to their counts
        int maxEqualRows = 0; // This will keep track of the maximum number of equal rows

        // Iterate through rows of the matrix
        for (auto& row : matrix) {
            string pattern; // Initialize an empty string to store the row pattern

            // Build the pattern for the given row considering flips
            for (int cell : row) {
                // If the first cell is 0, keep the number as is; otherwise flip the number
                char representation = '0' + (row[0] == 0 ? cell : cell ^ 1);
                pattern.push_back(representation);
            }

            // Increase the count for the current pattern
            int currentCount = ++patternCount[pattern];
            // Update maxEqualRows if the current pattern count exceeds it
            maxEqualRows = max(maxEqualRows, currentCount);
        }

        return maxEqualRows; // Return the maximum number of equal rows after flips
    }
};