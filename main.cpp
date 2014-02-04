#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("test.txt");
    for(int i=0;i<2;i++)
    {
        string nombre;
        int score;
        cout<<"Ingrese nombre: ";
        cin>>nombre;
        cout<<"Ingrese score: ";
        cin>>score;

        out<<nombre<<' ';
        out<<score<<' ';
    }
    out.close();

    ifstream in("test.txt");
    int num;
    string str;

    int num_max=-1;
    string str_max="";
    while(in>>str && in>>num)
    {
        cout<<str<<" "<<num<<endl;
        if(num>num_max)
        {
            num_max=num;
            str_max=str;
        }
    }
    cout<<"Max score: "<<str_max<<" "<<num_max;

    return 0;
}
