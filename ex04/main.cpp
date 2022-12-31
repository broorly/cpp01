#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inputFile;
  inputFile.open("numbers.txt");

  if (!inputFile.is_open()) {
    cerr << "Error opening file" << endl;
    return 1;
  }

  int x;
  while (inputFile >> x) {
    cout << x << endl;
  }

  inputFile.close();

  return 0;
}
