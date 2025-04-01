#include <iostream>
using namespace std;

 int numConsumed (int n, int k)
  {
       if (k>n)
        return n ;
        
       int count = n  ;
       int temp = count ;
       
       for ( ; temp >= k  ;  )
       {
           count = count + temp/k ;
           temp = temp/k + temp%k ;
       }
       
       return count ;
  }

int main()
{
    int ans = numConsumed (6, 3) ;
    cout << "Your ans is " << ans << endl ;
    return 0;
}
