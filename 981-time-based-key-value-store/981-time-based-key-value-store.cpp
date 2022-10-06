class TimeMap {
public:
    map<string, vector<pair<string, int>>> tm;
    void set(string key, string value, int timestamp) {
        tm[key].push_back(make_pair(value, timestamp));
    }
    string get(string key, int timestamp) {
        if (tm.find(key) == tm.end()) return "";
        else {
            int left = 0;
            int right = tm[key].size() - 1;
            int best_time = 0;
            while (left <= right) {
                int mid = (right + left) / 2;
                if (tm[key][mid].second > timestamp) right = mid - 1;
                else if (tm[key][mid].second == timestamp) return tm[key][mid].first;
                else if (tm[key][mid].second < timestamp) left =  mid + 1;
            }
            if (right >= 0) return tm[key][right].first;
            return "";
        }
    }
};