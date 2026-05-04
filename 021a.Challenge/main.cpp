#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // Solution for modular operator
    SetConsoleOutputCP(CP_UTF8);


    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int change_amount{};

    cout << "Enter $ amount in cents: ";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    const int euros_value{100};
    const int fifty_cents_value{50};
    const int twenty_cents_value{20};
    const int ten_cents_value{10};
    const int five_cents_value{5};
    const int cents_value{1};

    int eur_change_amount;

    cout << "Enter € amount in cents: ";
    cin >> eur_change_amount;

    int balance_eur{}, euros{}, fifty_cents{}, twenty_cents{}, ten_cents{}, five_cents{}, cents{};

    euros = eur_change_amount / euros_value;
    balance_eur = eur_change_amount % euros_value;

    fifty_cents = balance_eur / fifty_cents_value;
    balance_eur %= fifty_cents_value;

    twenty_cents = balance_eur / twenty_cents_value;
    balance_eur %= twenty_cents_value;

    ten_cents = balance_eur / ten_cents_value;
    balance_eur %= ten_cents_value;

    five_cents = balance_eur / five_cents_value;
    balance_eur %= five_cents_value;

    cents = balance_eur;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Euros: " << euros << endl;
    cout << "Fifty cents: " << fifty_cents << endl;
    cout << "Twenty cents: " << twenty_cents << endl;
    cout << "Ten cents: " << ten_cents << endl;
    cout << "Five cents: " << five_cents << endl;
    cout << "Cents: " << cents << endl; 

    return 0;
}