/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;
#define EXIT_SUCCESS 0 

int main()
{
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch (week)
  {
  case 1:
    cout << "Monday" << endl;
  break;
  
  case 2: 
    cout << "Tuesday" << endl;
  break;

  case 3: 
    cout << "Wednesday" << endl;
  break;


  case 4: 
    cout << "Thursday" << endl;
  break;

  case 5: 
    cout << "Friday" << endl;
  break;

  case 6: 
    cout << "Saturday" << endl;
  break;

  case 7: 
    cout << "Sunday" << endl;
  break;

  default:
    cout << "Invalid input! Please enter week number between 1-7." << endl;  
    break;
  }
  
  return EXIT_SUCCESS;
}