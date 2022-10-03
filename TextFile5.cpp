#include "pt4.h"
#include <fstream>
#include <string>
using namespace std;

void Solve()
{
    Task("TextFile5");
    
    string num;
    float floatnumsum = 0,k = 0;
    ifstream file("a.num");
    
    while (!file.eof())
    {
        file >> num;
        if (stoi(num) != 0)
        {
            floatnumsum += stoi(num);
            k += 1;
        }
    }
    pt << (floatnumsum / k);
    file.close();
}
