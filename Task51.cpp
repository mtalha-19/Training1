#include <iostream>
#include <string>
using namespace std;

struct BloodDonor {
    string name;
    string bloodGroup;
};

int main() {
    // Initialize an array of 2 structures
    BloodDonor donors[2] = {
        {"Talha", "O+"},
        {"Hamza", "A-"}
    };

    // Loop through the array of structures
    for(int i = 0; i < 2; i++) {
        cout << donors[i].name << " has blood type " << donors[i].bloodGroup << endl;
    }

    return 0;
}