#include <stdio.h>
#include "include/lexer.h"

int main()
{
    lexer_T *lexer = init_lexer(
        "var name = \"thickduckplayz\";\n"
        "print(name)");
    token_T *token = (void *)0;

    while ((token = lexer_get_next_token(lexer)) != (void *)0)
    {
        printf("TOKEN(%d, %s)\n", token->type, token->value);
    }

    return 0;
}