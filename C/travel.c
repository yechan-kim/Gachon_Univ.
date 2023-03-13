#include <stdio.h>

int main(void)
{
    int sum = 0, price, nights;

    printf("여행은 몇박인가요?: ");
    scanf("%d", &nights);

    printf("항공권 가격: ");
    scanf("%d", &price);
    sum += price;

    printf("호텔 1박 가격: ");
    scanf("%d", &price);
    sum += (price * nights);

    printf("하루에 필요한 용돈: ");
    scanf("%d", &price);
    sum += ((nights + 1) * price);

    printf("==============================\n");
    printf("총 여행 비용: %d\n", sum);
    printf("==============================\n");

    return 0;
}