/* Design a C++ program for sorting names using file handling.
*/

#include <iostream>
#include <fstream>
#include <cstring> // Add this header for strcmp and strcpy
using namespace std;

int main()
{
    ifstream in("C:\\file1.txt"); // Input file
    if (!in)
    {
        cout << "Cannot open input file.\n";
        return 1;
    }

    ofstream out("TextFile1.txt"); // Output file
    if (!out)
    {
        cout << "Cannot open output file.\n";
        return 1;
    }

    char str[5][20];
    char t[20];
    int i, j;

    cout << "File contents:\n";
    for (int i = 0; i < 5; i++)
    {
        in >> str[i];
        cout << str[i] << endl;
    }

    // Bubble sort algorithm for sorting the names
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(t, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], t);
            }
        }
    }

    cout << "Names in alphabetical order:\n";
    for (i = 0; i < 5; i++)
    {
        cout << str[i] << "\n";
        out << str[i] << "\n";
    }

    return 0;
}
