#include <iostream>

using namespace std;
/*This program takes the room capacity and the number of people in the room
* it then outputs full, not full, or over capacity
* if its under or over it states by how many
*/
int main (int argc, char** argv){
  int numPeopleAllowed = 0;
  int numPeopleHere = 0;

  cout <<"What is the fire room capacity?"<<endl;
  cin >> numPeopleAllowed; //room capacity, assumed to be a proper positive int greater then 0
  cout <<"How many people are here now?"<<endl;
  cin >> numPeopleHere; //number of people, assumed to be a proper positive int greater then 0

  if (numPeopleHere == numPeopleAllowed){ //check for full
    cout<<"You are at the max!" <<endl;
  }
  else if(numPeopleHere > numPeopleAllowed){ //check for over
    cout<<"There are too many people here you need "
    << numPeopleHere - numPeopleAllowed << " to leave now!"<<endl;
  }
  else if(numPeopleAllowed > numPeopleHere){ // check for under
    cout<<"You are under capacity you can have "
    << numPeopleAllowed - numPeopleHere << " more people!"<<endl;
  }
  
  return 0;
}
