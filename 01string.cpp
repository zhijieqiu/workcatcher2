//本题将使用贪心的策略

#include <iostream>
#include <string>
using namespace std;
int n,m;
string generate(int n,int m){
  string ret= "";
  int t = min(n,m);
  for(int i=0;i<t;i++)
      ret += "01";
  if(n>m)
    ret+="0";
  if(m>n)
    ret = string("1")+ret;
  return ret;
}
int main(){
  int cases;
  cin>>cases;
  while(cases--){
    cin>>n>>m;
    if(n==m||n==m-1||n==m+1){
      cout<<generate(n,m)<<endl;
    }
    cout<<"NO"<<endl;
  }
  return 0;
}
