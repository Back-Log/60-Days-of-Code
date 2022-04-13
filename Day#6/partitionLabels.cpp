class Solution {
public:
  vector<int> partitionLabels(string s) {
    map<char, int>mp;
    for (int i = 0; i < s.size(); i++)
    {
      mp[s[i]] = i;
    }


    int till = mp[s[0]];
    vector<int>ans;
    int len = 1;
    for (int i = 1; i < s.size(); i++)
    {
      if (i <= till)
      {
        len++;
        till = max(till, mp[s[i]]);
      }
      else
      {
        ans.push_back(len);
        len = 1;
        till = mp[s[i]];
      }

    }
    if (len != 0) ans.push_back(len);
    return ans;

  }
};