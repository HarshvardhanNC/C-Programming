// FUCK fgets use %s puts GOOD
#include <stdio.h>
int main()
{
    char str1[20];
    printf("ENTER YOUR STRING\n");
    fgets(str1, sizeof(str1), stdin); // Reads input, including spaces, until a newline or EOF
    puts(str1);             // Automatically adds a newline at the end

    char str[20];
    printf("ENTER YOUR STRING\n");
    scanf("%s", str); // Reads input until a space or newline is encountered
    printf("%s\n", str);
    return 0;
}
