class Solution {
public:
    struct VectorHash {
        size_t operator()(const vector<int>& v) const {
            size_t hash = 0;

            for (int x : v) {
                hash = hash * 31 + x;
            }

            return hash;
        }
    };

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<vector<int>, vector<string>, VectorHash> m;

        for (string& s : strs) {
            vector<int> v(26, 0);

            for (char c : s) {
                v[c - 'a']++;
            }

            m[v].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto& x : m) {
            ans.push_back(x.second);
        }

        return ans;
    }
};
