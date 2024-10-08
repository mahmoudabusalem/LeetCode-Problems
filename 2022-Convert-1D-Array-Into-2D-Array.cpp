class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x = m * n;
        
        if (original.size() != x) {
            return {}; 
        }
        
        vector<vector<int>> res(m, vector<int>(n));
        
        for (int i = 0; i < original.size(); ++i) {
            int row = i / n; 
            int col = i % n; 
            res[row][col] = original[i];
        }
        
        return res;
    }
};