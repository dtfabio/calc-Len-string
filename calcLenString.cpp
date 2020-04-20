#include <iostream>
using namespace std;

int len (char s[])
{
    int d=0;
    while(s[d]!='\0')
    d++;
    return d;
}
int main()
{
  char stri[50];
  int lungh;
  gets(stri);
  lungh=len(stri);
  cout<<"la lunghezza della stringa " <<stri<<" e': "<<lungh<<endl;
    system("pause");
}
