#include<std_lib_facilities.h>
#include<fstream>
using namespace std;
int main()
{
  char file[10];
  int n=0;
  char c;
  vector<char> v;
  cout<<"Ird be a file nevet:";
  cin>>file;
  ifstream be(file);

  if(!be)
  {
      cout<<"Nincs meg a file"; return 0;

  }

  while(n<=10*1024*1024)
  {
      n++;
      be>>c;
      v.push_back(c);
  }

  for(int i=0;i<n;i++)
    {
        be.get(c);
        cout<<v[i];


    }

  return 0;







}
