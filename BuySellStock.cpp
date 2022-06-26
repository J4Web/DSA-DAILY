class Solution {
public:
    int maxProfit(vector<int>& p) {
        map<int,int> st;
        int n=p.size();
        for(int i=0;i<n;i++)
        {
            st.insert({p[i],i});
        }
        int mm=0;
        for(auto i:st)
        {
            cout<<i.first<<" : ";
            cout<<i.second<<" \n";
        }
        cout<<"============"<<" \n";
        cout<<st.begin()->first<<"\n";
        cout<<++st.end()->first<<"\n";
        return 0;
    }
};
//Use Sliding Window
