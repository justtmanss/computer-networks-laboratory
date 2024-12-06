#include <stdio.h>
int main()
{
    int n, i, bucketSize, outputRate;
    int currentSize = 0, time = 0;
    printf("Enter the number of packets: ");
    scanf("%d", &n);
    int arrivalTime[n], packetSize[n];
    printf("Enter the packets in the order of arrival time\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter time and size: ");
        scanf("%d %d", &arrivalTime[i], &packetSize[i]);
    }
    printf("Enter bucket size: ");
    scanf("%d", &bucketSize);
    printf("Enter the output rate: ");
    scanf("%d", &outputRate);
    for (i = 0; i < n; i++)
    {
        while (time < arrivalTime[i])
        {
            printf("At time %d\n", time);
            if (currentSize > 0)
            {
                int transmitted = (currentSize < outputRate) ? currentSize : outputRate;
                printf("%d bytes transmitted\n", transmitted);
                currentSize -= transmitted;
            }
            else
            {
                printf("No packets to transmit\n");
            }
            printf("Packets in the bucket: %d bytes\n", currentSize);
            time++;
        }
        printf("At time %d\n", arrivalTime[i]);
        if (currentSize + packetSize[i] <= bucketSize)
        {
            printf("%d bytes packet is inserted\n", packetSize[i]);
            currentSize += packetSize[i];
        }
        else
        {
            printf("%d bytes packet is discarded (bucket overflow)\n", packetSize[i]);
        }
        printf("%d bytes transmitted\n", (currentSize < outputRate) ? currentSize : outputRate);
        currentSize -= (currentSize < outputRate) ? currentSize : outputRate;
        printf("Packets in the bucket: %d bytes\n", currentSize);
        time = arrivalTime[i] + 1;
    }
    while (currentSize > 0)
    {
        printf("At time %d\n", time);
        int transmitted = (currentSize < outputRate) ? currentSize : outputRate;
        printf("%d bytes transmitted\n", transmitted);
        currentSize -= transmitted;
        printf("Packets in the bucket: %d bytes\n", currentSize);
        time++;
    }

    return 0;
}