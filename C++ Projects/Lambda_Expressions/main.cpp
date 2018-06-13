#include <iostream>

using namespace std;

class Widget
{
    private:
        int iValue;
    public:
        Widget(){iValue = 0;};
        Widget(int pValue): iValue(pValue){};
        int getValue() { return iValue;};
};

int main (int argc, char* argv[])
{
    Widget w(10);
    cout << "iValue = " << w.getValue() << endl;
    cin.get();
    cin.ignore();
 
}