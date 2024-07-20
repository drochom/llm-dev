#include <stdio.h>

int main(void)
{
    int c;
    int result;

    printf("Enter a character (Ctrl+D or Ctrl+Z for EOF):\n");

    c = getchar();
    result = (c != EOF);

    printf("The expression 'getchar() != EOF' evaluated to: %d\n", result);

    if (result == 0 || result == 1) {
        printf("Verified: The expression evaluates to either 0 or 1.\n");
    } else {
        printf("Unexpected result: The expression did not evaluate to 0 or 1.\n");
    }

    return 0;
}
