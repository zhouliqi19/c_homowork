//202610125119
//周丽淇
#include <stdio.h>
#include <string.h>
struct Player {
    char name[16];
    int score;
};
void sort_players(struct player qrr[],int n)
{
    int i,j;
for(i=0;i<n-1;i++)
{
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j].score < arr[j+1].score) {
                struct Player temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(void) {
    int n;
    scanf("%d", &n);
    struct Player players[10]; // n<=10
    for (int i = 0; i < n; i++) {
        scanf("%s %d", players[i].name, &players[i].score);
    }
    sort_players(players, n);
    for (int i = 0; i < n; i++) {
        printf("%d %s %d\n", i+1, players[i].name, players[i].score);
    }
    return 0;
}