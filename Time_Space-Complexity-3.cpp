#include <iostream>
using namespace std;

int main()
{
    int N;
    int a = 0, i = N;
    while (i > 0)
    {
        a += i;
        i /= 2;
    }
}

// Time Complexity - O(log(N))
// Space Cpmplexity - O(1)