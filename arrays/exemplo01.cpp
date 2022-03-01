// C++ Program to print the elements of a
// Two-Dimensional array
#include<iostream>
using namespace std;
 
int main()
{
    // an array with 3 rows and 2 columns.
    int x[4][2] = {
        {0,1},
        {2,3},
        {4,5},
        {6,7}
    };
 
    /*  | 9 | 41|
        ---------
        |21 | 43|
        ---------
        |14 | 15|
*/
    // output each array element's value
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Elemento no x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
 
    return 0;
}
