lass Solution {
public:
    string reorganizeString(string S) {
        // Everytime we need to add the character with most frequency. This is the optimal solution.
        // So we maintain the frequencies for each character, and find the character with most frequency
        // at each time by iterating the array. Notice the character should not be the last character added
        // into the string. Total time complexity is O(n) where n is the size of the string (ignore extra
        // time of string concatenation).
        string res;
        vector<int> freq(26);
        for (char c : S)
        {
            ++freq[c - 'a'];
        }

        while (res.size() < S.size())
        {
            int size = res.size(), maxInd = -1;
            char prev = size == 0 ? ' ' : res[size - 1];
            for (int i = 0; i < 26; ++i)
            {
                if ((maxInd < 0 || freq[i] >= freq[maxInd]) && 'a' + i != prev)
                {
                    maxInd = i;
                }
            }

            if (freq[maxInd] <= 0 || 'a' + maxInd == prev)
            {
                return "";
            }

            res += 'a' + maxInd;
            --freq[maxInd];
        }

        return res;
    }
};
