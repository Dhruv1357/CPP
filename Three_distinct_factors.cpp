/*
Problem - Three Distinct Factors
Platform - GeeksForGeeks
Summary - Checking if the given number has exactly three factors or not
*/

#include <iostream>
using namespace std;

int hasThreePrimeFac(long long N) 
    {
        // code here
        int factor=0;
        
        for(int i=1;i*i<=N;i++)
        {
            if(N%i == 0 && i*i!=N)
                factor+=2;
            else if(N%i ==0 && i*i == N)
                factor++;
                
            if(factor>3)
                break;
        }
        
        if(factor == 3)
            return 1;
            
        return 0;
    }

    int main()
    {
        long long num;
        cin >> num;
        cout << hasThreePrimeFac(num);
    }