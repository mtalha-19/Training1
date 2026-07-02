#include <iostream>
using namespace std;
class Int {
    int val;
        public:
        Int() : val(0){}
        void setVal(int v) { val = v; }
        void display(){cout << val;}
        void add(Int i1, Int i2) { val = i1.val + i2.val;}
    };