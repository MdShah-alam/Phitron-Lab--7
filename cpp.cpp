#include <iostream>
using namespace std;
int main()
{
    int n;
    char arr[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'n')
        {
            cout << "1"
                 << " ";
        }
        else  if (arr[i] == 'z')
        {
            cout << "0"
                 << " ";
        }
    }
}
