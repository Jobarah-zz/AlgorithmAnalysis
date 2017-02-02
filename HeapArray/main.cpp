#include "Test.h"
#include <iostream>
using namespace std;

bool isMaxHeap(int *array)
{

    for(int i = 0; array[i] != -1 ;i++)
    {
        int left = i*2+1; //left
        int right = i*2+2; // right
        if((array[left] != -1 && array[left] > array[i]) || (array[right] != -1 && array[right] > array[i]))
        {
            cout<<"False"<<endl;
            return false;
        }
    }
    cout<<"true"<<endl;
    return true;
}

int main ()
{
    test();
    return 0;
}
