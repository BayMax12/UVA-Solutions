#include <iostream>

using namespace std;

inline bool IsPerfect(int p)
{
    // 2^11 - 1 is not prime, so it is not included
    // the number generated by p = 17 is just less than max number,
    // So don't need to include any number larger than it
    return p == 2 || p == 3 || p == 5 || p == 7 ||
        p == 13 || p == 17;
}

int main()
{
    int N;
    cin >> N;
    
    char junk;
    for (int i = 0; i < N; ++i)
    {
        int p;
        cin >> p >> junk;
        
        if (IsPerfect(p))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}