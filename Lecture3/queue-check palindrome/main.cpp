#include <algorithm>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

int main( )
{
    queue<char> q;
    stack<char> s;
    string the_string;
    int mismatches = 0;

    cout << "Enter a line and I will see if it's a palindrome:" << endl;
    int i = 0;

    while (cin.peek() != '\n')
    {
        cin >> the_string[i];
        if (isalpha(the_string[i]))
        {
            q.push(toupper(the_string[i]));
            s.push(toupper(the_string[i]));
        }
        i++;
    }

    while ((!q.empty()) && (!s.empty()))
    {
        if (q.front() != s.top())
            ++mismatches;

        q.pop();
        s.pop();
    }

    if (mismatches == 0)
        cout << "This is a palindrome" << endl;
    else
        cout << "This is not a palindrome" << endl;

    system("pause");
    return EXIT_SUCCESS;
}