#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int iLen, iPos, h, i, j;
    char cPw[30];
    char cKey[63] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    srand(time(0));
    iLen = rand() % 5 + 6;

    for (h=0; h<iLen; h++){
        iPos = rand() % 63;
        cPw[h] = cKey[iPos];
    }

    cPw[iLen] = '\0';
    cout << "Password: " << cPw << endl;

    char cTemp, cText[50], cEncrypt[50];
    char cKey_[54] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


    srand(time(0));
    for (i=0; i<53; i++)
    {
        j = rand() % 52;
        cTemp = cKey_[i];
        cKey_[i] = cKey_[j];
        cKey_[j] = cTemp;
    }
    cout << "Write a text: " << endl;
    cin.getline(cText,49);
    iLen = strlen(cText);
    for (i=0; i<iLen; i++){
        if(cText[i]<97){
            cEncrypt[i] = cKey_[cText[i] - 65];
        }
        else{
            cEncrypt[i] = cKey_[cText[i] - 71];
        }
    }
    cEncrypt[iLen] = '\0';
    cout << "Encrypted: " << cEncrypt << endl;
    return 0;
}
