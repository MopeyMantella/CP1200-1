#include <iostream>
#include <ctime>

using namespace std;

//This MAX with nothing real inside the loop ran in 0.5 seconds...
const int MAX = 100000000; //setting the max stopping point 100M for testing

int main () {
  clock_t startTime = clock();
  cout << "Beginning loop" << endl;

int main ()
{     
  clock_t startTime = clock();
  cout << "Beginning loop" << endl;
   
  for (int i = 3; i < 51; i++) 
  {
    while (i % 2 == 0)
    {
      i = i/2;
    }
                
    while (i % 2 == 1)
    {
      i = i * 3 + 1;
      for (i % 2 == 0)
        i = i/2;
    }
    for(i=1)
      cout << "Magic, "
    else
      cout << "~Magic." << endl;  
  }
}
      
  clock_t finishTime = clock();
  cout << "Looping took " << double(finishTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;

  return 0;
}
