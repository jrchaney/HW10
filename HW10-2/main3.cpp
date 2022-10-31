#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  string month, day, year;
  int sunriseH, sunriseM, sunsetH, sunsetM;
  int hours, mins;

  while (cin >> month && cin >> day && cin >> year){
    cin >> sunriseH;
    cin.ignore();
    cin >> sunriseM;

    cin >> sunsetH;
    cin.ignore();
    cin >> sunsetM;
  

  hours = sunsetH - sunriseH;
  mins = sunsetM - sunriseM;
  if (mins < 0){
    mins += 60;
    hours--;
  }
  cout << month << " " << day << " "<< year << " " << hours << " hours" << " " << mins << " minutes" << endl;
  }
}