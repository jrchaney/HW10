#include <iostream>
#include <iomanip>
using namespace std;

struct car
{
int carNumber;
int milesDriven;
int gallonsUsed;
};
int main(){


  car data[5] = {{25, 1450, 62}, 
    {36, 3240, 136},
    {44, 1792, 76},
    {52, 2360, 105},
    {68, 2114, 67}};

  double sum;
  cout << endl;
  cout << "Car Number " << setw(25) << "Miles per Gallon";
  for (int i = 0; i < 5; i++){
    cout << endl;
    cout << setiosflags(ios::left);   // left-justify the output
    cout << setw(20) << data[i].carNumber << setw(15) << data[i].milesDriven / data[i].gallonsUsed;

    sum = sum + data[i].milesDriven / data[i].gallonsUsed;
  }

  cout << endl << "The average is " << sum/5 << " mpg" << endl;

}