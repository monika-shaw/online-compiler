//
// Created by shawm on 24-01-2023.
//
#include <iostream>

using namespace std;

bool isPossible(int n)
{
    int even = 0, odd = 0;
    for(int i = 1; i <= n; i++)
    {
      if(n % i == 0)
       {
          cout << i << " ";
          if(i % 2 == 0)
            {
              even++;
            }
          else
            {
              odd++;
            }
       }
    }

    cout <<"count are" << endl;
    cout << even << odd << endl;
    if(even == odd)
      {
          return true;
      }
    else
      {
          return false;
      }
}

int main()
{
    int num;
    cout << "enter num";
    cin>>num;
    bool result;
    result = isPossible(num);
    cout <<result;
}

