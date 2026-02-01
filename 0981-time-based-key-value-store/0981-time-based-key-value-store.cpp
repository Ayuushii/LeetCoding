class TimeMap {
private:
    unordered_map<string,vector<pair<string, int>>> mp;
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())
            return "";
        int n = mp[key].size();
        int l = 0;
        int h = n-1;
        string largest = "";
        while(l<=h) {
            int mid = (l+h)/2;
            if(timestamp == mp[key][mid].second)
                return mp[key][mid].first;
            else if (timestamp > mp[key][mid].second) {
                largest = mp[key][mid].first;
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        return largest;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */