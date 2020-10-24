#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Number of elements in your set: ";
    cin >> n;
    int v[n] = {0}, m[n];
    cout << "The elements of the given set: ";
    for(int i = 0; i < n; i++)
        cin >> m[i];
    for(int i = 0; i < pow(2,n); ++i)
    {
        int ci = i;
        string aux = "";
        int p10 = 1;
        if(ci)
        for(int p = pow(2,n-1); p > 0; p /= 2)
        {
            if(ci - p >= 0)
            {
                ci -= p;
                aux += "1";
            }
            else
            {
                aux += "0";
            }
            p10 *= 10;
        }
        p10 /= 10;

        int it = 0;
        if(aux != "")
        {
            cout << aux << ' ';
            cout<< '{';
            for(int it = 0; it < n; ++it)
            {
                if(aux[it] == '1')
                {
                    cout << m[it];
                    if(aux.find('1', it + 1) != string::npos)
                        cout << ',';
                }
            }
            cout << "} ";
        }
        else
        {
            cout << "∅ ";
        }

        cout<<endl;
        
    }

    return 0;
}