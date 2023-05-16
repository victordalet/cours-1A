#include <stdio.h>
#include <malloc.h>

char        *ft_strdup(char *src) {
    int size_of_src = 0;
    char * new_str;
    while (src[size_of_src] != "\0") {
        size_of_src++;
    }
    new_str = malloc(size_of_src * sizeof(char));
    for (int i = 0 ; i < size_of_src ; i++) {
        new_str[i] = src[0];
    }
    return new_str;

}

int main() {
    const char* s1= "Hello World";
    char* new = ft_strdup(s1);

    fprintf("%s\n", new);

    free (new);
    return 0;
}