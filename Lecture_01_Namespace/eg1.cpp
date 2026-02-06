#include <stdio.h>
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

using namespace sales;
int main()
{
    int amount;
    amount = getLastTranscationAmount();
    printf("Last Transcation amount (Sales) %d\n", amount);
    amount = purchase::getLastTranscationAmount();
    printf("Last Transcation amount (Purachse) %d\n", amount);
    return 0;
}