#include <iostream>

using namespace std;
/*This program takes in the number of hours worked and then outputs the
* resuling takehome pay and breaks down the withholdings
*/
int main (int argc, char** argv){
  //for hourly of 16$ with 1.5 OT after 40 hrs
  //6% 14% 5% 10$ total witheld for taxes and then insurance

  float hoursWorked = 0;
  float totalPay = 0;

  cout <<"How many hours were worked?"<<endl;
  cin >> hoursWorked; //note no checks are run on the cin. assumed to be a proper greater then 0 float

  if (hoursWorked > 40){ //check for overtime elligability
    totalPay = (hoursWorked - 40) * 24;//for overtime
    totalPay = totalPay + (40 * 16); //non overtime
  }
  else if (hoursWorked <= 40){
    totalPay = hoursWorked * 16; //non overtime
  }

  //description of amount for each withholding
  cout << "Your amount witheld is 10$."<< endl;
  cout << "There is "<< totalPay *.06 << "$ that is given for Social Security."<<endl;
  cout << "There is "<< totalPay *.14 << "$ that is given for Income tax."<<endl;
  cout << "There is "<< totalPay *.05 << "$ that is given for State income tax."<<endl;

  cout << "Your gross pay was "<<totalPay<<"$."<<endl;
  cout << "Your adjusted pay was "<<(totalPay*.75)-10<<"$ that was taken home after ins and tax." <<endl;

  return 0;
}
