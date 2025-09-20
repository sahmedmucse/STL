#include <bits/stdc++.h>
using namespace std;
struct info{
  string id;
  string name;
  string cgpa;
  int index;
};
bool cmp(info &x,info &y){
  if(x.name<y.name){
    return true;
  }
  else if(x.name==y.name){
    if(x.index<y.index){
      return true;
    }
    else return false;
  }
  else 
    return false;
}
int main()
{
  int n;
  cin>>n;
  vector<info>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].id>>v[i].name>>v[i].cgpa;
    v[i].index = i;
  }

  sort(v.begin(),v.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<v[i].id<<' '<<v[i].name<<' '<<v[i].cgpa<<endl;
  }
  return 0;
}
