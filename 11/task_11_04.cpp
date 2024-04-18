#include <iostream>
#include <string>
#include <math.h>

#define FIELD_SIDE 3
#define ALLOWED_PIECE_SYM "OX."

using namespace std;

enum pieces
{
    O,
    X,
    ALL_PIECES
};

bool is_allowed_sym(const char check_char, const char *allowed_sym) {
    for (int i = 0; allowed_sym[i] != '\0'; i++) {
        if (check_char == allowed_sym[i])
            return true;
    }

    return false;
}

bool sanity_check(const string *game_fld, const uint32_t field_side,
                  const char *sym_piece, const uint32_t win_piece) {
    uint32_t o_sym_num = 0;
    uint32_t x_sym_num = 0;
    uint32_t all_sym_num = 0;

    for (size_t row_idx = 0; row_idx < field_side; row_idx++){
        if (game_fld[row_idx].length() > field_side)
            return false;

        for (char col_val : game_fld[row_idx]) {
            if (!is_allowed_sym(col_val, ALLOWED_PIECE_SYM)) {
                return false;
            } else {
                all_sym_num++;

                if (col_val == sym_piece[O])
                    o_sym_num++;
                else if (col_val == sym_piece[X])
                    x_sym_num++;
            }
        }
    }

    if (all_sym_num > pow(field_side, 2))
        return false;

    if (o_sym_num > x_sym_num)
        return false;

    if (o_sym_num == x_sym_num && win_piece != ALL_PIECES)
        return false;

    if (o_sym_num < x_sym_num && win_piece == O)
        return false;

    return true;
}

uint32_t victory_check(const string *game_fld, const uint32_t field_side,
                       const char *sym_piece) {
    uint32_t user1 = 0;
    uint32_t user2 = 0;

    // Horizontal check
    for (size_t row_idx = 0; row_idx < field_side; row_idx++){
        for (char col_val : game_fld[row_idx]) {
            if (col_val == sym_piece[O])
                user1++;
            else if (col_val == sym_piece[X])
                user2++;
        }

        if (user1 == field_side) {
            return O;
        } else if (user2 == field_side){
            return X;
        } else {
            user1 = 0;
            user2 = 0;
        }
    }

    //Vertical check
    for (size_t col_idx = 0; col_idx < field_side; col_idx++) {
        for (size_t row_idx = 0; row_idx < field_side; row_idx++) {
            if (game_fld[row_idx][col_idx] == sym_piece[O])
                user1++;
            else if (game_fld[row_idx][col_idx] == sym_piece[X])
                user2++;
        }

        if (user1 == field_side) {
            return O;
        } else if (user2 == field_side){
            return X;
        } else {
            user1 = 0;
            user2 = 0;
        }
    }

    //First diagonal check
    for (size_t idx = 0; idx < field_side; idx++) {
        if (game_fld[idx][idx] == sym_piece[O])
                user1++;
        else if (game_fld[idx][idx] == sym_piece[X])
                user2++;
    }

    if (user1 == field_side) {
        return O;
    } else if (user2 == field_side){
        return X;
    } else {
        user1 = 0;
        user2 = 0;
    }

    //Second diagonal check
    for (size_t idx = 0; idx < field_side; idx++) {
        if (game_fld[idx][(field_side - 1) - idx] == sym_piece[O])
                user1++;
        else if (game_fld[idx][(field_side - 1) - idx] == sym_piece[X])
                user2++;
    }

    if (user1 == field_side) {
        return O;
    } else if (user2 == field_side){
        return X;
    } else {
        user1 = 0;
        user2 = 0;
    }

    return ALL_PIECES;
}

int main(int argc, char *argv[]) {
    const char sym_piece[ALL_PIECES] = {'O', 'X'};
    const string gamers[] = {"Petya", "Vanya", "Nobody"};
    uint32_t win_piece;
    string game_fld[FIELD_SIDE];

    cout << "Fill in the field line by line." << endl;

    for (size_t i = 0; i < FIELD_SIDE; i++) {
        string in_row;

        cout << "Fill in " << i + 1 << " line of the field: ";
        getline(cin, in_row);

        if (in_row.length() > FIELD_SIDE) {
            cout << "Error: The line is too long." << endl;

            return 1;
        }

        for (char ch : in_row) {
            if (!is_allowed_sym(static_cast<char>(toupper(ch)),
                                ALLOWED_PIECE_SYM)) {
                cout << "Error: The string contains unresolved characters."
                    << endl;

                return 1;
            }

            game_fld[i].push_back(static_cast<char>(toupper(ch)));
        }
    }

    win_piece = victory_check(game_fld, FIELD_SIDE, sym_piece);

    if (sanity_check(game_fld, FIELD_SIDE, sym_piece, win_piece)) {
        cout << gamers[win_piece];

        if (win_piece != ALL_PIECES)
            cout << " won" << endl;
        else
            cout << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}