#include<bits/stdc++.h>
using namespace std;
 
int euclid(int n1, int n2)
{
    // do until the two numbers become equal
    while (n1 != n2)
    {
        // replace the larger number by its difference with the smaller number
        if (n1 > n2) {
            n1 = n1 - n2;
        }
        else {
            n2 = n2 - n1;
        }
    }
 
    return n1;        
}
 
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<euclid(n1,n2);
 
    return 0;
}
