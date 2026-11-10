//202610125119
//周丽淇
#include <stdio.h>

struct Window
{
    int buffer[3];
    int count;
};

struct Window push_data(struct Window win, int val)
{
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}

int get_average(struct Window win)
{
    int sum = 0;
    int n;
    if (win.count < 3)
    {
        n = win.count;
    }
    else
    {
        n = 3;
    }
    for (int i = 0; i < n; i++)
    {
        sum += win.buffer[i];
    }
    return sum / n;
}

int main(void)
{
    int m;
    scanf("%d", &m);
    struct Window win = {{0}, 0};
    int val;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &val);
        win = push_data(win, val);
        printf("%d ", get_average(win));
    }
    return 0;
}
