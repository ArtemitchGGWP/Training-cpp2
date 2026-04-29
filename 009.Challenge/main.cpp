#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int small_room_amount{0};
    int large_room_amount{0};
    const double price_small_room{25};
    const double price_large_room{35};
    const double sales_tax{0.06};

    cout << "Welcome to the Frank's Carpet Cleaning Service." << endl;
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_room_amount;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_room_amount;

    double room_price = price_small_room * small_room_amount + 
    price_large_room * large_room_amount;
    double tax_price = room_price * sales_tax;
    double total_price = room_price + tax_price;
    
    cout << "Price per small room: €" << price_small_room << endl;
    cout << "Price per large room: €" << price_large_room << endl;
    cout << "Cost: " << room_price << endl;
    cout << "Tax: " << tax_price;
    cout << "\n=============================================" << endl;
    cout << "Total estimate: €" << total_price;
    cout << "\nThe estimate is valid for 30 days." << endl;


    return 0;
}