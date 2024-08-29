/*-------------------------------------------------------------------------------
 * This file is the Declaration of each class, its constituents, and functions.
 * The include files are merely for establishing the types.
 *-----------------------------------------------------------------------------*/

/*--------------------------
 * If-guards and libraries.
 *-------------------------*/
#ifndef MACHINERY_H
#define MACHINERY_H

// Add any needed Qt libraries here.

// Add any needed C++ libraries here.
#include <tuple>


/*-----------------------------------
 *      Class Declarations
 *----------------------------------*/

class Rows
{
    // Private data: row values
    int row1[9] = {0};
    int row2[9] = {0};
    int row3[9] = {0};
    int row4[9] = {0};
    int row5[9] = {0};
    int row6[9] = {0};
    int row7[9] = {0};
    int row8[9] = {0};
    int row9[9] = {0};

    // Public functions
public:

    // Set the value of a row
    void setrows(int row_num,  int* row_with_num);

    // Get a row
    int* getrows(int row_num);

    // Print the rows to a message box
    void printrows(int* row_to_print);

    // Get the entire matrix
    int** getmatrix();

    // Check if a row has a number
    bool has_number(int number, int* row_with_number);
};

class Cols
{
    // Private data: column values
    int col1[9] = {0};
    int col2[9] = {0};
    int col3[9] = {0};
    int col4[9] = {0};
    int col5[9] = {0};
    int col6[9] = {0};
    int col7[9] = {0};
    int col8[9] = {0};
    int col9[9] = {0};

    // Public functions
public:

    // Set the value of a col
    void setcols(int col_num, int* col_with_num);

    // Get a col
    int * getcols(int col_num);

    // Print the cols to a message box
    void printcols(int* col_to_print);

    // Get the entire matrix
    int** getmatrix();

    // Check if a col has a number
    bool has_number(int number, int* col_with_number);
};

class Boxs
{
    // Private data: box values
    int box1[9] = {0};
    int box2[9] = {0};
    int box3[9] = {0};
    int box4[9] = {0};
    int box5[9] = {0};
    int box6[9] = {0};
    int box7[9] = {0};
    int box8[9] = {0};
    int box9[9] = {0};

    // Public functions
public:

    // Set the value of a box
    void setboxs(int box_num, int* box_with_num);

    // Get a box
    int* getboxs(int box_num);

    // Print the box to a message box
    void printboxs(int* box_to_print);

    // Get the entire matrix
    int** getmatrix();

    // check if a box has a number
    bool has_number(int number, int* box_with_number);
};

/*-------------------------------------------------------------------------------------------------------------------------
 * Conversion Functions
 *------------------------------------------------------------------------------------------------------------------------*/

Cols* rows_to_cols(Cols* pcol, int** row_matrix);
Boxs* rows_to_boxs(Boxs* pbox, int** row_matrix);
Rows* cols_to_rows(Rows* prow, int** col_matrix);
Boxs* cols_to_boxs(Boxs* pbox, int** col_matrix);
Rows* boxs_to_rows(Rows* prow, int** box_matrix);
Cols* boxs_to_cols(Cols* pcol, int** box_matrix);

/*-------------------------------------------------------------------------------------------------------------------------
 * Utility Functions
 *------------------------------------------------------------------------------------------------------------------------*/

int sum_values(int* vect);
bool has_zeros(int* vect);
int count_zeros(int* vect);
int* where_zeros(int* vect);
int* find_important(Rows fakerow, int skiprow, int skipcol);

/*--------------------------------------------------------------------------------------------------------------------------
 * Solvers
 *-------------------------------------------------------------------------------------------------------------------------*/

std::tuple<bool, int> basic_value_insert(int* vect);
std::tuple<bool, int> basic_value_checking(Rows fakerow, int row_num, Cols fakecol, int col_num, Boxs fakebox, int box_num);
std::tuple<bool, int**> basic_value_solving(int** mat, int** mat2, int** mat3);
std::tuple<bool, Rows> intermediate_row_value_checking(Rows fakerow, int row_num, Cols fakecol, Boxs fakebox);
std::tuple<bool, Cols> intermediate_col_value_checking(Rows fakerow, Cols fakecol, int col_num, Boxs fakebox);
std::tuple<bool, Boxs> intermediate_box_value_checking(Rows fakerow, Cols fakecol, Boxs fakebox, int box_num);
std::tuple<bool, Boxs> intermediate_inference_checking(Rows fakerow, Cols fakecol, Boxs fakebox, int box_num);
std::tuple<bool, int**> intermediate_value_solving(int** mat, int** mat2, int** mat3);
std::tuple<bool, int, int, int> advanced_overlap_row_checking(Rows fakerow, std::tuple<int, int, int> search_num);
std::tuple<bool, int, int, int> advanced_overlap_col_checking(Cols fakecol, std::tuple<int, int, int> search_num);
std::tuple<bool, Rows> advanced_row_value_checking_AlternatePairs(Rows fakerow, int row_num, Cols fakecol, Boxs fakebox);
std::tuple<bool, Cols> advanced_col_value_checking_AlternatePairs(Rows fakerow, Cols fakecol, int col_num, Boxs fakebox);
std::tuple<bool, int**> advanced_value_solving(int** mat, int** mat2, int** mat3);

/*-------------------------------------------------------------------------------------------------------------------------
 * Cheat Mode
 *------------------------------------------------------------------------------------------------------------------------*/

bool* possibilities(Rows *fakerow, int row_num, Cols *fakecol, int col_num, Boxs *fakebox);
bool has_duplicates(int* vect);
bool rule_enforcer(Rows try_row, Cols try_col, Boxs try_box);


#endif // MACHINERY_H
