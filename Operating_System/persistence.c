#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    int fd = open("/tmp/file", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU); // S_IRWXU: user에게 read, write, execute 권한을 줌
    assert(fd > -1); // fd가 -1보다 크면 정상적으로 open된 것 => int자료형 이기 때문에 overflow에러가 나오면 음수가 나옴 => unsigned int는 무조건 양수
    int rc = write(fd, "hello world\n", 13);
    assert(rc == 13);
    close(fd);
    return 0;
}