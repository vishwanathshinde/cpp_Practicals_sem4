#include <iostream>
using namespace std;
class ClassSum
{
    private:
        int x;
    public:
        ClassSum(int n)
        {
            x=n;
        }
        void calcuateSum()
        {
            int n,c, sum = 0;
            cout<<"Enter c: ";
            cin>>c;
            for(n=1;n<=c;n++)
            { 
                sum = sum + n;
            }
            cout<<"The sum of 1 to n is: "<<sum;
        }
};
int main()
{
    ClassSum c(c);
    c.calcuateSum();
    return 0;
}