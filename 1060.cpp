#include <iostream>
using namespace std;
#include <iomanip>
int main()

{
    float a, b, c, d, e, f, count = 0, avg;
    cin >> a >> b >> c >> d >> e >> f;

    if (a >= 0)
    {
        count = count + 1;
        avg = a;
    }
    if (b >= 0)
    {
        count = count + 1;
        avg = avg + b;
    }
    if (c >= 0)
    {
        count = count + 1;
        avg = avg + c;
    }
    if (d >= 0)
    {
        count = count + 1;
        avg = avg + d;
    }
    if (e >= 0)
    {
        count = count + 1;
        avg = avg + e;
    }
    if (f >= 0)
    {
        count = count + 1;
        avg = avg + f;
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg / count << endl;

} 
