#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    cout << boolalpha;

    cout << "Enter two intergers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    cout << "Comparasion result (equals): " << equal_result << endl;
    cout << "Comparasion result (not equals): " << not_equal_result << endl;

    char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparasion result (equals): " << equal_result << endl;
    cout << "Comparasion result (not equals): " << not_equal_result << endl;

    double double1{}, double2{};
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);

    cout << "Comparasion result (equals): " << equal_result << endl;
    cout << "Comparasion result (not equals): " << not_equal_result << endl;

    cout << "Enter an interger and a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparasion result (equals): " << equal_result << endl;
    cout << "Comparasion result (not equals): " << not_equal_result << endl;

    return 0;
}