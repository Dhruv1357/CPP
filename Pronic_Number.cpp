/*
Problem - Pronic Number
Platform - GeeksForGeeks
Summary - Finding if the number is pronic or not.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pronicNumbers(int N) 
    {
        vector<int> v;
        
        for(int i=0;i<=N;i++)
        {
            if(i*(i+1) <= N)
            {
                v.push_back(i*(i+1));
            }
            
            if(i*(i+1) > N)
                break;
        }
        return v;
    }
    
    int main()
    {
        int num;
        cin >> num;
        vector<int> v = pronicNumbers(num);

        for(int y : v)
        {
            cout << y << " ";
        }
    }