/*
Problem - Count Set Bits
Platform - GeeksForGeeks
Summary - Counting the number of bits set in a number
*/

#include <iostream>
using namespace std;

    int setBits(int n) {

        int count = 0;
        
        for(int i = 0;i<32;i++)
        {
            if(n & (1<<i))
                count++;
        }
        
        return count;
    }

int main()
{
    int num;
    cin >> num;
    
    cout << setBits(num);
}