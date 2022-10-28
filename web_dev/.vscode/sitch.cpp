#include <iostream>
using namespace std;
int main()
{
    //variables
    int score;
    char grade;
    cout << "Enter score(0-100): ";
    cin >> score;

    //check score is valid or not
    if(score<0 || score>100)
    {
      cout << "Invalid score" <<endl;
      return 0;
    }
    switch(score/10)
    {
      case 10:
      case 9:
      grade = 'A' ;
      break;
      case 8:
      grade = 'B' ;
      break;
      case 7:
      grade = 'C' ;
      break;
      case 6:
      grade = 'D' ;
      break;
      case 5:
      grade = 'E' ;
      break;
      default:
      grade = 'F'
    }

    //Display grade
    cout << "Grade = " << grade << endl;
  cout << endl;
  system ("pause");
  return 0;
  
}