#include <iostream>
using namespace std;
class smallobj{
    private:
    int somedata;
    public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata()
    {
        cout << "data is " << somedata << endl;

    }
};
int main()
{
    smallobj obj;
    obj.setdata(10);
    obj.showdata();
    return 0;
}