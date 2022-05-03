// - Levenshtein.cpp  
#include <algorithm>
#include "Levenshtein.h"
int min3(int x1, int x2, int x3) // выбрать минимум из 3х 
{
    return std::min(std::min(x1, x2), x3);
}
int levenshtein_r(
    int lx, const char x[],
    int ly, const char y[])
{
    int rc = 0;
    if (lx == 0) rc = ly;
    else  if (ly == 0) rc = lx;
    else  if (lx == 1 && ly == 1 && x[0] == y[0]) rc = 0;
    else  if (lx == 1 && ly == 1 && x[0] != y[0]) rc = 1;
    else  rc = min3(
        levenshtein_r(lx - 1, x, ly, y) + 1,
        levenshtein_r(lx, x, ly - 1, y) + 1,
        levenshtein_r(lx - 1, x, ly - 1, y) + (x[lx - 1] == y[ly - 1] ? 0 : 1));
    return rc;
};
