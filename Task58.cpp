#include <iostream>
#include <fstream>
using namespace std;
int main() {
 ofstream file("data.txt");
 file << "Hello File Handling";
 file.close();
 return 0;
}