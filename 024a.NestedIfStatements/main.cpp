#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int lenght{}, width{}, height{};
    double base_cost{2.5};

    const int tier1_treshold{100};
    const int tier2_treshold{500};

    int max_dimmension_lenght{10};

    double tier1_subcharge{0.1};
    double tier2_subcharge{0.25};

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter lenght, width, and height of the package separated by spaces: ";
    cin >> lenght >> width >> height;

    if (lenght > max_dimmension_lenght || width > max_dimmension_lenght || height > max_dimmension_lenght) {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        double package_cost{};
        package_volume = lenght * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_treshold) {
            package_cost += package_cost * tier2_subcharge;
            cout << " adding tier 2 subcharge" << endl;
        } else if (package_volume > tier1_treshold) {
            package_cost += package_cost * tier1_subcharge;
            cout << " adding tier 1 subcharge" << endl;
        }

        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;

    }


    return 0;
}