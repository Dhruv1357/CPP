#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, N, M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a = a + j;
        }
    }
    for (int k = 0; k < N; k++)
    {
        b = b + k;
    }
}

// Time Complexity - O(N*N)
// Space Complexity - O(1)