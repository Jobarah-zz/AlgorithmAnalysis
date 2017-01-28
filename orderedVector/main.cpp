#include "Test.h"
#include <iostream>
using namespace std;


bool numberExists(vector<int> numbers, int x, int lastChecked, int start, int end) {

    int half = (start + end) / 2;
    int b = numbers[half];

    if (x == b)
    {
        return true;
    }

    if(x>b && half<numbers.size()-1 && half != lastChecked)
    {
        return numberExists(numbers, x, half,half+1, end);
    }

    if(x<b && half>0 && half != lastChecked)
    {
        return numberExists(numbers, x, half,start, half-1);
    }

    return false;

}

bool numberExists(vector<int> numbers, int x)
{
    return numberExists(numbers, x, 0, 0,numbers.size()-1);
}


int main ()
{
    test();
    return 0;
}
