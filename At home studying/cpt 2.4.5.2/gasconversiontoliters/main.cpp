#include <iostream>


using namespace std;

int main()
{
    float gallons_of_gas;
    float liters_of_gas;
    float conversion_to_liters = 3.7854;

    cout << "Hello, Please type the number of gallons to convert to liters. \n Then press Enter" << endl;
    cin >> gallons_of_gas;

    liters_of_gas = (gallons_of_gas * conversion_to_liters);

    cout << gallons_of_gas << " of gas is equal to " << liters_of_gas << " liters of gas" << endl;
    system("PAUSE");
    return 0;
}
