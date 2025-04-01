// this program do check greater of two number without using conditional operator

#include <iostream>

using namespace std ;

int main()
{
  int n1, n2, ans ;
  cout << "\nEnter two number : \n" ;
  cin >> n1 >> n2 ;
  int s1 = n1>>31 ;   // first bit of number
  int s2 = n2>>31 ;
 
  //cout << "size is "<< sizeof (n1) << endl  ;
  //cout << "s1 = " << s1 << ", s2 = " << s2 << endl ;
  if(!(float)(n1*n2))    // for any one of no being 0
    if (!n1)
      if (s2)
        cout << n1 << " is bigger then " << n2 << endl ;
      else
        cout << n2 << " is bigger then " << n1 << endl ;
    else                  // n2 is 0
      if (s1)
        cout << n2 << " is bigger then " << n1 << endl ;
      else
         cout << n1 << " is bigger then " << n2 << endl ;

  else              // if none is 0
  if (s1^s2)        // ex-or, both different
    if (s1 & s1)    // s1 is negative one
      cout << n2 << " is larger then " << n1 << endl  ; 
    else            // s2 is negative one
      cout <<  n1 << "  is larger then " << n2 << endl ;   
  else              // same sign
    if (s1 & s2)    // both negative
    {    
      ans = n1 * (bool)(n2/n1) + n2 * (bool)(n1/n2) ;
      cout << ans << " is bigger then " << n1+n2-ans << endl ;
    } 
    else            // both positive
    {
      ans = n1 * (bool)(n1/n2) + n2 * (bool)(n2/n1) ;
      cout << ans << " is bigger then " << n1+n2-ans << endl  ;
    }    

  return 0 ;
}
