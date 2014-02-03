#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("test.txt");
    out<<1234<<' ';
    out<<3.5<<' ';
    out<<5.2f<<' ';
    out<<true<<' ';
    out<<'f'<<' ';
    out<<"fdsa"<<' ';
    out.close();

    ifstream in("test.txt");
    int a;
    double b;
    float c;
    bool d;
    char e;
    string f;

    in>>a;
    in>>b;
    in>>c;
    in>>d;
    in>>e;
    in>>f;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    return 0;
}
