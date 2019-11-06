#include<std_lib_facilities.h>
#include<fstream>
using namespace std;
void kiir(vector<char> v)
{
    for(int i=0;i<v.size();i++)
    {

        cout<<v[i];
    }
}
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
kiir(v);


  return 0;







}
