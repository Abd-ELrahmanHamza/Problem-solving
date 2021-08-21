#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
#include <sstream>
#include <numeric>
#include <complex>

using namespace std;
int main()
{
    int n, d, m;
    cin >> n >> d >> m;
    complex<double> p1 = complex<double>(0, d);
    complex<double> p2 = complex<double>(d, 0);
    complex<double> p3 = complex<double>(n, n - d);
    complex<double> p4 = complex<double>(n - d, n);
    p1 *= exp(complex<double>(0, -45 * (M_PI / 180)));
    p2 *= exp(complex<double>(0, -45 * (M_PI / 180)));
    p3 *= exp(complex<double>(0, -45 * (M_PI / 180)));
    p4 *= exp(complex<double>(0, -45 * (M_PI / 180)));
    // cout << real(p1) << ' ' << p1.imag() << endl;
    // cout << p2.real() << ' ' << p2.imag() << endl;
    // cout << p3.real() << ' ' << p3.imag() << endl;
    // cout << p4.real() << ' ' << p4.imag() << endl;
    vector<complex<double>> v(m);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i] = complex<double>(x, y) * exp(complex<double>(0, -45 * (M_PI / 180)));
    }

    for (int i = 0; i < m; i++)
    {
        // cout << v[i].real() << ' ' << v[i].imag() << endl;
        bool condx1 = (real(v[i]) >= real(p1) || fabs(real(v[i]) - real(p1)) < std::numeric_limits<float>::epsilon());
        bool condx2 = (real(v[i]) <= real(p3) || fabs(real(v[i]) - real(p3)) < std::numeric_limits<float>::epsilon());
        bool condy1 = (imag(v[i]) >= min(imag(p1), imag(p2)) || fabs(imag(v[i]) - min(imag(p1), imag(p2))) <= std::numeric_limits<float>::epsilon());
        bool condy2 = (imag(v[i]) <= max(imag(p1), imag(p2)) || fabs(imag(v[i]) - max(imag(p1), imag(p2))) <= std::numeric_limits<float>::epsilon());
        if (condx1 && condx2 && condy1 && condy2)
        {
            // cout << condx1 << " " << condx2 << " " << condy1 << " " << condy2 << endl;
            cout << "YES";
        }

        else
            cout << "NO";
        if (i != m - 1)
            cout << endl;
    }
    return 0;
}