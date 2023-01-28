//
// Created by shawm on 03-09-2022.
//

#include <iostream>

void serviceCharge(int noOfInput)
{
    int arr[2];
    for(int i  = 0; i < noOfInput; i++)
    {
        for(int j = 0; j<2; j++)
        {
            std::cin>>arr[j];
        }
        if (arr[0] < arr[1])
            std::cout<<"FIRST"<<std::endl;
        else if (arr[0] > arr[1])
            std::cout<<"SECOND"<<std::endl;
        else
            std::cout<<"ANY"<<std::endl;
    }

}

int main()
{
    int numberOfInput = 3;
    serviceCharge(numberOfInput);
}

