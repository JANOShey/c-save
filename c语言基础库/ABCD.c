#include <stdio.h> /*出于代码压缩的需求，仅支持在Windows系统上使用 Mingw GCC 编译。*/
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int map[36] = { 0 }, i, j, k, y = 256, f, a, b, s, e, m;
void dis() { /*显示局面*/
    for (i = 0, printf("\t一起来让GPA++！\n移动：↑/↓/←/→\t退出：ESC\n"); i < 5 || fflush(stdout) & 0; i++, printf("+----+----+----+----+\n"))
        for (j = 0; i && (j < 4 || (printf("|\n"), 0)); j++)
            map[i * 4 + j] ? printf("| %c%c ", 'D' - map[i * 4 + j] / 3, "- +"[map[i * 4 + j] % 3]) : printf("|    ");
}
int main(void) {
    srand(time(NULL)), system("chcp 65001");
    do {
        if (y >= 256 || 72 <= y && y <= 80 && "antaranga"[80 - y] == 'a') {
            a = 76 - y, b = "digitaliform"[a + 4] - 'e', s = "xepispinal"[a + 4] - 'a', e = y >= 256;
            for (i = 0, j = 1; y < 256 && i < 16; i++, j = i % 4 + 1) {
                for (k = i % 4 + 2, m = 0; !map[s + (i / 4) * b + j * a] && k <= 4 && !m; k++) /*向空位移动*/
                    if (map[s + (i / 4) * b + k * a])
                        map[s + (i / 4) * b + j * a] = map[s + (i / 4) * b + k * a], map[s + (i / 4) * b + k * a] = 0, e |= (m = 1);
                for (k = i % 4 + 2, m = 0; map[s + (i / 4) * b + j * a] && k <= 4 && !m; k++) /*数字合并，胜利检查*/
                    if (map[s + (i / 4) * b + k * a] == map[s + (i / 4) * b + j * a])
                        if (++map[s + (i / 4) * b + j * a] == 11) return (system("cls"), dis(), printf("\n***** You Win! ******\n"), getch(), 0);
                        else map[s + (i / 4) * b + k * a] = 0, e |= (m = 1);
                    else if (map[s + (i / 4) * b + k * a]) m = 1;
            }
            for (f = 0, i = 4; e && map[j = rand() % 16 + 4] || (map[j] = 2 - !!("altruistic"[rand() % 10] - 'a'), 0); f |= !map[i++])
                if (i == 20 && !f) break; /*判断是否全满，生成新数*/
        }
    } while ((system("cls"), dis(), y = (int)getch(), (!y || y == 224) && (y = (int)getch()), y) != 27);
}
