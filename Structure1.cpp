#include <bits/stdc++.h>
using namespace std;
struct info{
  char c;
  int frq;
};
bool cmp(info &x,info &y){
  if(x.frq>y.frq)
    return true;
  else return false;
}
int main()
{
  string s;
  cin>>s;
  map<char,int>m;
  for(auto &it:s){
    m[it]++;
  }
  vector<info>v;
  // Bonus task - Use constructor here
  for(auto &it:m){
    info tmp;
    tmp.c = it.first;
    tmp.frq = it.second;
    v.push_back(tmp);
  }
  sort(v.begin(),v.end(),cmp);

  string ans;
  for(auto &it:v){
    ans += string(it.frq,it.c);
  }
  cout<<ans<<endl;
  return 0;
}
