#include <iostream>
#include <ctime>

using namespace std;

//This MAX with nothing real inside the loop ran in 0.5 seconds...
const int MAX = 100000000; //setting the max stopping point 100M for testing

int main () {
  clock_t startTime = clock();
  cout << "Beginning loop" << endl;

  for (int i = 3; i < MAX; i++) {
    //this is where your algorithm code would go
    i++; //do something to waste time...
    i--; //do something to waste time...
  }

  clock_t finishTime = clock();
  cout << "Looping took " << double(finishTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;

  return 0;
}
