#include <iomanip>
#include <iostream>

using namespace std;
typedef double F(double,double);

void euler(F f, double y0, double a, double b, double h)
{
    double y = y0;
    for (double t = a; t < b; t += h)
    {
        cout << fixed << setprecision(3) << t << " " << y << "\n";
        y += h * f(t, y);
    }
    cout << "done\n";
}

double newtonCoolingLaw(double, double t)
{
    return -0.07 * (t - 20);
}

int main()
{
    cout<<"For Room temperature at 20 C and cooling constant is 0.07"<< endl;
    double t1,t2,s;
    cout<<"Enter upper limit"<<endl;
    cin>>t1;
    cout<<"Enter lower limit"<<endl;
    cin>>t2;
    cout<<"Enter step value"<<endl;
    cin>>s;
    euler(newtonCoolingLaw, 100, t1, t2,  s);
}
