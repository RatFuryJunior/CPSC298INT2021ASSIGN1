#include <iostream>
#include <math.h>

using namespace std;
/*This program takes in weight in OZ and states many boxess
* it would take to be one ton of cereal
*/
int main (int argc, char** argv){
  float userWeight = 0;
  float tonInOunces = 35273.92;

  cout <<"What is the weght of each box in oz?"<<endl;
  cin >> userWeight; //takes in user weight, note no checks are done, assuems its an float

  int numberOfBoxes = ceil(tonInOunces/userWeight); //rounds up to be total num of boxes in a ton as there cant be partial boxes

  cout<< "One box of ceareal is " << userWeight/tonInOunces <<
  " tons, it would take " << tonInOunces/userWeight <<
  " boxes to weight one ton. Considering boxes can only be whole that is "
  << numberOfBoxes<< " boxes."<<endl;

  return 0;
}
