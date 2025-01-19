#include <iostream>

using namespace std;

int main()
{
    float price1 = 0.0, price2 = 0.0, totalPrice = 0.0, basePrice = 0.0, taxedPrice = 0.0, taxRate = 0.0;
    char clubCardInput;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout
        << "Enter price of first item: ";
    cin >> price1;
    cout << "Enter price of second item: ";
    cin >> price2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCardInput;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    basePrice = price1 + price2;

    if ((price1 < price2) || (price1 == price2))
    {
        price1 -= (price1 * .50);
    }
    else if (price1 > price2)
    {
        price2 -= (price2 * .50);
    }

    totalPrice = price1 + price2;

    if (clubCardInput == 'y' || clubCardInput == 'Y')
    {
        float discount = (price1 + price2) * .10;
        totalPrice -= discount;
    }

    taxRate /= 100.0;
    taxedPrice = (totalPrice * taxRate) + totalPrice;

    cout << "\nBase price: " << float(basePrice) << "\n";
    cout << "Price after discounts: " << float(totalPrice) << "\n";

    cout.precision(5);

    cout << "Total price: " << float(taxedPrice) << "\n"
         << endl;

    return 0;
}