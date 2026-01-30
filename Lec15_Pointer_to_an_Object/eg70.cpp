#include<iostream>

using namespace std;

int main()
{
    int *x , i, total , req;

    cout << "Enter your requirement : " ;
    cin >> req;

    if(req <= 0)
    {
        cout << "Invalid Requirement" << endl;
        return 0;
    }

    x = new int[req];
    for(i=0;i<req;i++) cin >> x[i];
    for(total = 0 , i =0;i<req;i++) total += x[i];
    cout << "Total is : " <<total << endl;

    return 0;
}