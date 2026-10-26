#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(const Complex &c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    // Overloading - operator
    Complex operator-(const Complex &c)
    {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;

        return result;
    }

    // Overloading << operator
    friend ostream& operator<<(ostream &out, const Complex &c)
    {
        out << c.real;

        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";

        return out;
    }
};

int main()
{
    double r1, i1, r2, i2;
    int choice;

    cout << "========================================\n";
    cout << "       COMPLEX NUMBER CALCULATOR\n";
    cout << "========================================\n";

    // Input first complex number
    cout << "\nEnter real part of first complex number: ";
    cin >> r1;

    cout << "Enter imaginary part of first complex number: ";
    cin >> i1;

    // Input second complex number
    cout << "\nEnter real part of second complex number: ";
    cin >> r2;

    cout << "Enter imaginary part of second complex number: ";
    cin >> i2;

    // Creating objects
    Complex c1(r1, i1);
    Complex c2(r2, i2);

    do
    {
        cout << "\n========================================\n";
        cout << "                 MENU\n";
        cout << "========================================\n";
        cout << "1. Display Complex Numbers\n";
        cout << "2. Add Complex Numbers\n";
        cout << "3. Subtract Complex Numbers\n";
        cout << "4. Exit\n";
        cout << "========================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nFirst Complex Number  = " << c1 << endl;
            cout << "Second Complex Number = " << c2 << endl;
            break;

        case 2:
        {
            Complex sum = c1 + c2;

            cout << "\nAddition:\n";
            cout << c1 << " + (" << c2 << ") = " << sum << endl;

            break;
        }

        case 3:
        {
            Complex difference = c1 - c2;

            cout << "\nSubtraction:\n";
            cout << c1 << " - (" << c2 << ") = "
                 << difference << endl;

            break;
        }

        case 4:
            cout << "\nThank you for using Complex Number Calculator!\n";
            break;

        default:
            cout << "\nInvalid choice! Please enter 1 to 4.\n";
        }

    } while (choice != 4);

    return 0;
}