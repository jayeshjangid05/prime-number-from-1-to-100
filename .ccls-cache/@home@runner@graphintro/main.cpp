#include <iostream>
using namespace std;
int main() {
  for(int i = 1;i<100;i++)
    {
      int flag =0;
      if(i==1)
      {
        flag=1;
      }
      for(int j = 2;j<i;j++)
        {
          if(i%j==0)
          {
            flag=1;
          }
        }
      if(flag==0)
      {
        cout<<i<<" ";
      }

    }
  return 0;
}