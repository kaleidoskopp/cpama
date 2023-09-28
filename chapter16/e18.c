#include <stdio.h>

typedef enum {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
} Piece;

typedef enum {
    BLACK,
    WHITE
} Color;

typedef struct{
    Piece piece;
    Color color;
} Square;

Square board[8][8] = {
    {{ROOK,  BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING,  BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK,  BLACK}},
    {{PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}, {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE}, {PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE}},
    {{ROOK,  WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN,  WHITE}, {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK,  WHITE}},
};

int main(void)
{
    return 0;
}