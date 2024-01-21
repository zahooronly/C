#include <stdio.h>
int main(){
    // FILE *fp;
    // fp = fopen("a.txt", "w");
    // fprintf(fp, "Hello, world\n");
    // fclose(fp);
    // // open file and read data from it.
    // fp = fopen("a.txt", "r");
    // char buf[100];
    // fgets(buf, 100, fp);
    // printf("%s", buf);
    // fclose(fp);
    // filing using file descriptor and read data from it.
    int fd;
    fd = open("b.txt", 'O_RDWR' | 'O_CREAT', 0644);
    write(fd, "Hello, world\n", 14);
    close(fd);
    fd = open("b.txt", 'O_RDWR' | 'O_CREAT', 0644);
    char buf[100];
    read(fd, buf, 100);
    printf("%s", buf);
    close(fd);

    return 0;
}