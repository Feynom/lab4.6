#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double p, s, a, b;
    int n;

    p = 1;
    n = 1;
    while (n <= 20)
    {   
        s = 0;
        n = 1;
        while (n <= 20)
        {
            s = pow(n, 2.);
            a = 1 + sin(s * 1.0);
            b = 1 + cos(s * 1.0);
            n++;
        }
        p *= a / b * 1.0;
        n++;
    }
    cout << "p=" << p << endl;

    p = 1;
    n = 1;
    do
    {
        do 
        {
            s = pow(n, 2.);
            a = 1 + sin(s * 1.0);
            b = 1 + cos(s * 1.0);
            n++;
        } while (n <= 20);
        p *= a / b * 1.0;
        n++;
        
    } while (n <= 20);
    cout << "p=" << p << endl;

    for (n; n <= 20;n++)
    {
        for (n; n <= 20; n++)
        {
            s = pow(n, 2.);
            a = 1 + sin(s * 1.0);
            b = 1 + cos(s * 1.0);
        }
        p *= a / b * 1.0;
    }
    cout << "p=" << p << endl;

    for (n = 20; n <= 0; n--)
    {
        for (n = 20; n <= 0; n--)
        {
            s = pow(n, 2.);
            a = 1 + sin(s * 1.0);
            b = 1 + cos(s * 1.0);
        }
        p *= a / b * 1.0;
    }
    cout << "p=" << p << endl;

    return 0;
}
