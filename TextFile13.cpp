#include "pt4.h"
#include <fstream>
using namespace std;

void Solve()
{
    Task("TextFile13");
    ofstream fout("e.dat");

    int a, n, i1, sumbefore = 0, sumafter = 0, i;

    pt >> n >> a;

    for (i = 2; i <= n; i++)
    {
        i1 = i;
        while (i1 != 0)
        {
            sumbefore += i1 % 10;
            i1 /= 10;
        }
        i1 = i * a;
        while (i1 != 0)
        {
            sumafter += i1 % 10;
            i1 /= 10;
        }
        if (sumafter == sumbefore)
        {
            fout << i << "\n";
        }
        
        sumafter = 0;
        sumbefore = 0;
    }

    fout.close();
}
