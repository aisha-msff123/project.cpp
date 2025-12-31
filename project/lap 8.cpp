#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "\n--- Comprehensive Program Menu ---" << endl;
    cout << "1. Check number properties (Positive/Negative, Even/Odd)" << endl;
    cout << "2. Generate multiplication table" << endl;
    cout << "3. Print right-angled triangle pattern" << endl;
    cout << "4. Simple calculator" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case '1':
        // Check number properties (Positive/Negative, Even/Odd)
        int number;
        cout << " enter value of number:";
        cin >> number;
        if (number > 0)
        {
            if (number % 2 == 0)
                cout << " positive even number\n";

            else
                cout << "positive odd number \n";
        }

        else if (number < 0)
        {
            cout << "negative number\n ";
        }
        else
        {
            cout << " zero \n";
        }
        break;
    case '2':
        // Generate multiplication table
        int i;
        for (i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 10; j++)
                cout << j * i << " ";
            cout << endl;
        }
        break;

    case '3':
        // Nested Loops: Triangle Pattern
        int rows;
        cout << "Enter number of rows: ";
        cin >> rows;
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case '4':
        // Simple calculator
        double num1, num2;
        char op;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Division by zero!";
            break;
        case '5':
            break;
        default:
            cout << "Invalid operator";
        }
    }
}
