#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d, e, avg;// declare integers
  cout << "Enter marks out of 100" <<endl;
  cout << "Enter marks in 1st subject : ";
  cin >>a;
  cout << "Enter marks in 2nd subject : ";
  cin >>b;
  cout << "Enter marks in 3rd subject : ";
  cin >>c;
  cout << "Enter marks in 4th subject : ";
  cin >>d;
  cout << "Enter marks in 5th subject : ";
  cin >>e;
  avg = (a + b + c + d + e) / 5; //calculate the average of marks.
  //Apply conditions to find grades.
  if (avg >= 80 && avg = 90)
  {
    cout << "your grade is A" << endl;
  }
  else if (avg >= 70 && avg < 80)
  {
    cout << "your grade is B" << endl;
  }
  else if (avg >= 60 && avg < 70)
  {
    cout << "your grade is C" << endl;
  }
  else if (avg >= 50 && avg < 60)
  {
    cout << "your grade is D" << endl;
  }
  else if (avg < 50 )
  {
    cout << "FAILD!" << endl;
  }
  else 
  cout << "INVALID!" ;
  cout << endl;
  system ("pause");
  return 0;
}