#include <iostream>
using namespace std;

struct car{
    string brand;
    string model;
    double price;

};
int main()
{
    car c1, c2, c3;

    cout <<"Enter 3 cars:" << endl;
    cin >> c1.brand >> c1.model >> c1.price;
    cin >> c2.brand >> c2.model >> c2.price;
    cin >> c3.brand >> c3.model >> c3.price;

    car highest = c1;
    car lowest = c1;
    
    if(c2.price > highest.price ) highest = c2;
    if(c3.price > highest.price ) highest = c3;

    if(c2.price < lowest.price ) lowest = c2;
    if(c3.price < lowest.price ) lowest = c3;

    cout << "Most Expensive " << highest.brand << endl;;
    cout << "Cheapest one" << lowest.brand << endl;;
    cout <<"Price difference" << highest.price - lowest.price << endl;
    return 0;
}