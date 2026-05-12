/*
Problem - Perfect Number
Platform - GeeksForGeeks
Summary - Finding if the number is perfect or not, a number is perfect if sum of factorial of its digit is equal to the given number.
*/

#include <iostream>
using namespace std;

int isPerfect(int N) 
    {

        int product,sum = 0,num,val = N;
        
        for(int i = 0;N!=0;i++)
        {
            num = N%10;
            product = 1;
            for(int j=1;j<=num;j++)
            {
                product*=j;
            }
            sum+=product;
            N/=10;
        }
        
        if(sum == val)
            return 1;
        else
            return 0;
    }
    int main()
    {
        int num;
        cin >> num;
        cout << isPerfect(num);
    }