#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc , char** argv)
{
    cout<<"Enter a number\n";
    long double x;
    x=stold(argv[1]);
    cout<<"Enter a presicion\n";
    int preci;
    preci=stoi(argv[2]);
    long double addition;
    long double afairesi;
    long double pollaplasiasmos;
    long double diairesi;
    addition=x+x;
    cout<<setprecision(preci)<<x <<  " + " <<setprecision(preci)<< x <<" ::== " <<setprecision(preci)<< addition <<"\n";
    afairesi=addition-x;
    cout<<setprecision(preci)<<addition << " - " <<setprecision(preci)<< x << " ::== " <<setprecision(preci) << afairesi <<"\n";
    pollaplasiasmos=afairesi*x;
    cout<< setprecision(preci)<<afairesi << " * " <<setprecision(preci)<< x << " ::== " <<setprecision(preci) << pollaplasiasmos <<"\n";
    diairesi=pollaplasiasmos/x;
    cout<<setprecision(preci)<<pollaplasiasmos << " / " << setprecision(preci)<<x << " ::== " <<setprecision(preci) << diairesi <<"\n";
    cout<<"-------> " << " " << diairesi <<"\n";
    return 0;
}
