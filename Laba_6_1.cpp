#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void arr(int* c, const int size, const int Low, const int High)
{
    for (int i=0; i<size; i++)
    {
        c[i] = Low + rand() % (High-Low+1);
    }

}
void criteriy(int* c, const int size)
{
    for (int i=0; i<size; i++)
    {
    if (c[i]%2==0 || c[i]%13==0)
        c[i] = 0;
    }
}
 void Print(int* c, const int size)
{
       cout << "c = ";
       cout << "{ ";
   for (int i=0; i<size; i++)
   {
       cout << c[i];
       cout << ",";
   }
       cout << " }" << endl;
}
int Sum(int* c, const int size)
{
    int S=0;
    for (int i=0; i<size; i++)
          
            S += c[i];
            return S;
}
int Count(int* c, const int n, const int Low, const int High)
{
    int count=0;
    for (int i=0; i<n; i++)
        if ((c[i]>=Low)&&(c[i]<=High))
            count++;
    return count;
}
int main()
{
srand((unsigned)time(NULL));
    
    const int n=21;
    int c[n];
    int Low = 15;
    int High = 85;
    arr(c, n, Low, High);
    criteriy(c, n);
    Print(c, n);
    Sum(c, n);
    Count(c, n, Low, High);
    
    cout << "sum = " << Sum(c, n) << endl;
    cout << "Count = " << Count(c, n, Low, High) << endl;
    return 0;
    
}
