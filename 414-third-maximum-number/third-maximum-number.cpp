class Solution {
public:
    int thirdMax(vector<int>& n) {
     int max; sort(n.begin(),n.end(),greater<int>());
      n.erase(unique(n.begin(),n.end()),n.end());
      if(n.size()<=2)
      {
          return n[0];
      }
      else{
          max = n[2];
      }
      return max;
    }
};