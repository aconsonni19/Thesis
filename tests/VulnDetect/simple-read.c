#include <unistd.h>

int main(int argc, char** argv) {
    char buffer[256];
    read(STDIN_FILENO, buffer, 200 );
    return 0;
}
