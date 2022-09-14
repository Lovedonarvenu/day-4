#include<iostream>
using namespace std;
 
void printRectangle(int h, int w)
{
    for (int i=0; i<h; i++)
    {
        cout << "\n";
        for (int j=0; j<w; j++)
        {
            // Print @ if this is first row
            // or last row. Or this column
            // is first or last.
            if (i == 0 || i == h-1 ||
                j== 0 || j == w-1)
               cout << "@";
            else
               cout << " ";
        }
    }
}
 
// Driver code
int main()
{ 
    int h = 4, w = 5;
    printRectangle(h, w);
    return 0;
}
