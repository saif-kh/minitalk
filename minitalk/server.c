#include "minitalk.h"

int bi_to_dec(int curr_bit)
{
    int i;
    int res;

    i = 0;
    res = 1;
    while (i < curr_bit)
    {
        res *= 2;
        i++;
    }
    //printf("%d\n", res);
    return res;
}

void sig_handler(int sig)
{
    static int curr_bit;
    static int asc;
    char c;

    if (sig == SIGUSR2)
        asc += bi_to_dec(curr_bit);
    if (curr_bit == 7)
    {
        c = asc;
        write(1, &c, 1);
        curr_bit = -1;
        asc = 0;
    }
    curr_bit++;
}

int main()
{
    printf("%ld\n", (long int)getpid());
    signal(SIGUSR2, sig_handler);
    signal(SIGUSR1, sig_handler);
    while (1)
        usleep(WAIT_TIME);
}