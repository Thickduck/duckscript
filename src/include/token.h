#ifndef LOKEN_H
#define TOKEN_H

typedef struct TOKEN_STRUC {
    enum {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_STRING,
        TOKEN_SEMI,
        TOKEN_LBRACK,
        TOKEN_RBRACK,
    } type;
    char* value;
} token_T;

token_T* init_token(int type, char* value);