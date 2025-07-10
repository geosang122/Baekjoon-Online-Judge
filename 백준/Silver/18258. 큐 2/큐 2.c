#include <stdio.h>
#include <string.h>

int dat[2000005];
int head, tail;
char buffer[10000000]; // 출력 버퍼
int buffer_pos = 0;

void push(int x) {
    dat[tail++] = x;
}

int pop() {
    return tail == head ? -1 : dat[head++];
}

void append_to_buffer(int val) {
    char temp[20];
    sprintf(temp, "%d\n", val);
    for (int i = 0; temp[i]; i++) {
        buffer[buffer_pos++] = temp[i];
    }
}

int main() {
    int n, x;
    char cmd[10];
    scanf("%d", &n);

    while (n--) {
        scanf("%s", cmd);
        if (cmd[1] == 'u') { // push
            scanf("%d", &x);
            push(x);
        } else if (cmd[1] == 'o') { // pop
            append_to_buffer(pop());
        } else if (cmd[1] == 'i') { // size
            append_to_buffer(tail - head);
        } else if (cmd[1] == 'm') { // empty
            append_to_buffer(tail == head ? 1 : 0);
        } else if (cmd[1] == 'r') { // front
            append_to_buffer(tail == head ? -1 : dat[head]);
        } else { // back
            append_to_buffer(tail == head ? -1 : dat[tail - 1]);
        }
    }
    buffer[buffer_pos] = '\0';
    printf("%s", buffer);
    return 0;
}