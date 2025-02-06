#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int attempt = 10;
    int n = rand() % 100 + 1;
    int resp = -1;

    while (resp != n && attempt > 0) {
        
        system("cls");
        printf("[TENTATIVAS]: %d\n", attempt);
        printf("> ");
        scanf("%d", &resp);

        if (resp < n) {
            printf("(+)\n");
        } else if (resp > n) {
            printf("(-)\n");
        } else {
            continue;
        }
        attempt--;
        system("pause");
    }
    if (resp == n) {
        printf("Parabens! Voce acertou com: [%d] tentativas!\n", 10 - attempt);
    } else {
        printf("Que pena! Voce perdeu.\n");
    }
    system("pause");
    return 0;
}