#include <iostream>
#include <string>
using namespace std;
struct dm{
  string to;
  string to2;
}s[100000];
int cnt=0;
int main(){
  cout<<"mrlang2"<<endl;
  freopen("dm.txt","w",stdout);
  while(s[cnt].to!="END"){
    cnt++;
    getline(cin,s[i].to);
    getline(cin,s[i].to2);
    cout<<s[cnt].to<<endl<<s[cnt].to2;
  }
  return 0;
}