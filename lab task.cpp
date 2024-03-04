#include <iostream>
#include <string>

using namespace std;

bool Check_Identifier(const string& Result, string& Justification)
{
    if (Result.empty())
    {
        Justification = "THIS SITE WILL NOT ACCEPT AN EMPTY IDENTIFIER....!!";
        return false;
    }

    if (!isalpha(Result[0]) && Result[0] != '_')
    {
        Justification = "This program requires an alphabet or an underscore as the initial letter....";
        return false;
    }

    for (size_t i = 1; i < Result.length(); i++)
        {
        if (!isalnum(Result[i]) && Result[i] != '_')
        {
            Justification = "cause '" + string(1, Result[i]) + "' at position " + to_string(i + 1) +
                          "\n it can only be alphabets, digits, or underscores.";
            return false;
        }
    }

    return true;
}

int main()
{
    string Result;
    string Justification;

    cout << "Enter a string to be checked by the identifier.: ";
    cin >> Result;

    if (Check_Identifier(Result, Justification))
    {
        cout << Result << " is a valid identifier." << endl;
    }
    else
    {
        cout  << Result << " is not a valid identifier because" << Justification << endl;
    }

    return 0;
}
