#include <vector>
#include <iostream>
using namespace std;

int firstDuplicateValue(vector<int> array);

int main()
{
    vector<int> input = { 2, 1, 5, 2, 3, 3, 4 };
    cout << firstDuplicateValue(input) << endl;
    return 0;
}
int firstDuplicateValue(vector<int> array)
{

    for (int value : array)
    {
        int absValue = abs(value);
        if (array[absValue - 1] < 0)
        {
            return absValue;

        }
        array[absValue - 1] *= -1;
    }
    return -1;
}
