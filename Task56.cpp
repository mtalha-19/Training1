#include <iostream>
using namespace std;
class Number {
private:
 int value;
public:
 Number(int v = 0) {
 value = v;
 }
 Number operator + (Number obj) {
 Number temp;
 temp.value = value + obj.value;
 return temp;
 }
 void display() {
 cout << value;
 }
};
int main() {
 Number n1(10), n2(20), n3;
 n3 = n1 + n2;
 n3.display();
 return 0;
}