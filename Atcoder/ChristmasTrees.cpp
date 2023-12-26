//This code is unfinished

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll referencePoint, interval, takahashi, aoki;
    cin >> referencePoint >> interval >> takahashi >> aoki;
    vector<ll> treePoints;

    ll temp = referencePoint;
    treePoints.push_back(temp);
    ll i = 1;

    while (treePoints.back() <= aoki)
    {
        temp = referencePoint + (interval * i);
        i++;
        treePoints.push_back(temp);
    }

    i = 1;

    while (treePoints.back() >= takahashi)
    {
        temp = referencePoint - (interval * i);
        i++;
        treePoints.push_back(temp);
    }

    /*int count = 0;

    for (ll i = 0; i < treePoints.size(); i++)
    {
        if (treePoints[i] >= takahashi && treePoints[i] <= aoki)
        {
            count++;
        }
    }

    cout << count << endl;*/

    /*for (ll i = 0; i < treePoints.size(); i++)
    {
        cout << treePoints[i] << " ";
    }*/
}
