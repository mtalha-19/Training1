#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        float price;
    public:
        Book(string t, float p) : title(t), price(p) {}

        float getPrice() const {
            return price;
        }
        void display() const {
            cout << "Title: " << title << " |Price: " << price << endl;
        }
};
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    Book** library = new Book*[n];
    for(int i = 0; i < n; i++) {

        string title;
        float price;

        cin.ignore();
        cout << "Enter title: "<< endl;
        getline(cin, title);

        cout << "Enter price: "<< endl;
        cin >> price;
        library[i] = new Book(title, price);

    }

    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(library[i]->getPrice() > library[maxIndex]->getPrice()) {
            maxIndex = i;
        }
    }
    cout << "\n----Most Expensive Book-----\n";
    library[maxIndex]->display();

    for(int i = 0; i < n; i++) {
        delete library[i];

    }
    delete[] library;

    return 0;
}