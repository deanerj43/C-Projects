#include <iostream>
#include <set>
#include <string>
#include <cstdlib>      //malloc
#include <cstring>      //memset

using namespace std;

int main(int argc, char* argv[])
{

    char *a = (char*)malloc(50*sizeof(char));
    memset(a, 'X', 50*sizeof(char));
    for (int i = 0; i < 50; i++)
        a[i] = i;

    std::set<std::string> setOfNumbers;

    setOfNumbers.insert("AAAAAA");
    setOfNumbers.insert("Second");
    setOfNumbers.insert("Third");
    setOfNumbers.insert("Forth");
    setOfNumbers.insert("Fifth");
    setOfNumbers.insert("Sixth");

    std::cout << "Set Size = " << setOfNumbers.size() << endl;

    for(std::set<std::string>::iterator it = setOfNumbers.begin(); it != setOfNumbers.end(); ++it)
        cout << " " << *it;
    cout << "\n";

    return 0;


}