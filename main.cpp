#include <iostream>
 
using namespace std;
 
int main()
{
    long long a;
    cin >> a;
    long long b[a];
    for (int i = 0; i < a; i++)
    {
        long long c;
        cin >> c;
        if (c>=6)
        {
            if (c%2==1)
            {
                b[i]=((c+1)/2)*5;
            }
            else
            {
                b[i]=(c/2)*5;
            }
            
        }
        else{
            b[i]=15;
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << endl;
    }
}