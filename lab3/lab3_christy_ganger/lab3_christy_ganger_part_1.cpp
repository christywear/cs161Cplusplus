/*
Christy Ganger
10/11/2018
CIS 126c++
Lab 3 part 1
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const double RATE1 = 0.05;
    const double RATE2 = 0.10;
    const double RATE3 = 0.15;
    const double LIMIT1 = 100000.0;
    const double LIMIT2 = 300000.0;
    double sales_price = 0.0;
    double commission = 0.0;
    double calc_rate1 = 0.0;
    double calc_rate2 = 0.0;
    double calc_rate3 = 0.0;
    //greet, get price
    cout << "Hello, Please enter the Sales Price to calculate commission: ";
    cin >> sales_price;

     // calculate price
     if (sales_price < 1 && sales_price > 1000000000)
        {cout << "Enter valid Sales Price";}
    else
        if (sales_price <= LIMIT1)
            {commission = sales_price * RATE1;}
        else
            if (sales_price > LIMIT1 && sales_price < LIMIT2)
                {calc_rate2 = ((sales_price - LIMIT1) * RATE1);
                calc_rate1 = (LIMIT1 * RATE2);
                commission = (calc_rate1 + calc_rate2);}
             else
                if (sales_price >= LIMIT2)
                    {calc_rate3 = ((sales_price - LIMIT2) * RATE3);
                    calc_rate2 = ((LIMIT2 - LIMIT1) * RATE2);
                    calc_rate1 =  (LIMIT1 * RATE1);
                    commission = (calc_rate1 + calc_rate2 + calc_rate3);}

system("CLS");
//output
cout << "Your commission on " << sales_price << " Is " << commission;




    return 0;
}
