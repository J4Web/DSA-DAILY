class Solution {
public:
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
  vector<bool> isGreatest;
  int flag = 0;
  for (int i = 0; i < candies.size(); i++)
  {
    for (int j = 0; j < candies.size(); j++)
    {
      if(candies[i] + extraCandies >= candies[j])
        flag = 1;
      else
        {
          flag = 0;
          break;
        }
    }
    if(flag)
      isGreatest.push_back(true);
    else
      isGreatest.push_back(false);
    flag = 0;
  }

  return isGreatest;
}
};