class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people),end(people));
        int i=0,res=0;
        
        int j=people.size()-1;
        while(i<=j)
        {
            int remain=limit-people[j];
            ++res;
            --j;
            if(i<=j and remain>=people[i])
            {
                i++;
            }
        }
        return res;
        
    }
};