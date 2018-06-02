#include <cstdio>

#define BUF_SIZE 0x1000

char buf[BUF_SIZE];

int main(int argc, char *argv[])
{
  fgets(buf, sizeof(buf), stdin);
  printf("Hello, %s!", buf);
  return 0;
}
