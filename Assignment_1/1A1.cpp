#include <iostream>
using namespace std;
 
int main()
{
    int rows, num = 1;
 
    cout << "Enter number of rows: ";
    cin >> rows;
 
    // outer loop is responsible for row
    for(int i = 1; i <= rows; i++)
    {
         
        //inner loop is responsible for columns
        for(int j = 1; j <= i; j++)
        {
             
            // printing number 
            cout << num << " ";
            num++;
        }
         
        // give line breaks after ending every row
        cout << endl;
    }
 
    return 0;
}