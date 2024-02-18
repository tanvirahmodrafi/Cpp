#include <bits/stdc++.h>
using namespace std;

struct team
{
    string name;
    int score = 0;
};
bool isEmpty(string name)
{
    if (name.length() == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    struct team team1;
    struct team team2;
    string inp;
    while (n--)
    {
        cin >> inp;
        if (isEmpty(team1.name))
        {
            team1.name = inp;
            team1.score++;
        }
        else if (team1.name == inp)
        {
            team1.score++;
        }
        else
        {
            team2.name = inp;
            team2.score++;
        }
    }

    if (team1.score > team2.score)
    {
        cout << team1.name;
        return 0;
    }
    cout << team2.name;
    return 0;
}