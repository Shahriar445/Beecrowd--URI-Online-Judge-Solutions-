#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    cout << fixed << setprecision(2);
    float a, b, tax, t;
    cin >> a;
    if (a <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else if (a <= 3000.00)
    {
        tax = a - 2000;
        cout << "R$ " << tax * 0.08;
    }
    else if (a <= 4500.00)
    {
        tax = a - 2000;

        if (tax > 1000)
        {
            t = (tax - 1000) * 0.18;
        }
        cout << "R$ " << t + (1000 * 0.08) << endl;
    }
    else if (a > 4500.00)
    {
        tax = a - 4500;
        cout << "R$ " << (tax * 0.28) + (1500 * 0.18) + (1000 * 0.08) << endl;
    }

    return 0;
}