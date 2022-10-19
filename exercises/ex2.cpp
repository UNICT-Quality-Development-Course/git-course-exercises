/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int week;
  string arr[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if(week >0 && week < 8 )
    cout<<arr[week-1];
  else 
    cout << "Invalid input! Please enter week number between 1-7." << endl; 

  return 0;
}