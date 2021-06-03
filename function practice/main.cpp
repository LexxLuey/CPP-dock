#include <iostream>
#include <string.h>

using namespace std;

int word (char s[])
{
    int i=0, j;
    j = strlen(s);
    while (i<j)
    {
        char c = s[i];
        if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
            i++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    char str[10];
    while (cin >> str)
        if (word(str))
            cout << "A word" << endl;
        else
            cout << "No word" << endl;
    return 0;
}
