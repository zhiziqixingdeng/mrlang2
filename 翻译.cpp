#include <iostream>
#include <string>
using namespace std;
struct dm{
  string to;
  string to2;
}s[100000];
int cnt=0;
const char x='"';
int main(){
  freopen("dm.txt","r",stdin);
  for(int i=1;s[i].to!="END";i++){
    getline(cin,s[i].to);
    getline(cin,s[i].to2);
    cnt++;
  }
  cout<<"#include <iostream>"<<endl;
  cout<<"#include <unistd.h>"<<endl;
  cout<<"#include <cstdlib>"<<endl;
  cout<<"#include <ctime>"<<endl;
  cout<<"using namespace std"<<endl;
  cout<<"int n";
  cout<<"void theprint(string str){"<<endl;
  cout<<"for(int j=0;j<str.size();j++){"<<endl;
  cout<<"cout<<str[j]";
  cout<<"}"<<endl;
  cout<<"}"<<endl;
  cout<<"int main(){"<<endl;
  freopen("game.cpp","w",stdout);
  for(int i=1;i<=cnt;i++){
    if(s[i].to=="sleep"){
      cout<<"sleep("<<s[i].to2<<");"<<endl;
    }
    else if(s[i].to=="input"){
      cout<<"cin>>"<<s[i].to2<<";"<<endl;
    }
    else if(s[i].to=="endl"){
      cout<<"cout<<endl;"<<endl;
   }
   else if(s[i].to=="ping"){
     cout<<"system("<<x<<<<"ping "<<s[i].to2<<x<<");"<<endl;
   }
   else if(s[i].to=="new<int>"){
     cout<<"int "<<s[i].to2<<";"<<endl;
   }
   else if(s[i].to=="new<string>"){
     cout<<"string "<<s[i].to2<<";"<<endl;
   }
   else if(s[i].to=="out"){
     cout<<"cout<<"<<x<<s[i].to2<<x<<";"<<endl;
   }
   else if(s[i].to=="if"){
     cout<<"if(n=="<<s[i].to2<<"){"<<endl;
   }
   else if(s[i].to=="while"){
     cout<<"while("<<s[i].to2<<"){"<<endl;
   }
   else if(s[i].to=="}"){
     cout<<"}"<<endl;
   }
   else if(s[i].to=="for"){
     cout<<"for(int i=1;i<="<<s[i].to2<<";i++){"<<<<endl;
   }
   else if(s[i].to=="print"){
     cout<<"theprint("<<s[i].to2<<");"<<endl;
   }
   else if(s[i].to=="else"){
     cout<<"else{"<<endl;
   }
   else if(s[i].to=="END"){
     cout<<"return "<<s[i].to2<<";"<<endl;
   }
   else if(s[i].to=="pause"){
     cout<<"system("<<x<<"pause"<<x<<");"
   }
   else if(s[i].to=="clean"){
     cout<<"system("<<x<<"cls"<<x<<");"<<endl;
   }
   else if(s[i].to=="break"){
     cout<<"break;"
   }
   else{
     cout<<s[i].to<<s[i].to2<<endl;
     break;
   }
  }
  cout<<"}";
  return 0;
}
