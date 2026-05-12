/*
Problem - Sum of digit modified
Platform - GeeksForGeeks
Summary - Finding if the sum of digit is 1 or not.
*/
#include <iostream>
using namespace std;

int isMagic(int N)
{
    int sum;

    do
    {
        sum = 0;
        for (int j = 0; N != 0; j++)
        {
            sum += N % 10;
            N /= 10;
        }
        N = sum;
    } while (sum > 9);

    if (sum == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin >> num;

    cout << isMagic(num);
}