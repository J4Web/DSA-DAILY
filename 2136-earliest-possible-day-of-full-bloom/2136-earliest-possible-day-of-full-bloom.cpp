class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        int max_bloom_time = INT_MIN;
        vector<pair<int,int>> grow_plant_times;
        
        for(int i=0;i<plantTime.size();i++) {
            grow_plant_times.push_back({growTime[i], plantTime[i]});
        }
        
        // sort the grow_plant_times of seeds by their growTime in descending order. 
        // It makes sense to plant the seed with maximum growTime first
        
        sort(grow_plant_times.begin(),grow_plant_times.end(),greater<pair<int,int>>());
        
        // a seed is planted only after the seeds having greater bloom time than the current seed are planted. 
        // So essentially, the plant time of a seed is the sum of plant times of all the seeds preceeding this seed 
        // and the plant time of the seed itself
        // we store the plant time of preceeding seeds in the following variable, prev_plant_time
        int prev_plant_time = 0;
        
        for(int i=0;i<grow_plant_times.size();i++) {
            int grow_time = grow_plant_times[i].first; // grow time of ith seed 
            int plant_time = grow_plant_times[i].second; // plant time of ith seed 
        
            prev_plant_time += plant_time; // adding the plant time of ith seed to the plant times of preceeding seeds 
            // it would take prev_plant_time amount of time to actually plant the ith seed 
            
            // bloom time of ith seed = total plant time of ith seed + grow time of ith seed + 1 
            // (as the flower blooms after last day of it's growth)
            int bloom_time = prev_plant_time + grow_time + 1; 
            
            max_bloom_time = max(max_bloom_time, bloom_time);
        }
        
        return max_bloom_time-1 ; // subtract 1 because the day starts from 0 
    }
};