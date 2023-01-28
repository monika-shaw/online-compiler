#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ifstream myfile ("myfile.txt");
    if (myfile.is_open())
    {

        while ( getline (myfile,line) )
        {
            for(int i = 0; i <= ;i ++) {
                cout << line[i] << '\n';

            }

            }
        }
        myfile.close();
    }
