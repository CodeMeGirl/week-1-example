// preprocessor directive - term lookup
// input/output - in/out
#include <iostream> // library - iostream - term lookup
   using std::cin;  // c-in - storing something inside of something
   using std::cout; // c-out - displaying information or a statement
   using std::endl; // endl - new line character - flushes the buffer

#include <string>
   using std::string;

int main()
{
    // string literal
    // syntax - term look up
    cout << "My name is Amanda. " << endl;
    // << stream insertion operator - term look up

    // data type - variable name 
    // variable names - lowercase letter - next letter uppercase
    string faveColor;
    cout << "What is your favorite color? " << endl;
    getline(cin, faveColor);
    // getline - term look up
    cout << "Amanda's favorite color is: " << faveColor << endl;

    int faveNum;
    cout << "What is your favorite number? " << endl;
    cin  >> faveNum;
    // >> stream extraction operator
    cout << "Amanda's favorite number is: " << faveNum << endl;

    return 0;
}

