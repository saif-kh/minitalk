#include "minitalk.h"

void send_message(int pid, char c)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (c & 0b01)
            kill(pid, SIGUSR2);
        else
            kill(pid, SIGUSR1);
        c = c >> 1;
        i++;
        usleep(WAIT_TIME);
    }
}

int main(int argc, char *argv[])
{
    int pid;
    int i;

    i = 0;
    pid = ft_atoi(argv[1]);
    while (argv[2][i])
    {
        send_message(pid, argv[2][i]);
        //printf("%c\n", argv[2][i]);
        i++;
    }
    send_message(pid, argv[2][i]);
}