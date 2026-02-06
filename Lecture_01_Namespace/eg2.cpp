#include <stdio.h>
namespace Swayam
{

    namespace sales
    {
        int getLastTranscationAmount()
        {
            return 1000;
        }
    }

    namespace purchase
    {
        int getLastTranscationAmount()
        {
            return 2000;
        }
    }
}

int main()
{
    int amount;
    amount = Swayam::sales::getLastTranscationAmount();
    printf("Last Transcation amount (Sales) %d\n", amount);
    amount = Swayam::purchase::getLastTranscationAmount();
    printf("Last Transcation amount (Purachse) %d\n", amount);
    return 0;
}