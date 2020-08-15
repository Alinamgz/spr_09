#include "header.h"

int mx_atoi(const char *str) {
    int result = 0;
    int rank = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!mx_isdigit(str[i]) && str[i] != '-') {
            break;
        }

        if (mx_isdigit(str[i])) {
            if (mx_isspace(str[i - rank - 1]) || str[i - rank - 1] == '-') {
                result = result * 10 + (str[i] - 48);
                rank++;

                if (mx_isspace(str[i + 1])) {
                    if (str[i - rank] == '-') result *= -1;
                    break;
                }
            }
        }
    }
    return result;
}
