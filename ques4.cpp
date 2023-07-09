#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int m;
    int x;
    char a[20], b[20], c[40], d[40], e[30];
    cout << "Enter String 1" << endl;
    cin.getline(a, 20);
    cout << "Enter String 2" << endl;
    cin.getline(b, 20);
    int l1 = strlen(a);
    int l2 = strlen(b);
    cout << "MENU" << endl;
    cout << "1.SHOW ADDRESS OF EACH CHARACTER" << endl;
    cout << "2.CONCATENATE " << endl;
    cout << "3.COMPARE TWO STRINGS" << endl;
    cout << "4.CALCULATE THE LENGTH OF STRINGS" << endl;
    cout << "5.CONVERT ALL LOWERCASE TO UPPERCASE" << endl;
    cout << "6.REVERSE THE STRING " << endl;
    cout << "7.INSERT A STRING " << endl;
    cout << "8.EXIT" << endl;
    cout << "Enter Your choice";
    cin >> m;
    switch (m)
    {
    case 1:
        for (int i = 0; i < l1; i++)
        {
            cout << "Adress of letter at " << i << " position:-" << &a + i << endl;
        }
        break;
    case 2:
        for (int i = 0; i < l1; i++)
        {
            d[i] = a[i];
        }
        for (int j = l1; j < l1 + l2; j++)
        {
            d[j] = b[j - l1];
        }
        cout << "Concatenated string:-" << endl;
        for (int i = 0; i < l1 + l2; i++)
        {
            cout << d[i];
        }
        break;
    case 3:
        if (strcmp(a, b) == 0)
        {
            cout << "Strings are equal";
        }
        else
        {
            cout << "Strings are not equal";
        }
        break;
    case 4:
    {
        int count = 0;
        char *p;
        p = a;
        while (*p != '\0')
        {
            count += 1;
            p++;
        }
        cout << "Length of string 1 is" << count;
        break;
    }
    case 5:
    {
        for (int i = 0; i < l1; i++)
        {
            a[i] = toupper(a[i]);
        }
        cout << "String with conversion of lower to upper:-" << endl;
        for (int i = 0; i < l1; i++)
        {
            cout << a[i];
        }
        break;
    }
    case 6:
        for (int i = l1 - 1; i >= 0; i--)
        {
            d[l1 - i - 1] = a[i];
        }

        cout << "Reverse of the string:-" << endl;
        for (int i = 0; i < l1; i++)
        {
            cout << d[i];
        }
        break;

    case 7:
        cout<<"Enter the position where you want to enter the string 2 in string 1"<<endl;
        cin>>x;
        if (x>l1)
        {
            cout<<"Wrong string entered";
            break;
        }
        
        for (int j = x; j < l1; j++)
        {
            e[j - x] = a[j];
        }
        for (int p = x; p < x + l2; p++)
        {
            a[p] = b[p - x];
        }
        for (int h = x + l2; h < l1 + l2; h++)
        {
            a[h] = e[h - x - l2];
        }
        cout<<"String 2 is inserted in string 1 at "<<x<<" position, new string:- "<<endl;
        for (int i = 0; i < l1 + l2; i++)
        {
            cout << a[i];
        }
        break;
    }

    return 0;
}
