#include<iostream>

using namespace std;

int main()
{
    int *arr , i , total , req;
    
    cout << "Enter your requirment : " ;
    cin >> req;

    if(req <= 0)
    {
        cout << "Invalid Requirement" << endl;
        return 0;
    }

    i=0;
    while (i<req)
    {
        cout << "Enter number : " ;
        cin >> *(arr+i);
        i++;
    }

    total = 0;
    i=0;
    while(i<req)
    {
        total += *(arr + i);
        i++;
    }

    cout << "Total is : " << total << endl;
    delete []arr;

    
    return 0;
}