// C/C++ program to remove all adjacent duplicates
// from a string
#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

// This function recursively removes duplicates
// and returns modified string
char* removeDup(char * str, int n)
{
    int len = strlen(str);
    int k = 0; // To store index of result

    // Start from second character and add
    int i;
    // unique ones
    for (i=1; i< len; i++)
    {
        // If different, increment k and add
        // previous character
        if (str[i-1] != str[i])
            str[k++] = str[i-1];

        else
            // Keep skipping (removing) characters
            // while they are same.
            while (str[i-1] == str[i])
                i++;

    }

    // Add last character and terminator
    if(i!=len+1)
    str[k++] = str[i-1];
    str[k] =  '\0';
    //cout<<k<<endl;

    // Recur for string if there were some removed
    // character
    if (k != n)
        removeDup(str, k);// Shlemial Painter's Algorithm

    // If all characters were unique
    else return str;
}

int main()
{
    char str1[] = "daffbbass";
    cout << removeDup(str1, strlen(str1)) << endl;


}
// This code is contributed by Aditya Goel.
