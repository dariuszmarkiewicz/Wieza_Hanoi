#include <iostream>

using namespace std;

const char palik[] = {'a', 'b', 'c'};

int licznik = 0;

void przenies(int p, int q, int n)
{
    licznik++;

    cout << " " << licznik << ". " << palik[p] << " -> " << palik[q] << endl;
}

void hanoi(int n, int a, int b, int c)
{

    if (n > 1)
        {
            hanoi(n - 1, a, c, b);
        }

    przenies(a, c, n);

    if (n > 1)
        {
            hanoi(n - 1, b, a, c);
        }
}


int main()
{
    int n;

    cout << " Ilosc elementow do ulozenia: ";
    cin >> n;

    hanoi(n, 0, 1, 2);

    //(2^n) - 1 - ilosc ruchow do ulozenia wiezy, gdzie n to liczba krazkow

    return 0;
}
