class Solution {
public:
    // Function to convert a Roman numeral to an integer.
    int romanToInt(std::string s) {
        // Map to store the Roman numerals and their corresponding integer values.
        std::unordered_map<char, int> numeralToValue{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        // Start by adding the value of the last character to the answer.
        int total = numeralToValue[s.back()];

        // Iterate over the string from the start to the second-to-last character.
        for (int i = 0; i < s.size() - 1; ++i) {
            // Determine the sign of the value based on the following numeral in the sequence.
            // If the current numeral is less than the next one, it should be subtracted.
            int sign = numeralToValue[s[i]] < numeralToValue[s[i + 1]] ? -1 : 1;
          
            // Add the current numeral's value to the total, adjusting the sign as necessary.
            total += sign * numeralToValue[s[i]];
        }

        // Return the computed integer value of the Roman numeral string.
        return total;
    }
};