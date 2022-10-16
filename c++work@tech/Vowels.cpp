#include <iostream>
using namespace std;
int main()
{

   int n;
   cin>>n;
   char str[5][30];
   for(int i = 0; i<n; i++)
   {
       cin>>str[i];
   }

    for(int i = 0; i<n; i++)
    {
        int count = 0;
        for(int j = 0; j<10; j++) {

            if (str[i][j] == 'a'||str[i][j] == 'e'||str[i][j] == 'i'||str[i][j] == 'o'||str[i][j] == 'u'|| str[i][j] == 'A'||str[i][j] == 'E'||str[i][j] == 'I'||str[i][j] == 'O'||str[i][j] == 'U') {
               count++;
            }
        }
        cout<<count<<endl;
    }









}