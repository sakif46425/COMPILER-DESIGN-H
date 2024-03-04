#include <iostream>
#include <fstream>
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

bool keyword(const string& user_input)
{
    string filename = "input.txt";
    ifstream file(filename);

    string line;

    while (getline(file, line))
    {
        if (line.find(user_input) != string::npos)
        {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

int main()
{
    string Result;
    string Justification;

    cout << "Enter a string to be checked by the identifier.: ";
    cin >> Result;

    if (Check_Identifier(Result, Justification))
    {
        cout << Result << " is a valid identifier but invalid for keyword." << endl;
    }
    else
    {
        cout << Result << " is not a valid identifier because" << Justification << endl;
    }

    string user_input;
    cout << "Enter a keyword to search in the file: ";
    cin >> user_input;

    if (keyword(user_input))
    {
        cout << "Keyword '" << user_input << "' found in the file." << endl;
    }
    else
    {
        cout << "Keyword '" << user_input << "' not found in the file." << endl;
    }

    return 0;
}
