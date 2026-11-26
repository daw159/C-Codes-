#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    system("cls");
    int i, j, n;
    cout << "Enter the n: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        char x = 64 + i;
        for (j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
    return 0;
}
