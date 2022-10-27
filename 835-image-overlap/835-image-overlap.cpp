class Solution {
public:
	int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
		vector<pair<int, int>> ta, tb;

		int n = a.size();
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (a[i][j]) ta.push_back({i, j});
				if (b[i][j]) tb.push_back({i, j});
			}
		}
		map<pair<int, int>, int> m;
		int ans = 0;
		for (auto &x : ta) {
			for (auto &y : tb) {
				m[ {y.first - x.first, y.second - x.second}]++;
			}
		}

		for (auto &e : m) ans = max(ans, e.second);
		return ans;
	}
};