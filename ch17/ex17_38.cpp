#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
  ifstream myfile ("./test");
  char sink [250];

  while(myfile.getline(sink,250,' '))
  {
    cout << sink << endl;
  }
  return 0;
}
