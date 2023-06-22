#include <iostream>
using namespace std;

string lowerCase(string name, int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = name[i];
        if (ch >= 'a' && ch <= 'z')
        {
            return name;
        }
        else
        {
            name[i] = ch - 'A' + 'a';
        }
    }
    return name;
}

bool palindrom(string name, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (name[start] != name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

char higst(string name, int n)
{
    int arr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch = name[i];
        arr[ch - 'a']++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}

string reverse(string name, int n)
{
    int i = 0, j = n - 1;

    while (i <= j)
    {
        int temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
    return name;
}

int main()
{

    string name;
    cout << "enter your name  " << endl;
    cin >> name;
    cout << " lowercase is  " << lowerCase(name, name.length()) << endl;
    cout << palindrom(name, name.length()) << endl;
    cout << higst(name, name.length()) << endl;
    cout << reverse(name, name.length()) << endl;

    return 0;
}