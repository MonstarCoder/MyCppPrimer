#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main () {
  ifstream myfile("./test");
  if (myfile) cout << 1 << endl;
  char sink [250];

  while(myfile.getline(sink,250))
  {
    cout << sink << endl;
  }
  return 0;
}

