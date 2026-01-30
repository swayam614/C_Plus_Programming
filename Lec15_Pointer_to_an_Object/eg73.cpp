#include<iostream>

using namespace std;

int main()
{
    int *arr , *p , i , total , req;
    
    cout << "Enter your requirment : " ;
    cin >> req;

    if(req <= 0)
    {
        cout << "Invalid Requirement" << endl;
        return 0;
    }
    arr = new int[req];

    i=0;
    p = arr;
    while (i<req)
    {
        cout << "Enter number : " ;
        cin >> *(p);
        p++;
        i++;
    }
    
    p = arr;
    total = 0;
    i=0;
    while(i<req)
    {
        total += *(p);
        p++;
        i++;
    }

    cout << "Total is : " << total << endl;
    delete []arr;

    
    return 0;
}