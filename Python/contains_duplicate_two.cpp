#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int , int> m;
        if(nums.size()<=1){
            return false;
        }

        for(int i = 0; i <nums.size(); i++){
            if((m.find(nums[i]) != m.end()) and (abs(m[nums[i]] -  i) <= k )) return true;
            m[nums[i]] = i;
            m.insert({nums[i],{i}});
        }

        return false;
    }
};

int main() {

  #ifndef ONLINE_JUDGE
  freopen("inputf.in", "r", stdin);
  freopen("outputf.in", "w", stdout);
  #endif

  int t ;
  cin>>t;
  while (t--){
    int n;cin>>n;
    vector <int> nums;
    while(n--){
        int a;cin>>a;
        nums.push_back(a);
    }
    int k ; cin>>k;
    Solution sol;
    cout<<sol.containsNearbyDuplicate(nums , k)<<'\n';
  } 

  return 0;
}

