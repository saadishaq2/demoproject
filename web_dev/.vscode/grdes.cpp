#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d, e, avg;
  cout << "Enter marks out of 100" <<endls
  cout << "Enter marks in 1st subject : ";
  cin >> a;
  cout << "Enter marks in 2nd subject : ";
  cin >> b;
  cout << "Enter marks in 3rd subject : ";
  cin >> c;
  cout << "Enter marks in 4th subject : ";
  cin >>d;
  cout << "Enter marks in 5th subject : ";
  cin >>e;
  avg = (a + b + c + d + e) / 5; 

    switch(avg/10)
    {
        case 10:
        case 9:
        cout<<"Your Garde is A+"<<endl;
        break;
        case 8:
        cout<<"Your Garde is A"<<endl;
        break;
        case 7:
        cout<<"Your Garde is B+"<<endl;
        break;
        case 6:
        cout<<"Your Garde is B"<<endl;
        break;
        case 5:
        cout<<"Your Grade is C"<<endl;
        break;
        case 4:
        cout<<"Your Grade is D"<<endl;
        break;
        default :
        cout<<"Your Grade is F"<<endl;
        break;
    }
    return 0;
}