#include<std_lib_facilities.h>
using namespace std;
int main()
{
  char c,fn[10];
  int n=0;
  vector<char> v;
  cout<<"Ird be a file nevet:";
  cin>>fn;
  ifstream be(fn);
  if(!be)
  {
    cout<<"Nincs meg a file";

    return 0;
  }

  while(be.eof()==0)
  {


    while(n<=10)
    {
        n++;

    v.push_back(c);
    for(int i=0;i<n;i++)
    {
        be.get(c);
        cout<<v[i];
    }
    }

  }

  getchar();
}
