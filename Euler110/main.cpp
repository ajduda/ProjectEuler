#include <iostream>

using namespace std;

int numAnswers(int);

int main()
{
    int ANSWER = 10; // Change this to test different numbers sizes
    int n = 1;
    int ret = 0;
    while (ret <= ANSWER)
    {
        n++;
        ret = numAnswers(n);
    }
    cout << endl << n << ":" << ret << endl;

}

/*
    n = xy / (x + y)
    x < y, n < x <= y
    trivial example x = y = 2n, not included, just increment the answer before returning
    Example, n = 6, x = 10, y = 15
*/

int numAnswers(int n)
{
    int x = 0;
    int y = 0;
    int ret = 1; //Trivial example, x = y = 2n, just start after that and add 1 to the return val
    for (x = 2*n - 1; x > n; x--)
    {
        y = 2*n + 1;
        while ((x*y / (x+y)) < n)
        {
            y++;
        }
        if ((x*y / (x + y)). == n)
        {
            cout << n << "," << x << "," << y << "\n";
            ret++;
        }
    }
    if (n % 100 == 0)
    {
        cout << n << ": " << ret << "\n";
    }
    return ret;
}
