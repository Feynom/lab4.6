#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double p, s, a = 0, b = 0;
    int n, k;

    p = 1;
    n = 1;
    while (n <= 20)
    {   
        s = 0;
        k = 1;
        while (k <= 20)
        {
            s = pow(k, 2.);
            a += 1 + sin(s * 1.0);
            b += 1 + cos(s * 1.0);
            k++;
        }
        p *= (a / (b * 1.0));
        n++;
    }
    cout << "p=" << p << endl;

    p = 1;
    n = 1;
    do
    {
        s = 0;
        k = 1; 
        do 
        {
            s = pow(k, 2.);
            a += 1 + sin(s * 1.0);
            b += 1 + cos(s * 1.0);
            k++;
        } while (k <= 20);
        p *= a / (b * 1.0);
        n++;
        
    } while (n <= 20);
    cout << "p=" << p << endl;

    p = 1;
    for (n = 1; n <= 20; n++)
    {
        s = 0;
        for (k = 1; k <= 20; k++)
        {
            s = pow(k, 2.);
            a += 1 + sin(s * 1.0);
            b += 1 + cos(s * 1.0);
        }
        p *= a / (b * 1.0);
    }
    cout << "p=" << p << endl;

    p = 1;
    for (n = 20; n >= 1; n--)
    {
        s = 0;
        for (k = 20; k >= 1; k--)
        {
            s = pow(k, 2.);
            a += 1 + sin(s * 1.0);
            b += 1 + cos(s * 1.0);
        }
        p *= a / (b * 1.0);
    }
    cout << "p=" << p << endl;

    return 0;
}
