#include <bits/stdc++.h>
using namespace std;
struct cand{
  char candidate;
  vector<int> votes;
};
bool cmp(cand &x,cand &y){
  for(int i=0;i<26;i++){
    if(x.votes[i]>y.votes[i]){
      return true;
    }
    if(x.votes[i]<y.votes[i]){
      return false;
    }
  }
  return x.candidate<y.candidate;
}
int main()
{
  int n;
  cin>>n;
  vector<int> votes[26];
  for(int i=0;i<26;i++){
    votes[i].assign(26,0);
  }
  for(int i=0;i<n;i++){
    string vote;
    cin>>vote;
    for(int j=0;j<vote.size();j++){
      int c=vote[j]-'A';
      votes[c][j]++;
    }
  }
  vector<cand>v(26);
  for(char ch='A';ch<='Z';ch++){
    int c=ch-'A';
    v[c].candidate = ch;
    v[c].votes = votes[c];
  }

  sort(v.begin(),v.end(),cmp);

  for(int i=0;i<v.size();i++){
    cout<<v[i].candidate<<' ';
  }
  cout<<endl;
  return 0;
}
