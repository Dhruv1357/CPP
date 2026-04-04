#include <iostream>
using namespace std;

int main()
{
     int count = 0,N;
        for (int i = N; i > 0; i /= 2) 
        {
            for (int j = 0; j < i; j++) {
                count += 1;
            }
        }
}

// Time Complexity - O(N)
// Space Complexity - O(1)