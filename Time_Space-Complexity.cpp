#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0,N,M;    
    for (int i = 0; i < N; i++) 
    {
        a = a + rand();  
    }
    for (int j = 0; j < M; j++) {
        b = b + rand();
    }
}

// Time Complexity - O(N + M)
// Space Complexity - O(1)