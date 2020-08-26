#include <print_helpers.hpp>
#include <cstdio>


void print_warning(const char *__restrict __fmt, void*...parameters) {
    fprintf(stderr, __fmt, parameters);
}

void print_error(const char *__restrict __fmt, void*...parameters) {
    fprintf(stderr, __fmt, parameters);
}

void print_log(const char *__restrict __fmt, void*...parameters) {
    fprintf(stdout, __fmt, parameters);
}
