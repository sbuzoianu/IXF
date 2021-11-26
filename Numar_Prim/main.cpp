#include <iostream>

using namespace std;

int main()
{
    int n,i,nr=0;
    //n=17;
    cin >> n;


    for (i=1; i<=n; i++)

        if (n%i==0)
            nr++;

    if (nr==2)
        cout<<"DA";
        else
            cout<<"NU";

    return 0;
}
