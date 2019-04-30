#include<bits/stdc++.h>
using namespace std;

class Secant
{
public:
    double EPS = 0.00001;

    double f(double x)
    {
        return x*x*x- x- 1;
    }

    double solved(double b, double c)
    {
        do
        {
            double a = b;
            b = c;
            c = b-(b-a)/(f(b)-f(a))*f(b);

            if (f(c)== 0.0)
            {
                return c;
            }
        }
        while(abs(c-b)>= EPS);

        return c;
    }
};

int main()
{
    Secant obj;

    cout<<"Enter two estimated value: ";
    double a, b;
    cin>>a>>b;

    double ans = obj.solved(a, b);
    cout<<"The result: "<<ans<<endl;
}
