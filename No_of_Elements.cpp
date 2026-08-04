#include <iostream>
using namespace std;
class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) 
    {

        int count = 0,n1 = arr.size(),n2 = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == num1 && n1 >= i)
                n1 = i;
            if(arr[i] == num2 && n2 <= i)
                n2 = i;
        }
        
        if(n2 > n1)
            count = n2 - n1 - 1;
        else
            count = 0;
            
        return count;
    }
};