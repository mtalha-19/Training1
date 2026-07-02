#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, orignal, remainder, result = 0, digits = 0;

    cout <<"Enter a number ";
    cin >> num;
    
    orignal = num;
    int temp = num;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    while (num != 0){
        remainder = num % 10;
        result += pow(remainder, digits);
        num /= 10;
    }
    if(result = orignal)
    cout <<"Amstrong number";
    else
    cout <<"Not Amstrong ";

    return 0;
}