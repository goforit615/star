#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_char(char c, int n)
{
    int i;
    for (i=1; i<=n; i++)
        printf(" %c",c);
}

int main()
{
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;

    int n;
    int i;

    printf("Input N -> ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        print_char(' ',n-i);
        print_char('*',2*i-1);
        putchar('\n');
    }    

    for(i=1;i<=n-1;i++)
    {
        print_char(' ',i);
        print_char('*',2*n-2*i-1);
        putchar('\n');
    }
}