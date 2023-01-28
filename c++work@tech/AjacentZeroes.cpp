#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char str[n][10];
    for(int i = 0; i<n; i++)
    {
        cin>>str[i];
    }

    for(int i = 0; i<n; i++)
    {
        int count = 0;
        for(int j = 0; j<10-1; j++) {
              if(str[i][j] == '0' && str[i][j+1] == '0')
              {
                  count++;
              }


        }
        if(count>0)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }









}