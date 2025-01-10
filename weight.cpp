#include <iostream>

using namespace std;

int main()
{
    int numBars;
    double oneWeight, totalWeight;

    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight of one candy bar\n";
    cout << "then press Return/Enter. \n";
    cin >> numBars;
    cin >> oneWeight;
    totalWeight = oneWeight * numBars;
    cout << numBars << " candy bars weigh " << totalWeight << " with each bar weighing " << oneWeight << ".";

    return 0;
}