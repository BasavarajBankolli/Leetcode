class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (dfs(i, graph)) res.push_back(i);
        }
        return res;
    }

private:
    unordered_map<int, bool> safe;

    bool dfs(int i, vector<vector<int>>& graph) {
        if (safe.count(i)) return safe[i]; // If already visited, return the cached result
        safe[i] = false; // Mark as unsafe during exploration
        for (const auto& nei : graph[i]) {
            if (!dfs(nei, graph)) return safe[i]; // If any neighbor is unsafe, return false
        }
        safe[i] = true; // If all neighbors are safe, mark this node as safe
        return safe[i];
    }
};
