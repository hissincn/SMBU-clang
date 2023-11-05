#include <stdio.h>

int main() {
    int m, i, j;

    for (m = 31; ; m++) {
        int m_squared = m * m;

        // 判断车号是否是一个整数的平方
        if (m_squared / 1000 == m_squared % 1000 / 100 && m_squared % 100 / 10 == m_squared % 10) {
            i = m_squared / 1100;
            j = m_squared % 1100 / 11;

            if (i >= 10 || j >= 10 || i == j) {
                continue;
            }

            printf("肇事车辆号牌是%d%d%d%d\n", i, i, j, j);
            break;
        }
    }

    return 0;
}
