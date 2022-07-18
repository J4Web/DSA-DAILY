    #include<bits/stdc++.h>
    #define int long long int
    #define all(c) c.begin(),c.end()
    #define mp(a,b) make_pair(a,b)
    #define mod 1000000007
     
    using namespace std;
     
    int32_t main()
    {
 
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int t=1;
        while(t--)
        {
            string s;
            cin>>s;
            string str="";
            int index = -1;
            for(int i=s.size()-1;i>=2;i--)
            {
                if(s[i-2]=='.')
                {
                    str+=s[i-2];
                    str+=s[i-1];
                    str+=s[i];
                    index = i-2;
                    break;
                }
                else if(s[i-1]== '.')
                {
                    str+=s[i-1];
                    str+=s[i];    
                    str+='0';
                    index = i-1;
                    break;
                }
     
            }
            if(str.size()==0)
            {
                str = ".00";
                index = s.size();
            }
            string res = "";
            int cy=0;
            int flag = 0;
            for(int i=index - 1;i>=0;i--)
            {
                if(i==0 && s[0]=='-')
                {
                    flag=0;
                    continue;
                }
                if(cy%3==0 && cy!=0)
                {
                    res+=',';
                }
                res+=s[i];
                cy++;
            }
            reverse(all(res));
            res+=str;
            if(s[0]=='-')
            {
                res.insert(0,"($");
                res+=')';
            }
            else
            {
                res.insert(0,"$");
            }
            cout<<res;
        }
        return 0;
    }
