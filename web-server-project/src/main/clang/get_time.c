#include <time.h>
#include <stdio.h>
#include <string.h>
#include "../head/get_time.h"

char *get_time_str(char *time_buf) {
    time_t now_soc;
    struct tm *time_now;

    if (time(&now_soc) == -1) {
        perror("time () in get_time .c");
        return NULL;
    }

    time_now = gmtime(&now_soc);
    if (time_now == NULL) {
        perror(" localtime in get_time .c ");
        return NULL;
    }

    char *str_ptr = NULL;
    str_ptr = asctime(time_now);

    if (str_ptr == NULL) {
        perror("asctime in get_time .c");
        return NULL;
    }

    strcat(time_buf, str_ptr);
    return time_buf;
}
