#include <iostream>
using namespace std;
void changeValue(int &num){
    num = 100;
    cout << "Inside function: num = " << num << endl;
}
int main(){
    int num = 10;
    cout << "Before function call: num = " << num << endl;
    changeValue(num);       
    cout << "After function call: num = " << num << endl;
    return 0;

}