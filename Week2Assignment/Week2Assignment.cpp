// Name: Garrett Hatcher
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int NumGen(int n)
{
    for (int j = 1; j < n + 1; j++)
    {

        
        if (j % 12 == 0 || j % 30 == 0)
            cout << j << " ";
    }
    return n;
}

void reverseStr(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string remVowel(string v)
{
    vector<char> vowels = { 'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U' };

    for (int i = 0; i < v.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
            v[i]) != vowels.end())
        {
            v = v.replace(i, 1, "");
            i -= 1;
        }
    }
    return v;
}

int main()
{
    int N = 1000;

    NumGen(N);

    cout << " " << endl;

    string str = "hello world";
    reverseStr(str);
    cout << str;

    cout << " " << endl;

    string v = "The ckae is a lie";
    cout << remVowel(v) << endl;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
