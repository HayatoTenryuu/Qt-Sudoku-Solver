/*------------------------------------------------------------------
 * This file is the Definition of each class and function.
 * The include files establish the types, provide definitions,
 *      and are used functionally as well.
 *-----------------------------------------------------------------*/

// Add any needed Qt libraries here.
#include <QMessageBox>

// Add any needed C++ files here.
#include "machinery.h"


/*------------------
 * Row Definitions
 *-----------------*/

// Set the value of a row
void Rows::setrows(int row_num,  int* row_with_num)
    {
        int i = 0;
        switch (row_num+1)
        {
            case 1:
            {
                while (i < 9)
                {
                    row1[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 2:
            {
                while (i < 9)
                {
                    row2[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 3:
            {
                while (i < 9)
                {
                    row3[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 4:
            {
                while (i < 9)
                {
                    row4[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 5:
            {
                while (i < 9)
                {
                    row5[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 6:
            {
                while (i < 9)
                {
                    row6[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 7:
            {
                while (i < 9)
                {
                    row7[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 8:
            {
                while (i < 9)
                {
                    row8[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            case 9:
            {
                while (i < 9)
                {
                    row9[i] = row_with_num[i];
                    i += 1;
                }
                break;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Something went wrong in Rows.\n");
                msg.exec();
                break;
            }
        }
    }

// Get a row
int* Rows::getrows(int row_num)
    {
        switch (row_num+1)
        {
            case 1:
            {
                return row1;
            }
            case 2:
            {
                return row2;
            }
            case 3:
            {
                return row3;
            }
            case 4:
            {
                return row4;
            }
            case 5:
            {
                return row5;
            }
            case 6:
            {
                return row6;
            }
            case 7:
            {
                return row7;
            }
            case 8:
            {
                return row8;
            }
            case 9:
            {
                return row9;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("This is not good... Rows.\n");
                msg.exec();
                return 0;
            }
        }
    }

// Print the rows to a message box
void Rows::printrows(int* row_to_print)
    {
        QMessageBox msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setText(QString::number(row_to_print[0]) + "\n" +
                    QString::number(row_to_print[1]) + "\n" +
                    QString::number(row_to_print[2]) + "\n" +
                    QString::number(row_to_print[3]) + "\n" +
                    QString::number(row_to_print[4]) + "\n" +
                    QString::number(row_to_print[5]) + "\n" +
                    QString::number(row_to_print[6]) + "\n" +
                    QString::number(row_to_print[7]) + "\n" +
                    QString::number(row_to_print[8]) + "\n" +
                    "\nThe end!\n");
        msg.exec();
    }

// Get the entire matrix
int** Rows:: getmatrix()
    {
        int** matrix = new int*[9];                 // Establish the outer array

        for (int i = 0; i<9; i++)
        {
            matrix[i] = new int[9];                 // Establish the inner arrays

            for (int j = 0; j<9; j++)
            {
                switch (i)                          // Set the array values
                {
                    case 0:
                    {
                        matrix[i][j] = row1[j];
                        break;
                    }
                    case 1:
                    {
                        matrix[i][j] = row2[j];
                        break;
                    }
                    case 2:
                    {
                        matrix[i][j] = row3[j];
                        break;
                    }
                    case 3:
                    {
                        matrix[i][j] = row4[j];
                        break;
                    }
                    case 4:
                    {
                        matrix[i][j] = row5[j];
                        break;
                    }
                    case 5:
                    {
                        matrix[i][j] = row6[j];
                        break;
                    }
                    case 6:
                    {
                        matrix[i][j] = row7[j];
                        break;
                    }
                    case 7:
                    {
                        matrix[i][j] = row8[j];
                        break;
                    }
                    case 8:
                    {
                        matrix[i][j] = row9[j];
                        break;
                    }
                    default:
                    {
                        QMessageBox msg;
                        msg.setStandardButtons(QMessageBox::Ok);
                        msg.setText("Help in rows!");
                        msg.exec();
                        break;
                    }
                }
            }
        }

        return matrix;
    }

// Check if a row has a number
bool Rows::has_number(int number, int* row_with_number)
    {
        for (int i = 0; i < 9; i++)
        {
            if (number == row_with_number[i])
            {
                return true;
            }
            else
            {
                continue;
            }
        }

        return false;
    }


/*---------------------
 * Column Definitions
 *--------------------*/

// Set the value of a col
void Cols::setcols(int col_num, int* col_with_num)
    {
        int i = 0;
        switch (col_num+1)
        {
            case 1:
            {
                while (i < 9)
                {
                    col1[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 2:
            {
                while (i < 9)
                {
                    col2[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 3:
            {
                while (i < 9)
                {
                    col3[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 4:
            {
                while (i < 9)
                {
                    col4[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 5:
            {
                while (i < 9)
                {
                    col5[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 6:
            {
                while (i < 9)
                {
                    col6[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 7:
            {
                while (i < 9)
                {
                    col7[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 8:
            {
                while (i < 9)
                {
                    col8[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            case 9:
            {
                while (i < 9)
                {
                    col9[i] = col_with_num[i];
                    i += 1;
                }
                break;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Something went wrong in Cols.\n");
                msg.exec();
                break;
            }
        }
    }

// Get a col
int* Cols::getcols(int col_num)
    {
        switch (col_num+1)
        {
            case 1:
            {
                return col1;
            }
            case 2:
            {
                return col2;
            }
            case 3:
            {
                return col3;
            }
            case 4:
            {
                return col4;
            }
            case 5:
            {
                return col5;
            }
            case 6:
            {
                return col6;
            }
            case 7:
            {
                return col7;
            }
            case 8:
            {
                return col8;
            }
            case 9:
            {
                return col9;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("This is not good... Cols.\n");
                msg.exec();
                return 0;
            }
        }
    }

// Print the cols to a message box
void Cols::printcols(int* col_to_print)
    {
        QMessageBox msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setText(QString::number(col_to_print[0]) + "\n" +
                    QString::number(col_to_print[1]) + "\n" +
                    QString::number(col_to_print[2]) + "\n" +
                    QString::number(col_to_print[3]) + "\n" +
                    QString::number(col_to_print[4]) + "\n" +
                    QString::number(col_to_print[5]) + "\n" +
                    QString::number(col_to_print[6]) + "\n" +
                    QString::number(col_to_print[7]) + "\n" +
                    QString::number(col_to_print[8]) + "\n" +
                    "\nThe end!\n");
        msg.exec();
    }

// Get the entire matrix
int** Cols::getmatrix()
    {
        int** matrix = new int*[9];                 // Establish the outer array

        for (int i = 0; i<9; i++)
        {
            matrix[i] = new int[9];                 // Establish the inner arrays

            for (int j = 0; j<9; j++)
            {
                switch (i)                          // Set the array values
                {
                    case 0:
                    {
                        matrix[i][j] = col1[j];
                        break;
                    }
                    case 1:
                    {
                        matrix[i][j] = col2[j];
                        break;
                    }
                    case 2:
                    {
                        matrix[i][j] = col3[j];
                        break;
                    }
                    case 3:
                    {
                        matrix[i][j] = col4[j];
                        break;
                    }
                    case 4:
                    {
                        matrix[i][j] = col5[j];
                        break;
                    }
                    case 5:
                    {
                        matrix[i][j] = col6[j];
                        break;
                    }
                    case 6:
                    {
                        matrix[i][j] = col7[j];
                        break;
                    }
                    case 7:
                    {
                        matrix[i][j] = col8[j];
                        break;
                    }
                    case 8:
                    {
                        matrix[i][j] = col9[j];
                        break;
                    }
                    default:
                    {
                        QMessageBox msg;
                        msg.setStandardButtons(QMessageBox::Ok);
                        msg.setText("Help in cols!");
                        msg.exec();
                    }
                }
            }
        }

        return matrix;
    }

// Check if a col has a number
bool Cols::has_number(int number, int* col_with_number)
    {
        for (int i = 0; i < 9; i++)
        {
            if (number == col_with_number[i])
            {
                return true;
            }
            else
            {
                continue;
            }
        }

        return false;
    }


/*------------------
 * Box Definitions
 *-----------------*/

// Set the value of a box
void Boxs::setboxs(int box_num, int* box_with_num)
    {
        int i = 0;
        switch (box_num+1)
        {
            case 1:
            {
                while (i < 9)
                {
                    box1[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 2:
            {
                while (i < 9)
                {
                    box2[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 3:
            {
                while (i < 9)
                {
                    box3[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 4:
            {
                while (i < 9)
                {
                    box4[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 5:
            {
                while (i < 9)
                {
                    box5[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 6:
            {
                while (i < 9)
                {
                    box6[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 7:
            {
                while (i < 9)
                {
                    box7[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 8:
            {
                while (i < 9)
                {
                    box8[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            case 9:
            {
                while (i < 9)
                {
                    box9[i] = box_with_num[i];
                    i += 1;
                }
                break;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Something went wrong in Boxes.\n");
                msg.exec();
                break;
            }
        }
    }

// Get a box
int* Boxs::getboxs(int box_num)
    {
        switch (box_num+1)
        {
            case 1:
            {
                return box1;
            }
            case 2:
            {
                return box2;
            }
            case 3:
            {
                return box3;
            }
            case 4:
            {
                return box4;
            }
            case 5:
            {
                return box5;
            }
            case 6:
            {
                return box6;
            }
            case 7:
            {
                return box7;
            }
            case 8:
            {
                return box8;
            }
            case 9:
            {
                return box9;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("This is not good...BOXS\n");
                msg.exec();
                return 0;
            }
        }
    }

// Print the box to a message box
void Boxs::printboxs(int* box_to_print)
    {
        QMessageBox msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setText( QString::number(box_to_print[0]) + "\n" +
                       QString::number(box_to_print[1]) + "\n" +
                       QString::number(box_to_print[2]) + "\n" +
                       QString::number(box_to_print[3]) + "\n" +
                       QString::number(box_to_print[4]) + "\n" +
                       QString::number(box_to_print[5]) + "\n" +
                       QString::number(box_to_print[6]) + "\n" +
                       QString::number(box_to_print[7]) + "\n" +
                       QString::number(box_to_print[8]) + "\n" +
                       "\nThe end!\n");
        msg.exec();
    }

// Get the entire matrix
int** Boxs::getmatrix()
    {
        int** matrix = new int*[9];                 // Establish the outer array

        for (int i = 0; i<9; i++)
        {
            matrix[i] = new int[9];                 // Establish the inner arrays

            for (int j = 0; j<9; j++)
            {
                switch (i)                          // Set the array values
                {
                    case 0:
                    {
                        matrix[i][j] = box1[j];
                        break;
                    }
                    case 1:
                    {
                        matrix[i][j] = box2[j];
                        break;
                    }
                    case 2:
                    {
                        matrix[i][j] = box3[j];
                        break;
                    }
                    case 3:
                    {
                        matrix[i][j] = box4[j];
                        break;
                    }
                    case 4:
                    {
                        matrix[i][j] = box5[j];
                        break;
                    }
                    case 5:
                    {
                        matrix[i][j] = box6[j];
                        break;
                    }
                    case 6:
                    {
                        matrix[i][j] = box7[j];
                        break;
                    }
                    case 7:
                    {
                        matrix[i][j] = box8[j];
                        break;
                    }
                    case 8:
                    {
                        matrix[i][j] = box9[j];
                        break;
                    }
                    default:
                    {
                        QMessageBox msg;
                        msg.setStandardButtons(QMessageBox::Ok);
                        msg.setText("Help in rows!");
                        msg.exec();
                    }
                }
            }
        }

        return matrix;
    }

// check if a box has a number
bool Boxs::has_number(int number, int* box_with_number)
    {
        for (int i = 0; i < 9; i++)
        {
            if (number == box_with_number[i])
            {
                return true;
            }
            else
            {
                continue;
            }
        }

        return false;
    }


/*------------------------------------------------------------------------------------------------------------------------*/
/* Conversion Functions */
/*------------------------------------------------------------------------------------------------------------------------*/

Cols* rows_to_cols(Cols* pcol, int** row_matrix)
{
    int newcol1[] = { row_matrix[0][0], row_matrix[1][0], row_matrix[2][0], row_matrix[3][0], row_matrix[4][0], row_matrix[5][0], row_matrix[6][0], row_matrix[7][0], row_matrix[8][0] };
    int newcol2[] = { row_matrix[0][1], row_matrix[1][1], row_matrix[2][1], row_matrix[3][1], row_matrix[4][1], row_matrix[5][1], row_matrix[6][1], row_matrix[7][1], row_matrix[8][1] };
    int newcol3[] = { row_matrix[0][2], row_matrix[1][2], row_matrix[2][2], row_matrix[3][2], row_matrix[4][2], row_matrix[5][2], row_matrix[6][2], row_matrix[7][2], row_matrix[8][2] };
    int newcol4[] = { row_matrix[0][3], row_matrix[1][3], row_matrix[2][3], row_matrix[3][3], row_matrix[4][3], row_matrix[5][3], row_matrix[6][3], row_matrix[7][3], row_matrix[8][3] };
    int newcol5[] = { row_matrix[0][4], row_matrix[1][4], row_matrix[2][4], row_matrix[3][4], row_matrix[4][4], row_matrix[5][4], row_matrix[6][4], row_matrix[7][4], row_matrix[8][4] };
    int newcol6[] = { row_matrix[0][5], row_matrix[1][5], row_matrix[2][5], row_matrix[3][5], row_matrix[4][5], row_matrix[5][5], row_matrix[6][5], row_matrix[7][5], row_matrix[8][5] };
    int newcol7[] = { row_matrix[0][6], row_matrix[1][6], row_matrix[2][6], row_matrix[3][6], row_matrix[4][6], row_matrix[5][6], row_matrix[6][6], row_matrix[7][6], row_matrix[8][6] };
    int newcol8[] = { row_matrix[0][7], row_matrix[1][7], row_matrix[2][7], row_matrix[3][7], row_matrix[4][7], row_matrix[5][7], row_matrix[6][7], row_matrix[7][7], row_matrix[8][7] };
    int newcol9[] = { row_matrix[0][8], row_matrix[1][8], row_matrix[2][8], row_matrix[3][8], row_matrix[4][8], row_matrix[5][8], row_matrix[6][8], row_matrix[7][8], row_matrix[8][8] };

    pcol->setcols(0, newcol1);
    pcol->setcols(1, newcol2);
    pcol->setcols(2, newcol3);
    pcol->setcols(3, newcol4);
    pcol->setcols(4, newcol5);
    pcol->setcols(5, newcol6);
    pcol->setcols(6, newcol7);
    pcol->setcols(7, newcol8);
    pcol->setcols(8, newcol9);

    return pcol;
}

Boxs* rows_to_boxs(Boxs* pbox, int** row_matrix)
{
    int newbox1[] = { row_matrix[0][0], row_matrix[0][1], row_matrix[0][2], row_matrix[1][0], row_matrix[1][1], row_matrix[1][2], row_matrix[2][0], row_matrix[2][1], row_matrix[2][2] };
    int newbox2[] = { row_matrix[0][3], row_matrix[0][4], row_matrix[0][5], row_matrix[1][3], row_matrix[1][4], row_matrix[1][5], row_matrix[2][3], row_matrix[2][4], row_matrix[2][5] };
    int newbox3[] = { row_matrix[0][6], row_matrix[0][7], row_matrix[0][8], row_matrix[1][6], row_matrix[1][7], row_matrix[1][8], row_matrix[2][6], row_matrix[2][7], row_matrix[2][8] };
    int newbox4[] = { row_matrix[3][0], row_matrix[3][1], row_matrix[3][2], row_matrix[4][0], row_matrix[4][1], row_matrix[4][2], row_matrix[5][0], row_matrix[5][1], row_matrix[5][2] };
    int newbox5[] = { row_matrix[3][3], row_matrix[3][4], row_matrix[3][5], row_matrix[4][3], row_matrix[4][4], row_matrix[4][5], row_matrix[5][3], row_matrix[5][4], row_matrix[5][5] };
    int newbox6[] = { row_matrix[3][6], row_matrix[3][7], row_matrix[3][8], row_matrix[4][6], row_matrix[4][7], row_matrix[4][8], row_matrix[5][6], row_matrix[5][7], row_matrix[5][8] };
    int newbox7[] = { row_matrix[6][0], row_matrix[6][1], row_matrix[6][2], row_matrix[7][0], row_matrix[7][1], row_matrix[7][2], row_matrix[8][0], row_matrix[8][1], row_matrix[8][2] };
    int newbox8[] = { row_matrix[6][3], row_matrix[6][4], row_matrix[6][5], row_matrix[7][3], row_matrix[7][4], row_matrix[7][5], row_matrix[8][3], row_matrix[8][4], row_matrix[8][5] };
    int newbox9[] = { row_matrix[6][6], row_matrix[6][7], row_matrix[6][8], row_matrix[7][6], row_matrix[7][7], row_matrix[7][8], row_matrix[8][6], row_matrix[8][7], row_matrix[8][8] };

    pbox->setboxs(0, newbox1);
    pbox->setboxs(1, newbox2);
    pbox->setboxs(2, newbox3);
    pbox->setboxs(3, newbox4);
    pbox->setboxs(4, newbox5);
    pbox->setboxs(5, newbox6);
    pbox->setboxs(6, newbox7);
    pbox->setboxs(7, newbox8);
    pbox->setboxs(8, newbox9);

    return pbox;
}

Rows* cols_to_rows(Rows* prow, int** col_matrix)
{
    int newrow1[] = { col_matrix[0][0], col_matrix[1][0], col_matrix[2][0], col_matrix[3][0], col_matrix[4][0], col_matrix[5][0], col_matrix[6][0], col_matrix[7][0], col_matrix[8][0] };
    int newrow2[] = { col_matrix[0][1], col_matrix[1][1], col_matrix[2][1], col_matrix[3][1], col_matrix[4][1], col_matrix[5][1], col_matrix[6][1], col_matrix[7][1], col_matrix[8][1] };
    int newrow3[] = { col_matrix[0][2], col_matrix[1][2], col_matrix[2][2], col_matrix[3][2], col_matrix[4][2], col_matrix[5][2], col_matrix[6][2], col_matrix[7][2], col_matrix[8][2] };
    int newrow4[] = { col_matrix[0][3], col_matrix[1][3], col_matrix[2][3], col_matrix[3][3], col_matrix[4][3], col_matrix[5][3], col_matrix[6][3], col_matrix[7][3], col_matrix[8][3] };
    int newrow5[] = { col_matrix[0][4], col_matrix[1][4], col_matrix[2][4], col_matrix[3][4], col_matrix[4][4], col_matrix[5][4], col_matrix[6][4], col_matrix[7][4], col_matrix[8][4] };
    int newrow6[] = { col_matrix[0][5], col_matrix[1][5], col_matrix[2][5], col_matrix[3][5], col_matrix[4][5], col_matrix[5][5], col_matrix[6][5], col_matrix[7][5], col_matrix[8][5] };
    int newrow7[] = { col_matrix[0][6], col_matrix[1][6], col_matrix[2][6], col_matrix[3][6], col_matrix[4][6], col_matrix[5][6], col_matrix[6][6], col_matrix[7][6], col_matrix[8][6] };
    int newrow8[] = { col_matrix[0][7], col_matrix[1][7], col_matrix[2][7], col_matrix[3][7], col_matrix[4][7], col_matrix[5][7], col_matrix[6][7], col_matrix[7][7], col_matrix[8][7] };
    int newrow9[] = { col_matrix[0][8], col_matrix[1][8], col_matrix[2][8], col_matrix[3][8], col_matrix[4][8], col_matrix[5][8], col_matrix[6][8], col_matrix[7][8], col_matrix[8][8] };

    prow->setrows(0, newrow1);
    prow->setrows(1, newrow2);
    prow->setrows(2, newrow3);
    prow->setrows(3, newrow4);
    prow->setrows(4, newrow5);
    prow->setrows(5, newrow6);
    prow->setrows(6, newrow7);
    prow->setrows(7, newrow8);
    prow->setrows(8, newrow9);

    return prow;
}

Boxs* cols_to_boxs(Boxs* pbox, int** col_matrix)
{
    int newbox1[] = { col_matrix[0][0], col_matrix[1][0], col_matrix[2][0], col_matrix[0][1], col_matrix[1][1], col_matrix[2][1], col_matrix[0][2], col_matrix[1][2], col_matrix[2][2] };
    int newbox2[] = { col_matrix[3][0], col_matrix[4][0], col_matrix[5][0], col_matrix[3][1], col_matrix[4][1], col_matrix[5][1], col_matrix[3][2], col_matrix[4][2], col_matrix[5][2] };
    int newbox3[] = { col_matrix[6][0], col_matrix[7][0], col_matrix[8][0], col_matrix[6][1], col_matrix[7][1], col_matrix[8][1], col_matrix[6][2], col_matrix[7][2], col_matrix[8][2] };
    int newbox4[] = { col_matrix[0][3], col_matrix[1][3], col_matrix[2][3], col_matrix[0][4], col_matrix[1][4], col_matrix[2][4], col_matrix[0][5], col_matrix[1][5], col_matrix[2][5] };
    int newbox5[] = { col_matrix[3][3], col_matrix[4][3], col_matrix[5][3], col_matrix[3][4], col_matrix[4][4], col_matrix[5][4], col_matrix[3][5], col_matrix[4][5], col_matrix[5][5] };
    int newbox6[] = { col_matrix[6][3], col_matrix[7][3], col_matrix[8][3], col_matrix[6][4], col_matrix[7][4], col_matrix[8][4], col_matrix[6][5], col_matrix[7][5], col_matrix[8][5] };
    int newbox7[] = { col_matrix[0][6], col_matrix[1][6], col_matrix[2][6], col_matrix[0][7], col_matrix[1][7], col_matrix[2][7], col_matrix[0][8], col_matrix[1][8], col_matrix[2][8] };
    int newbox8[] = { col_matrix[3][6], col_matrix[4][6], col_matrix[5][6], col_matrix[3][7], col_matrix[4][7], col_matrix[5][7], col_matrix[3][8], col_matrix[4][8], col_matrix[5][8] };
    int newbox9[] = { col_matrix[6][6], col_matrix[7][6], col_matrix[8][6], col_matrix[6][7], col_matrix[7][7], col_matrix[8][7], col_matrix[6][8], col_matrix[7][8], col_matrix[8][8] };

    pbox->setboxs(0, newbox1);
    pbox->setboxs(1, newbox2);
    pbox->setboxs(2, newbox3);
    pbox->setboxs(3, newbox4);
    pbox->setboxs(4, newbox5);
    pbox->setboxs(5, newbox6);
    pbox->setboxs(6, newbox7);
    pbox->setboxs(7, newbox8);
    pbox->setboxs(8, newbox9);

    return pbox;
}

Rows* boxs_to_rows(Rows* prow, int** box_matrix)
{
    int newrow1[] = { box_matrix[0][0], box_matrix[0][1], box_matrix[0][2], box_matrix[1][0], box_matrix[1][1], box_matrix[1][2], box_matrix[2][0], box_matrix[2][1], box_matrix[2][2] };
    int newrow2[] = { box_matrix[0][3], box_matrix[0][4], box_matrix[0][5], box_matrix[1][3], box_matrix[1][4], box_matrix[1][5], box_matrix[2][3], box_matrix[2][4], box_matrix[2][5] };
    int newrow3[] = { box_matrix[0][6], box_matrix[0][7], box_matrix[0][8], box_matrix[1][6], box_matrix[1][7], box_matrix[1][8], box_matrix[2][6], box_matrix[2][7], box_matrix[2][8] };
    int newrow4[] = { box_matrix[3][0], box_matrix[3][1], box_matrix[3][2], box_matrix[4][0], box_matrix[4][1], box_matrix[4][2], box_matrix[5][0], box_matrix[5][1], box_matrix[5][2] };
    int newrow5[] = { box_matrix[3][3], box_matrix[3][4], box_matrix[3][5], box_matrix[4][3], box_matrix[4][4], box_matrix[4][5], box_matrix[5][3], box_matrix[5][4], box_matrix[5][5] };
    int newrow6[] = { box_matrix[3][6], box_matrix[3][7], box_matrix[3][8], box_matrix[4][6], box_matrix[4][7], box_matrix[4][8], box_matrix[5][6], box_matrix[5][7], box_matrix[5][8] };
    int newrow7[] = { box_matrix[6][0], box_matrix[6][1], box_matrix[6][2], box_matrix[7][0], box_matrix[7][1], box_matrix[7][2], box_matrix[8][0], box_matrix[8][1], box_matrix[8][2] };
    int newrow8[] = { box_matrix[6][3], box_matrix[6][4], box_matrix[6][5], box_matrix[7][3], box_matrix[7][4], box_matrix[7][5], box_matrix[8][3], box_matrix[8][4], box_matrix[8][5] };
    int newrow9[] = { box_matrix[6][6], box_matrix[6][7], box_matrix[6][8], box_matrix[7][6], box_matrix[7][7], box_matrix[7][8], box_matrix[8][6], box_matrix[8][7], box_matrix[8][8] };

    prow->setrows(0, newrow1);
    prow->setrows(1, newrow2);
    prow->setrows(2, newrow3);
    prow->setrows(3, newrow4);
    prow->setrows(4, newrow5);
    prow->setrows(5, newrow6);
    prow->setrows(6, newrow7);
    prow->setrows(7, newrow8);
    prow->setrows(8, newrow9);

    return prow;
}

Cols* boxs_to_cols(Cols* pcol, int** box_matrix)
{
    int newcol1[] = { box_matrix[0][0], box_matrix[0][3], box_matrix[0][6], box_matrix[3][0], box_matrix[3][3], box_matrix[3][6], box_matrix[6][0], box_matrix[6][3], box_matrix[6][6] };
    int newcol2[] = { box_matrix[0][1], box_matrix[0][4], box_matrix[0][7], box_matrix[3][1], box_matrix[3][4], box_matrix[3][7], box_matrix[6][1], box_matrix[6][4], box_matrix[6][7] };
    int newcol3[] = { box_matrix[0][2], box_matrix[0][5], box_matrix[0][8], box_matrix[3][2], box_matrix[3][5], box_matrix[3][8], box_matrix[6][2], box_matrix[6][5], box_matrix[6][8] };
    int newcol4[] = { box_matrix[1][0], box_matrix[1][3], box_matrix[1][6], box_matrix[4][0], box_matrix[4][3], box_matrix[4][6], box_matrix[7][0], box_matrix[7][3], box_matrix[7][6] };
    int newcol5[] = { box_matrix[1][1], box_matrix[1][4], box_matrix[1][7], box_matrix[4][1], box_matrix[4][4], box_matrix[4][7], box_matrix[7][1], box_matrix[7][4], box_matrix[7][7] };
    int newcol6[] = { box_matrix[1][2], box_matrix[1][5], box_matrix[1][8], box_matrix[4][2], box_matrix[4][5], box_matrix[4][8], box_matrix[7][2], box_matrix[7][5], box_matrix[7][8] };
    int newcol7[] = { box_matrix[2][0], box_matrix[2][3], box_matrix[2][6], box_matrix[5][0], box_matrix[5][3], box_matrix[5][6], box_matrix[8][0], box_matrix[8][3], box_matrix[8][6] };
    int newcol8[] = { box_matrix[2][1], box_matrix[2][4], box_matrix[2][7], box_matrix[5][1], box_matrix[5][4], box_matrix[5][7], box_matrix[8][1], box_matrix[8][4], box_matrix[8][7] };
    int newcol9[] = { box_matrix[2][2], box_matrix[2][5], box_matrix[2][8], box_matrix[5][2], box_matrix[5][5], box_matrix[5][8], box_matrix[8][2], box_matrix[8][5], box_matrix[8][8] };

    pcol->setcols(0, newcol1);
    pcol->setcols(1, newcol2);
    pcol->setcols(2, newcol3);
    pcol->setcols(3, newcol4);
    pcol->setcols(4, newcol5);
    pcol->setcols(5, newcol6);
    pcol->setcols(6, newcol7);
    pcol->setcols(7, newcol8);
    pcol->setcols(8, newcol9);

    return pcol;
}

/*------------------------------------------------------------------------------------------------------------------------*/
/* Utility Functions */
/*------------------------------------------------------------------------------------------------------------------------*/

int sum_values(int* vect)
{
    int summa = vect[0] + vect[1] + vect[2] + vect[3] + vect[4] + vect[5] + vect[6] + vect[7] + vect[8];
    return summa;
}

bool has_zeros(int* vect)
{
    /*
     * This checks if an array (row/box/column) has any zeros in it.
     */

    if (sum_values(vect) == 45)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int count_zeros(int* vect)
{
    /*
     * This counts how many zeros are in an array (row/box/column).
     */

    int count = 0;
    for (int a = 0; a < 9; a++)
    {
        if (vect[a] == 0)
        {
            count += 1;
        }
        else
        {
            continue;
        }
    }
    return count;
}

int* where_zeros(int* vect)
{
    /*
     * This looks for where in an array (row/box/column) the zeros are.
     */

    static int zero_loc[9] = {0};

    for (int a = 0; a < 9; a++)
    {
        if (vect[a] == 0)
        {
            zero_loc[a] = 1;
        }
        else
        {
            zero_loc[a] = 0;
        }
    }

    return zero_loc;
}

int* find_important(Rows fakerow, int skiprow, int skipcol)
{
    /*
     * This looks for any zeros, and compares them to any it has already looked at.
     * When we find a new zero, it returns an array with the new zero's row, column, and box number.
     */

    for (int i = 0; i < 9; i++)
    {
        int* row = fakerow.getrows(i);      // This variable reduces the number of function calls.

        if (!has_zeros(row))                 // First check if this row has zeros. If not, just move on.
        {
            continue;
        }
        else                                                  // If so, find the important row/column/box for analysis
        {
            int important_row = i;                            // important row number is given by the i value containing a zero.
            int important_col = 0;
            int important_box = 0;

            bool change = false;

            for (int j = 0; j < 9; j++)
            {
                if (row[j] == 0)                              // Important col number is given by the j value containing a zero.
                {
                    switch (j + 1)
                    {
                        case 1:
                        {
                            important_col = 0;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 0;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 3;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 6;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                        }
                                        break;
                                }
                            }
                            else
                            {
                                switch (i)                        // Important box number depends on i and j.
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 0;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 3;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 6;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 2:
                        {
                            important_col = 1;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 0;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 3;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 6;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 0;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 3;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 6;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 3:
                        {
                            important_col = 2;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 0;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 3;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 6;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                        }
                                        break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 0;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 3;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 6;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 4:
                        {
                            important_col = 3;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 1;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 4;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 7;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 1;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 4;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 7;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 5:
                        {
                            important_col = 4;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 1;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 4;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 7;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 1;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 4;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 7;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 6:
                        {
                            important_col = 5;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 1;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 4;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 7;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 1;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 4;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 7;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 7:
                        {
                            important_col = 6;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 2;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 5;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 8;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 2;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 5;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 8;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 8:
                        {
                            important_col = 7;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 2;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 5;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 8;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 2;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 5;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 8;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        case 9:
                        {
                            important_col = 8;
                            if (important_row <= skiprow)
                            {
                                if (important_row < skiprow)          // Skip if we are past this point
                                {
                                    break;
                                }
                                else if (important_col <= skipcol)    // Skip if we've seen this zero before
                                {
                                    break;
                                }
                                else
                                {
                                    switch (i)                        // Important box number depends on i and j.
                                    {
                                        case 0:
                                        case 1:
                                        case 2:
                                            important_box = 2;
                                            change = true;
                                            break;
                                        case 3:
                                        case 4:
                                        case 5:
                                            important_box = 5;
                                            change = true;
                                            break;
                                        case 6:
                                        case 7:
                                        case 8:
                                            important_box = 8;
                                            change = true;
                                            break;
                                        default:
                                            QMessageBox msg;
                                            msg.setStandardButtons(QMessageBox::Ok);
                                            msg.setText("Something is wrong with Linking");
                                            msg.exec();
                                            break;
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (i)
                                {
                                    case 0:
                                    case 1:
                                    case 2:
                                        important_box = 2;
                                        change = true;
                                        break;
                                    case 3:
                                    case 4:
                                    case 5:
                                        important_box = 5;
                                        change = true;
                                        break;
                                    case 6:
                                    case 7:
                                    case 8:
                                        important_box = 8;
                                        change = true;
                                        break;
                                    default:
                                        QMessageBox msg;
                                        msg.setStandardButtons(QMessageBox::Ok);
                                        msg.setText("Something is wrong with Linking");
                                        msg.exec();
                                        break;
                                }
                                break;
                            }
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("What is going on here?");
                            msg.exec();
                            break;
                        }
                    }

                    if(change)
                    {
                        static int c[3] = {important_row, important_col, important_box};
                        return c;     // Once we honed in on the zero, return the relevant numbers.
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }

    return 0;                   // If there are no zeros, return zero.
}

/*-------------------------------------------------------------------------------------------------------------------------*/
/* Solvers */
/*-------------------------------------------------------------------------------------------------------------------------*/

std::tuple<bool, int> basic_value_insert(int* vect)
{
    /*
     * This will insert a value into an array (row/box/column) assuming the array is only missing one number.
     * If the array is missing multiple numbers, or if it is already full, it will do nothing.
     */

    bool hzv = has_zeros(vect);             // These two variables exist to reduce the number of function calls.
    int czv = count_zeros(vect);

    if ((hzv != false) && (czv == 1))
    {
        int place = 0;
        int summa = sum_values(vect);

        for (int a = 0; a < 9; a++)
        {
            if (vect[a] == 0)
            {
                vect[a] = 45 - summa;
                place = a;
            }
            else
            {
                continue;
            }
        }

        return std::make_tuple(true, vect[place]);
    }
    else if (hzv == false)
    {
        return std::make_tuple(false, 0);
    }
    else if (czv < 1)
    {
        return std::make_tuple(false, 0);
    }
    else if (czv > 1)
    {
        return std::make_tuple(false, 0);
    }
    else
    {
        QMessageBox msg;
        msg.setStandardButtons(QMessageBox::Ok);
        msg.setText("Something is wonky with the basic replacement algorithm.\n");
        msg.exec();
        return std::make_tuple(false, 0);
    }

}

std::tuple<bool, int> basic_value_checking(Rows fakerow, int row_num, Cols fakecol, int col_num, Boxs fakebox, int box_num)
{
    /*
     * This checks what values an individual zero can be.
     * If the zero can only be one value (it can be a 2, or it can be a 5, etc) it returns true, and the number that the 0 must be.
     * If the zero can be multiple things, it returns false.
     */

    // We need to know if a spot can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Does it have a 2?, etc")
    // As named, these variables save time by reducing function calls dramatically.
    int* row_time_saver = fakerow.getrows(row_num);
    int* col_time_saver = fakecol.getcols(col_num);
    int* box_time_saver = fakebox.getboxs(box_num);

    one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
    two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
    three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
    four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
    five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
    six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
    seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
    eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
    nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

    // Identify if only one number is possible. ("Can this spot only be a 1? Can it only be a two? etc").
    // If multiple or none are possible, each new bool we create ends up false.

    bool a = (!one && (two && three && four && five && six && seven && eight && nine));
    bool b = (!two && (one && three && four && five && six && seven && eight && nine));
    bool c = (!three && (one && two && four && five && six && seven && eight && nine));
    bool d = (!four && (one && two && three && five && six && seven && eight && nine));
    bool e = (!five && (one && two && three && four && six && seven && eight && nine));
    bool f = (!six && (one && two && three && four && five && seven && eight && nine));
    bool g = (!seven && (one && two && three && four && five && six && eight && nine));
    bool h = (!eight && (one && two && three && four && five && six && seven && nine));
    bool i = (!nine && (one && two && three && four && five && six && seven && eight));

    // Organize an array for looping through, for reusability.
    bool exchange[] = { a, b, c, d, e, f, g, h, i };

    // Identify which number is possible. If only one is possible, return true and which number it is. Otherwise, false.
    for (int check = 0; check < 9;  check++)
    {
        if(exchange[check])
        {
            return std::make_tuple(true, check);
        }
        else
        {
            continue;
        }
    }

    return std::make_tuple(false, 0);
}

std::tuple<bool, int**> basic_value_solving(int** mat, int** mat2, int** mat3)
{
    /*
     * This takes every zero in the Sudoku and solves for each square based on what each square can be.
     * It does not take sets into account. It only says "this row already has a 1, this box already has a 2", etc.
     * It does not eliminate based on what a set must include, it eliminates only what a sqaure's three sets already have.
     *
     * If it does a replacement, it returns true and the new matrix. If not, it returns false.
     */

    /* Setup dummy objects so that we can use their tools. */
    Rows *fakerow = new Rows();
    Cols *fakecol = new Cols();
    Boxs *fakebox = new Boxs();

    /* Populate the dummies with the correct information. */
    for (int fake = 0; fake < 9; fake++)
    {
        fakerow->setrows(fake, mat[fake]);
        fakecol->setcols(fake, mat2[fake]);
        fakebox->setboxs(fake, mat3[fake]);
    }

    /* Find the important row/column/box numbers (the first or next zero we find) and analyze them. */
    int important[3] = {-1, -1, -1};
    int skiprow = -1;
    int skipcol = -1;

    int count = 0;
    bool act = false;

    do
    {
        int* a = find_important(*fakerow, skiprow, skipcol);

        important[0] = a[0];
        important[1] = a[1];
        important[2] = a[2];

        if (important[0] > skiprow)
        {
            skipcol = -1;
        }
        else
        {
            skipcol = important[1];
        }

        skiprow = important[0];

        std::tuple b = basic_value_checking(*fakerow, important[0], *fakecol, important[1], *fakebox, important[2]);
        bool verify = std::get<0>(b);
        int loc_minus_1 = std::get<1>(b);

        if (verify)
        {
            if (fakerow->getrows(important[0])[important[1]] != 0)   // If guard to protect against rare bugs
            {
                count++;
                if (count == 81)
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("We are maxing out basic solver.");
                    msg.exec();
                }
                continue;
            }
            else
            {
                int* newrow = fakerow->getrows(important[0]);
                newrow[important[1]] = loc_minus_1 + 1;
                fakerow->setrows(important[0], newrow);
                act = true;
                count++;
            }
        }

        else
        {
            count++;
            if (count == 81)
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("We are maxing out basic solver.");
                msg.exec();
            }
            continue;
        }
    }
    while ((act == false) && (count < 81));

    return std::make_tuple(act, fakerow->getmatrix());
}

std::tuple<bool, Rows> intermediate_row_value_checking(Rows fakerow, int row_num, Cols fakecol, Boxs fakebox)
{
    /*
     * This is the checker for rows, to see what each zero within a row can be,
     * If it can solve for a particular square, it adds the number and returns the new Row set.
     * If it cannot solve anything, it returns the original Row set.
     */

    // We need to find all the zeros in our row, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    int* row_time_saver = fakerow.getrows(row_num);

    int num_zeros = count_zeros(row_time_saver);
    if (num_zeros == 0)
    {
        return std::make_tuple(false, fakerow);
    }

    int* zero_loc = where_zeros(row_time_saver);

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};
    bool change = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* col_time_saver = fakecol.getcols(w);
            int* box_time_saver = new int[9];

            switch (row_num)
            {
                case 0:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 1:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 5:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 6:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 7:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 8:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
            }

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
    int alpha = 0;
    int beta = 0;
    int gamma = 0;
    int delta = 0;
    int epsilon = 0;
    int zeta = 0;
    int eta = 0;
    int theta = 0;
    int iota = 0;

    for (int e = 0; e < 9; e++)
    {
        if (possibilities[e][0])
        {
            alpha += 1;
        }
        if (possibilities[e][1])
        {
            beta += 1;
        }
        if (possibilities[e][2])
        {
            gamma += 1;
        }
        if (possibilities[e][3])
        {
            delta += 1;
        }
        if (possibilities[e][4])
        {
            epsilon += 1;
        }
        if (possibilities[e][5])
        {
            zeta += 1;
        }
        if (possibilities[e][6])
        {
            eta += 1;
        }
        if (possibilities[e][7])
        {
            theta += 1;
        }
        if (possibilities[e][8])
        {
            iota += 1;
        }
    }

    // Replace anything that can only be one thing.
    if (alpha == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][0])
            {
                row_time_saver[r] = 1;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (beta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][1])
            {
                row_time_saver[r] = 2;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (gamma == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][2])
            {
                row_time_saver[r] = 3;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (delta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][3])
            {
                row_time_saver[r] = 4;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (epsilon == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][4])
            {
                row_time_saver[r] = 5;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (zeta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][5])
            {
                row_time_saver[r] = 6;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (eta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][6])
            {
                row_time_saver[r] = 7;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (theta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][7])
            {
                row_time_saver[r] = 8;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }
    if (iota == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][8])
            {
                row_time_saver[r] = 9;
                fakerow.setrows(row_num, row_time_saver);
                change = true;
            }
        }
    }

    // Return if anything changed (and if so, what)
    if (change)
    {
        return std::make_tuple(true, fakerow);
    }
    else
    {
        return std::make_tuple(false, fakerow);
    }
}

std::tuple<bool, Cols> intermediate_col_value_checking(Rows fakerow, Cols fakecol, int col_num, Boxs fakebox)
{
    /*
     * This is the checker for columns, to see what each zero within a column can be,
     * If it can solve for a particular square, it adds the number and returns the new Column set.
     * If it cannot solve anything, it returns the original Column set.
     */

    // We need to find all the zeros in our column, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    int* col_time_saver = fakecol.getcols(col_num);

    int num_zeros = count_zeros(col_time_saver);
    if (num_zeros == 0)
    {
        return std::make_tuple(false, fakecol);
    }

    int* zero_loc = where_zeros(col_time_saver);

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};
    bool change = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* row_time_saver = fakerow.getrows(w);
            int* box_time_saver = nullptr;

            switch (col_num)
            {
                case 0:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 1:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 5:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 6:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 7:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 8:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
            }

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
    int alpha = 0;
    int beta = 0;
    int gamma = 0;
    int delta = 0;
    int epsilon = 0;
    int zeta = 0;
    int eta = 0;
    int theta = 0;
    int iota = 0;

    for (int e = 0; e < 9; e++)
    {
        if (possibilities[e][0])
        {
            alpha += 1;
        }
        if (possibilities[e][1])
        {
            beta += 1;
        }
        if (possibilities[e][2])
        {
            gamma += 1;
        }
        if (possibilities[e][3])
        {
            delta += 1;
        }
        if (possibilities[e][4])
        {
            epsilon += 1;
        }
        if (possibilities[e][5])
        {
            zeta += 1;
        }
        if (possibilities[e][6])
        {
            eta += 1;
        }
        if (possibilities[e][7])
        {
            theta += 1;
        }
        if (possibilities[e][8])
        {
            iota += 1;
        }
    }

    // Replace anything that can only be one thing.
    if (alpha == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][0])
            {
                col_time_saver[r] = 1;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (beta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][1])
            {
                col_time_saver[r] = 2;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (gamma == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][2])
            {
                col_time_saver[r] = 3;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (delta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][3])
            {
                col_time_saver[r] = 4;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (epsilon == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][4])
            {
                col_time_saver[r] = 5;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (zeta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][5])
            {
                col_time_saver[r] = 6;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (eta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][6])
            {
                col_time_saver[r] = 7;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (theta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][7])
            {
                col_time_saver[r] = 8;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }
    if (iota == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][8])
            {
                col_time_saver[r] = 9;
                fakecol.setcols(col_num, col_time_saver);
                change = true;
            }
        }
    }

    if (change == true)
    {
        return std::make_tuple(true, fakecol);
    }
    else
    {
        return std::make_tuple(false, fakecol);
    }
}

std::tuple<bool, Boxs> intermediate_box_value_checking(Rows fakerow, Cols fakecol, Boxs fakebox, int box_num)
{
    /*
     * This is the checker for boxes, to see what each zero within a box can be,
     * If it can solve for a particular square, it adds the number and returns the new Box set.
     * If it cannot solve anything, it returns the original Box set.
     */

    // We need to find all the zeros in our box, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    int* box_time_saver = fakebox.getboxs(box_num);

    int num_zeros = count_zeros(box_time_saver);
    if (num_zeros == 0)
    {
        return std::make_tuple(false, fakebox);
    }

    int* zero_loc = where_zeros(box_time_saver);

    int r_index[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
    int c_index[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};

    switch (box_num)
    {
        case 0:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 1:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 2:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 3:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 4:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 5:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 6:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 7:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 8:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        default:
        {
            QMessageBox msg;
            msg.setStandardButtons(QMessageBox::Ok);
            msg.setText("Box number is impossible.");
            msg.exec();
            break;
        }
    }

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};

    bool change = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* row_time_saver = fakerow.getrows(r_index[w]);
            int* col_time_saver = fakecol.getcols(c_index[w]);

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
    int alpha = 0;
    int beta = 0;
    int gamma = 0;
    int delta = 0;
    int epsilon = 0;
    int zeta = 0;
    int eta = 0;
    int theta = 0;
    int iota = 0;

    for (int e = 0; e < 9; e++)
    {
        if (possibilities[e][0])
        {
            alpha += 1;
        }
        if (possibilities[e][1])
        {
            beta += 1;
        }
        if (possibilities[e][2])
        {
            gamma += 1;
        }
        if (possibilities[e][3])
        {
            delta += 1;
        }
        if (possibilities[e][4])
        {
            epsilon += 1;
        }
        if (possibilities[e][5])
        {
            zeta += 1;
        }
        if (possibilities[e][6])
        {
            eta += 1;
        }
        if (possibilities[e][7])
        {
            theta += 1;
        }
        if (possibilities[e][8])
        {
            iota += 1;
        }
    }

    // Replace anything that can only be one thing.
    if (alpha == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][0])
            {
                box_time_saver[r] = 1;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (beta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][1])
            {
                box_time_saver[r] = 2;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (gamma == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][2])
            {
                box_time_saver[r] = 3;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (delta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][3])
            {
                box_time_saver[r] = 4;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (epsilon == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][4])
            {
                box_time_saver[r] = 5;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (zeta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][5])
            {
                box_time_saver[r] = 6;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (eta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][6])
            {
                box_time_saver[r] = 7;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (theta == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][7])
            {
                box_time_saver[r] = 8;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }
    if (iota == 1)
    {
        for (int r = 0; r < 9; r++)
        {
            if (possibilities[r][8])
            {
                box_time_saver[r] = 9;
                fakebox.setboxs(box_num, box_time_saver);
                change = true;
            }
        }
    }

    if (change == true)
    {
        return std::make_tuple(true, fakebox);
    }
    else
    {
        return std::make_tuple(false, fakebox);
    }
}

std::tuple<bool, Boxs> intermediate_inference_checking(Rows fakerow, Cols fakecol, Boxs fakebox, int box_num)
{
    /*
     * This is designed to check via inferred knowledge.
     * Let's say only the last row of a box can be a 3, then we use that inferred 3 to check other boxes
     * horizontal to the first. If only the middle column of a box can be a 5, then we use that inferred
     * 5 to check other boxes vertical to the first.
     */

    // Create a box to contain our assertion, and give it all the values of a real box.
    Boxs* throwawaybox = new Boxs();

    for (int i = 0; i < 9; i++)
    {
        throwawaybox->setboxs(i, fakebox.getboxs(i));
    }

    // Determine what assertion to make, and assign it to the first element. Actual location doesn't matter.
    // This begins with finding possibilities.
    int* box_time_saver = throwawaybox->getboxs(box_num);

    int num_zeros = count_zeros(box_time_saver);
    if (num_zeros == 0)
    {
        return std::make_tuple(false, fakebox);
    }

    int* zero_loc = where_zeros(box_time_saver);

    int r_index[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
    int c_index[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};

    switch (box_num)
    {
        case 0:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 1:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 2:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 0;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 0;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 0;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 1;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 1;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 1;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 2;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 2;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 2;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 3:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 4:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 5:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 3;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 3;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 3;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 4;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 4;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 4;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 5;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 5;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 5;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 6:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 0;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 1;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 2;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 0;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 1;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 2;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 0;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 1;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 2;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 7:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 3;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 4;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 5;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 3;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 4;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 5;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 3;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 4;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 5;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        case 8:
        {
            for (int q = 0; q < 9; q++)
            {
                if (zero_loc[q] == 1)
                {
                    switch (q)
                    {
                        case 0:
                        {
                            r_index[q] = 6;
                            c_index[q] = 6;
                            break;
                        }
                        case 1:
                        {
                            r_index[q] = 6;
                            c_index[q] = 7;
                            break;
                        }
                        case 2:
                        {
                            r_index[q] = 6;
                            c_index[q] = 8;
                            break;
                        }
                        case 3:
                        {
                            r_index[q] = 7;
                            c_index[q] = 6;
                            break;
                        }
                        case 4:
                        {
                            r_index[q] = 7;
                            c_index[q] = 7;
                            break;
                        }
                        case 5:
                        {
                            r_index[q] = 7;
                            c_index[q] = 8;
                            break;
                        }
                        case 6:
                        {
                            r_index[q] = 8;
                            c_index[q] = 6;
                            break;
                        }
                        case 7:
                        {
                            r_index[q] = 8;
                            c_index[q] = 7;
                            break;
                        }
                        case 8:
                        {
                            r_index[q] = 8;
                            c_index[q] = 8;
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("potential checking okashii.");
                            msg.exec();
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
        default:
        {
            QMessageBox msg;
            msg.setStandardButtons(QMessageBox::Ok);
            msg.setText("Box number is impossible.");
            msg.exec();
            break;
        }
    }

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};

    bool change = false;
    bool r_assert = false;
    bool c_assert = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* row_time_saver = fakerow.getrows(r_index[w]);
            int* col_time_saver = fakecol.getcols(c_index[w]);

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine if any possibilities are restricted to a single row. If so, make the appropriate row assertion.
    if ((possibilities[0][0] == true || possibilities[1][0] == true || possibilities[2][0] == true) && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && possibilities[6][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
    {
        if (possibilities[0][0])
        {
            box_time_saver[0] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][0])
        {
            box_time_saver[1] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[2][0] == false && (possibilities[3][0] == true || possibilities[4][0] == true || possibilities[5][0] == true) && possibilities[6][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
    {
        if (possibilities[3][0])
        {
            box_time_saver[3] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][0])
        {
            box_time_saver[4] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[2][0] == false && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && (possibilities[6][0] == true || possibilities[7][0] == true || possibilities[8][0] == true))
    {
        if (possibilities[6][0])
        {
            box_time_saver[6] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][0])
        {
            box_time_saver[7] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][1] == true || possibilities[1][1] == true || possibilities[2][1] == true) && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && possibilities[6][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
    {
        if (possibilities[0][0])
        {
            box_time_saver[0] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][0])
        {
            box_time_saver[1] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[2][1] == false && (possibilities[3][1] == true || possibilities[4][1] == true || possibilities[5][1] == true) && possibilities[6][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
    {
        if (possibilities[3][0])
        {
            box_time_saver[3] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][0])
        {
            box_time_saver[4] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[2][1] == false && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && (possibilities[6][1] == true || possibilities[7][1] == true || possibilities[8][1] == true))
    {
        if (possibilities[6][1])
        {
            box_time_saver[6] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][1])
        {
            box_time_saver[7] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][2] == true || possibilities[1][2] == true || possibilities[2][2] == true) && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && possibilities[6][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
    {
        if (possibilities[0][2])
        {
            box_time_saver[0] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][2])
        {
            box_time_saver[1] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[2][2] == false && (possibilities[3][2] == true || possibilities[4][2] == true || possibilities[5][2] == true) && possibilities[6][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
    {
        if (possibilities[3][2])
        {
            box_time_saver[3] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][2])
        {
            box_time_saver[4] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[2][2] == false && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && (possibilities[6][2] == true || possibilities[7][2] == true || possibilities[8][2] == true))
    {
        if (possibilities[6][2])
        {
            box_time_saver[6] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][2])
        {
            box_time_saver[7] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][3] == true || possibilities[1][3] == true || possibilities[2][3] == true) && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && possibilities[6][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
    {
        if (possibilities[0][3])
        {
            box_time_saver[0] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][3])
        {
            box_time_saver[1] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[2][3] == false && (possibilities[3][3] == true || possibilities[4][3] == true || possibilities[5][3] == true) && possibilities[6][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
    {
        if (possibilities[3][3])
        {
            box_time_saver[3] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][3])
        {
            box_time_saver[4] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[2][3] == false && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && (possibilities[6][3] == true || possibilities[7][3] == true || possibilities[8][3] == true))
    {
        if (possibilities[6][3])
        {
            box_time_saver[6] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][3])
        {
            box_time_saver[7] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][4] == true || possibilities[1][4] == true || possibilities[2][4] == true) && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && possibilities[6][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
    {
        if (possibilities[0][4])
        {
            box_time_saver[0] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][4])
        {
            box_time_saver[1] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[2][4] == false && (possibilities[3][4] == true || possibilities[4][4] == true || possibilities[5][4] == true) && possibilities[6][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
    {
        if (possibilities[3][4])
        {
            box_time_saver[3] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][4])
        {
            box_time_saver[4] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[2][4] == false && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && (possibilities[6][4] == true || possibilities[7][4] == true || possibilities[8][4] == true))
    {
        if (possibilities[6][4])
        {
            box_time_saver[6] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][4])
        {
            box_time_saver[7] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][5] == true || possibilities[1][5] == true || possibilities[2][5] == true) && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && possibilities[6][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
    {
        if (possibilities[0][5])
        {
            box_time_saver[0] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][5])
        {
            box_time_saver[1] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[2][5] == false && (possibilities[3][5] == true || possibilities[4][5] == true || possibilities[5][5] == true) && possibilities[6][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
    {
        if (possibilities[3][5])
        {
            box_time_saver[3] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][5])
        {
            box_time_saver[4] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[2][5] == false && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && (possibilities[6][5] == true || possibilities[7][5] == true || possibilities[8][5] == true))
    {
        if (possibilities[6][5])
        {
            box_time_saver[6] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][5])
        {
            box_time_saver[7] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][6] == true || possibilities[1][6] == true || possibilities[2][6] == true) && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && possibilities[6][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
    {
        if (possibilities[0][6])
        {
            box_time_saver[0] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][6])
        {
            box_time_saver[1] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[2][6] == false && (possibilities[3][6] == true || possibilities[4][6] == true || possibilities[5][6] == true) && possibilities[6][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
    {
        if (possibilities[3][6])
        {
            box_time_saver[3] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][6])
        {
            box_time_saver[4] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[2][6] == false && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && (possibilities[6][6] == true || possibilities[7][6] == true || possibilities[8][6] == true))
    {
        if (possibilities[6][6])
        {
            box_time_saver[6] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][6])
        {
            box_time_saver[7] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][7] == true || possibilities[1][7] == true || possibilities[2][7] == true) && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && possibilities[6][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
    {
        if (possibilities[0][7])
        {
            box_time_saver[0] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][7])
        {
            box_time_saver[1] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[2][7] == false && (possibilities[3][7] == true || possibilities[4][7] == true || possibilities[5][7] == true) && possibilities[6][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
    {
        if (possibilities[3][7])
        {
            box_time_saver[3] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][7])
        {
            box_time_saver[4] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[2][7] == false && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && (possibilities[6][7] == true || possibilities[7][7] == true || possibilities[8][7] == true))
    {
        if (possibilities[6][7])
        {
            box_time_saver[6] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][7])
        {
            box_time_saver[7] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if ((possibilities[0][8] == true || possibilities[1][8] == true || possibilities[2][8] == true) && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && possibilities[6][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
    {
        if (possibilities[0][8])
        {
            box_time_saver[0] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[1][8])
        {
            box_time_saver[1] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[2] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[2][8] == false && (possibilities[3][8] == true || possibilities[4][8] == true || possibilities[5][8] == true) && possibilities[6][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
    {
        if (possibilities[3][8])
        {
            box_time_saver[3] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[4][8])
        {
            box_time_saver[4] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[5] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }
    else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[2][8] == false && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && (possibilities[6][8] == true || possibilities[7][8] == true || possibilities[8][8] == true))
    {
        if (possibilities[6][8])
        {
            box_time_saver[6] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else if (possibilities[7][8])
        {
            box_time_saver[7] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
        else
        {
            box_time_saver[8] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            r_assert = true;
        }
    }

    // If we can make a row assertion, then check the other boxes horizontal to ours.
    if (r_assert)
    {
        switch (box_num)
        {
            case 0:
            {
                std::tuple A = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 1);
                change = std::get<0>(A);
                *throwawaybox = std::get<1>(A);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple A2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 2);
                    change = std::get<0>(A2);
                    *throwawaybox = std::get<1>(A2);
                    break;
                }
            }
            case 1:
            {
                std::tuple B = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 0);
                change = std::get<0>(B);
                *throwawaybox = std::get<1>(B);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple B2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 2);
                    change = std::get<0>(B2);
                    *throwawaybox = std::get<1>(B2);
                    break;
                }
            }
            case 2:
            {
                    std::tuple C = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 0);
                    change = std::get<0>(C);
                    *throwawaybox = std::get<1>(C);

                    if (change)
                    {
                        break;
                    }
                    else
                    {
                        std::tuple C2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 1);
                        change = std::get<0>(C2);
                        *throwawaybox = std::get<1>(C2);
                        break;
                    }
            }
            case 3:
            {
                std::tuple D = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 4);
                change = std::get<0>(D);
                *throwawaybox = std::get<1>(D);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple D2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 5);
                    change = std::get<0>(D2);
                    *throwawaybox = std::get<1>(D2);
                    break;
                }
            }
            case 4:
            {
                std::tuple E = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 3);
                change = std::get<0>(E);
                *throwawaybox = std::get<1>(E);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple E2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 5);
                    change = std::get<0>(E2);
                    *throwawaybox = std::get<1>(E2);
                    break;
                }
            }
            case 5:
            {
                std::tuple F = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 3);
                change = std::get<0>(F);
                *throwawaybox = std::get<1>(F);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple F2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 4);
                    change = std::get<0>(F2);
                    *throwawaybox = std::get<1>(F2);
                    break;
                }
            }
            case 6:
            {
                std::tuple G = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 7);
                change = std::get<0>(G);
                *throwawaybox = std::get<1>(G);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple G2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 8);
                    change = std::get<0>(G2);
                    *throwawaybox = std::get<1>(G2);
                    break;
                }
            }
            case 7:
            {
                std::tuple H = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 6);
                change = std::get<0>(H);
                *throwawaybox = std::get<1>(H);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple H2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 8);
                    change = std::get<0>(H2);
                    *throwawaybox = std::get<1>(H2);
                    break;
                }
            }
            case 8:
            {
                std::tuple I = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 6);
                change = std::get<0>(I);
                *throwawaybox = std::get<1>(I);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple I2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 7);
                    change = std::get<0>(I2);
                    *throwawaybox = std::get<1>(I2);
                    break;
                }
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Something is weird with inference row checking.");
                msg.exec();
                break;
            }
        }

        if ((possibilities[0][0] == true || possibilities[1][0] == true || possibilities[2][0] == true) && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && possibilities[6][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
        {
            if (possibilities[0][0])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][0])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[2][0] == false && (possibilities[3][0] == true || possibilities[4][0] == true || possibilities[5][0] == true) && possibilities[6][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
        {
            if (possibilities[3][0])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][0])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[2][0] == false && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && (possibilities[6][0] == true || possibilities[7][0] == true || possibilities[8][0] == true))
        {
            if (possibilities[6][0])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][0])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][1] == true || possibilities[1][1] == true || possibilities[2][1] == true) && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && possibilities[6][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
        {
            if (possibilities[0][0])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][0])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[2][1] == false && (possibilities[3][1] == true || possibilities[4][1] == true || possibilities[5][1] == true) && possibilities[6][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
        {
            if (possibilities[3][0])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][0])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[2][1] == false && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && (possibilities[6][1] == true || possibilities[7][1] == true || possibilities[8][1] == true))
        {
            if (possibilities[6][1])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][1])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][2] == true || possibilities[1][2] == true || possibilities[2][2] == true) && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && possibilities[6][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
        {
            if (possibilities[0][2])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][2])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[2][2] == false && (possibilities[3][2] == true || possibilities[4][2] == true || possibilities[5][2] == true) && possibilities[6][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
        {
            if (possibilities[3][2])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][2])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[2][2] == false && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && (possibilities[6][2] == true || possibilities[7][2] == true || possibilities[8][2] == true))
        {
            if (possibilities[6][2])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][2])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][3] == true || possibilities[1][3] == true || possibilities[2][3] == true) && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && possibilities[6][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
        {
            if (possibilities[0][3])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][3])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[2][3] == false && (possibilities[3][3] == true || possibilities[4][3] == true || possibilities[5][3] == true) && possibilities[6][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
        {
            if (possibilities[3][3])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][3])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[2][3] == false && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && (possibilities[6][3] == true || possibilities[7][3] == true || possibilities[8][3] == true))
        {
            if (possibilities[6][3])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][3])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][4] == true || possibilities[1][4] == true || possibilities[2][4] == true) && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && possibilities[6][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
        {
            if (possibilities[0][4])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][4])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[2][4] == false && (possibilities[3][4] == true || possibilities[4][4] == true || possibilities[5][4] == true) && possibilities[6][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
        {
            if (possibilities[3][4])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][4])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[2][4] == false && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && (possibilities[6][4] == true || possibilities[7][4] == true || possibilities[8][4] == true))
        {
            if (possibilities[6][4])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][4])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][5] == true || possibilities[1][5] == true || possibilities[2][5] == true) && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && possibilities[6][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
        {
            if (possibilities[0][5])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][5])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[2][5] == false && (possibilities[3][5] == true || possibilities[4][5] == true || possibilities[5][5] == true) && possibilities[6][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
        {
            if (possibilities[3][5])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][5])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[2][5] == false && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && (possibilities[6][5] == true || possibilities[7][5] == true || possibilities[8][5] == true))
        {
            if (possibilities[6][5])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][5])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][6] == true || possibilities[1][6] == true || possibilities[2][6] == true) && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && possibilities[6][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
        {
            if (possibilities[0][6])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][6])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[2][6] == false && (possibilities[3][6] == true || possibilities[4][6] == true || possibilities[5][6] == true) && possibilities[6][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
        {
            if (possibilities[3][6])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][6])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[2][6] == false && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && (possibilities[6][6] == true || possibilities[7][6] == true || possibilities[8][6] == true))
        {
            if (possibilities[6][6])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][6])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][7] == true || possibilities[1][7] == true || possibilities[2][7] == true) && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && possibilities[6][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
        {
            if (possibilities[0][7])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][7])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[2][7] == false && (possibilities[3][7] == true || possibilities[4][7] == true || possibilities[5][7] == true) && possibilities[6][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
        {
            if (possibilities[3][7])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][7])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[2][7] == false && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && (possibilities[6][7] == true || possibilities[7][7] == true || possibilities[8][7] == true))
        {
            if (possibilities[6][7])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][7])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][8] == true || possibilities[1][8] == true || possibilities[2][8] == true) && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && possibilities[6][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
        {
            if (possibilities[0][8])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[1][8])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[2][8] == false && (possibilities[3][8] == true || possibilities[4][8] == true || possibilities[5][8] == true) && possibilities[6][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
        {
            if (possibilities[3][8])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][8])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[2][8] == false && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && (possibilities[6][8] == true || possibilities[7][8] == true || possibilities[8][8] == true))
        {
            if (possibilities[6][8])
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[7][8])
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
    }

    // Determine if any possibilities are restricted to a single column. If so, make the appropriate column assertion.
    if ((possibilities[0][0] == true || possibilities[3][0] == true || possibilities[6][0] == true) && possibilities[1][0] == false && possibilities[2][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
    {
        if (possibilities[0][0])
        {
            box_time_saver[0] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][0])
        {
            box_time_saver[3] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][0] == false && possibilities[2][0] == false && possibilities[3][0] == false && (possibilities[1][0] == true || possibilities[4][0] == true || possibilities[7][0] == true) && possibilities[5][0] == false && possibilities[6][0] == false && possibilities[8][0] == false)
    {
        if (possibilities[1][0])
        {
            box_time_saver[1] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][0])
        {
            box_time_saver[4] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[6][0] == false && possibilities[7][0] == false && (possibilities[2][0] == true || possibilities[5][0] == true || possibilities[8][0] == true))
    {
        if (possibilities[2][0])
        {
            box_time_saver[2] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][0])
        {
            box_time_saver[5] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 1;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][1] == true || possibilities[3][1] == true || possibilities[6][1] == true) && possibilities[1][1] == false && possibilities[2][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
    {
        if (possibilities[0][1])
        {
            box_time_saver[0] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][1])
        {
            box_time_saver[3] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][1] == false && possibilities[2][1] == false && possibilities[3][1] == false && (possibilities[1][1] == true || possibilities[4][1] == true || possibilities[7][1] == true) && possibilities[5][1] == false && possibilities[6][1] == false && possibilities[8][1] == false)
    {
        if (possibilities[1][1])
        {
            box_time_saver[1] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][1])
        {
            box_time_saver[4] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[6][1] == false && possibilities[7][1] == false && (possibilities[2][1] == true || possibilities[5][1] == true || possibilities[8][1] == true))
    {
        if (possibilities[2][1])
        {
            box_time_saver[2] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][1])
        {
            box_time_saver[5] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 2;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][2] == true || possibilities[3][2] == true || possibilities[6][2] == true) && possibilities[1][2] == false && possibilities[2][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
    {
        if (possibilities[0][2])
        {
            box_time_saver[0] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][2])
        {
            box_time_saver[3] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][2] == false && possibilities[2][2] == false && possibilities[3][2] == false && (possibilities[1][2] == true || possibilities[4][2] == true || possibilities[7][2] == true) && possibilities[5][2] == false && possibilities[6][2] == false && possibilities[8][2] == false)
    {
        if (possibilities[1][2])
        {
            box_time_saver[1] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][2])
        {
            box_time_saver[4] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[6][2] == false && possibilities[7][2] == false && (possibilities[2][2] == true || possibilities[5][2] == true || possibilities[8][2] == true))
    {
        if (possibilities[2][2])
        {
            box_time_saver[2] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][2])
        {
            box_time_saver[5] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 3;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][3] == true || possibilities[3][3] == true || possibilities[6][3] == true) && possibilities[1][3] == false && possibilities[2][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
    {
        if (possibilities[0][3])
        {
            box_time_saver[0] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][3])
        {
            box_time_saver[3] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][3] == false && possibilities[2][3] == false && possibilities[3][3] == false && (possibilities[1][3] == true || possibilities[4][3] == true || possibilities[7][3] == true) && possibilities[5][3] == false && possibilities[6][3] == false && possibilities[8][3] == false)
    {
        if (possibilities[1][3])
        {
            box_time_saver[1] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][3])
        {
            box_time_saver[4] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[6][3] == false && possibilities[7][3] == false && (possibilities[2][3] == true || possibilities[5][3] == true || possibilities[8][3] == true))
    {
        if (possibilities[2][3])
        {
            box_time_saver[2] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][3])
        {
            box_time_saver[5] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 4;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][4] == true || possibilities[3][4] == true || possibilities[6][4] == true) && possibilities[1][4] == false && possibilities[2][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
    {
        if (possibilities[0][4])
        {
            box_time_saver[0] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][4])
        {
            box_time_saver[3] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][4] == false && possibilities[2][4] == false && possibilities[3][4] == false && (possibilities[1][4] == true || possibilities[4][4] == true || possibilities[7][4] == true) && possibilities[5][4] == false && possibilities[6][4] == false && possibilities[8][4] == false)
    {
        if (possibilities[1][4])
        {
            box_time_saver[1] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][4])
        {
            box_time_saver[4] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[6][4] == false && possibilities[7][4] == false && (possibilities[2][4] == true || possibilities[5][4] == true || possibilities[8][4] == true))
    {
        if (possibilities[2][4])
        {
            box_time_saver[2] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][4])
        {
            box_time_saver[5] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 5;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][5] == true || possibilities[3][5] == true || possibilities[6][5] == true) && possibilities[1][5] == false && possibilities[2][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
    {
        if (possibilities[0][5])
        {
            box_time_saver[0] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][5])
        {
            box_time_saver[3] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][5] == false && possibilities[2][5] == false && possibilities[3][5] == false && (possibilities[1][5] == true || possibilities[4][5] == true || possibilities[7][5] == true) && possibilities[5][5] == false && possibilities[6][5] == false && possibilities[8][5] == false)
    {
        if (possibilities[1][5])
        {
            box_time_saver[1] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][5])
        {
            box_time_saver[4] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[6][5] == false && possibilities[7][5] == false && (possibilities[2][5] == true || possibilities[5][5] == true || possibilities[8][5] == true))
    {
        if (possibilities[2][5])
        {
            box_time_saver[2] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][5])
        {
            box_time_saver[5] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 6;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][6] == true || possibilities[3][6] == true || possibilities[6][6] == true) && possibilities[1][6] == false && possibilities[2][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
    {
        if (possibilities[0][6])
        {
            box_time_saver[0] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][6])
        {
            box_time_saver[3] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][6] == false && possibilities[2][6] == false && possibilities[3][6] == false && (possibilities[1][6] == true || possibilities[4][6] == true || possibilities[7][6] == true) && possibilities[5][6] == false && possibilities[6][6] == false && possibilities[8][6] == false)
    {
        if (possibilities[1][6])
        {
            box_time_saver[1] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][6])
        {
            box_time_saver[4] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[6][6] == false && possibilities[7][6] == false && (possibilities[2][6] == true || possibilities[5][6] == true || possibilities[8][6] == true))
    {
        if (possibilities[2][6])
        {
            box_time_saver[2] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][6])
        {
            box_time_saver[5] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 7;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][7] == true || possibilities[3][7] == true || possibilities[6][7] == true) && possibilities[1][7] == false && possibilities[2][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
    {
        if (possibilities[0][7])
        {
            box_time_saver[0] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][7])
        {
            box_time_saver[3] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][7] == false && possibilities[2][7] == false && possibilities[3][7] == false && (possibilities[1][7] == true || possibilities[4][7] == true || possibilities[7][7] == true) && possibilities[5][7] == false && possibilities[6][7] == false && possibilities[8][7] == false)
    {
        if (possibilities[1][7])
        {
            box_time_saver[1] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][7])
        {
            box_time_saver[4] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[6][7] == false && possibilities[7][7] == false && (possibilities[2][7] == true || possibilities[5][7] == true || possibilities[8][7] == true))
    {
        if (possibilities[2][7])
        {
            box_time_saver[2] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][7])
        {
            box_time_saver[5] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 8;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if ((possibilities[0][8] == true || possibilities[3][8] == true || possibilities[6][8] == true) && possibilities[1][8] == false && possibilities[2][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
    {
        if (possibilities[0][8])
        {
            box_time_saver[0] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[3][8])
        {
            box_time_saver[3] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[6] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][8] == false && possibilities[2][8] == false && possibilities[3][8] == false && (possibilities[1][8] == true || possibilities[4][8] == true || possibilities[7][8] == true) && possibilities[5][8] == false && possibilities[6][8] == false && possibilities[8][8] == false)
    {
        if (possibilities[1][8])
        {
            box_time_saver[1] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[4][8])
        {
            box_time_saver[4] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[7] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }
    else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[6][8] == false && possibilities[7][8] == false && (possibilities[2][8] == true || possibilities[5][8] == true || possibilities[8][8] == true))
    {
        if (possibilities[2][8])
        {
            box_time_saver[2] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else if (possibilities[5][8])
        {
            box_time_saver[5] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
        else
        {
            box_time_saver[8] = 9;
            throwawaybox->setboxs(box_num, box_time_saver);
            c_assert = true;
        }
    }

    // If we can make a column assertion, then check the other boxes vertical to ours.
    if (c_assert)
    {
        switch (box_num)
        {
            case 0:
            {
                std::tuple A = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 3);
                change = std::get<0>(A);
                *throwawaybox = std::get<1>(A);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple A2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 6);
                    change = std::get<0>(A2);
                    *throwawaybox = std::get<1>(A2);
                    break;
                }
            }
            case 1:
            {
                std::tuple B = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 4);
                change = std::get<0>(B);
                *throwawaybox = std::get<1>(B);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple B2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 7);
                    change = std::get<0>(B2);
                    *throwawaybox = std::get<1>(B2);
                    break;
                }
            }
            case 2:
            {
                std::tuple C = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 5);
                change = std::get<0>(C);
                *throwawaybox = std::get<1>(C);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple C2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 8);
                    change = std::get<0>(C2);
                    *throwawaybox = std::get<1>(C2);
                    break;
                }
            }
            case 3:
            {
                std::tuple D = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 0);
                change = std::get<0>(D);
                *throwawaybox = std::get<1>(D);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple D2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 6);
                    change = std::get<0>(D2);
                    *throwawaybox = std::get<1>(D2);
                    break;
                }
            }
            case 4:
            {
                std::tuple E = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 1);
                change = std::get<0>(E);
                *throwawaybox = std::get<1>(E);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple E2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 7);
                    change = std::get<0>(E2);
                    *throwawaybox = std::get<1>(E2);
                    break;
                }
            }
            case 5:
            {
                std::tuple F = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 2);
                change = std::get<0>(F);
                *throwawaybox = std::get<1>(F);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple F2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 8);
                    change = std::get<0>(F2);
                    *throwawaybox = std::get<1>(F2);
                    break;
                }
            }
            case 6:
            {
                std::tuple G = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 0);
                change = std::get<0>(G);
                *throwawaybox = std::get<1>(G);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple G2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 3);
                    change = std::get<0>(G2);
                    *throwawaybox = std::get<1>(G2);
                    break;
                }
            }
            case 7:
            {
                std::tuple H = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 1);
                change = std::get<0>(H);
                *throwawaybox = std::get<1>(H);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple H2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 4);
                    change = std::get<0>(H2);
                    *throwawaybox = std::get<1>(H2);
                    break;
                }
            }
            case 8:
            {
                std::tuple I = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 2);
                change = std::get<0>(I);
                *throwawaybox = std::get<1>(I);

                if (change)
                {
                    break;
                }
                else
                {
                    std::tuple I2 = intermediate_box_value_checking(fakerow, fakecol, *throwawaybox, 5);
                    change = std::get<0>(I2);
                    *throwawaybox = std::get<1>(I2);
                    break;
                }
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Something is weird with inference row checking.");
                msg.exec();
                break;
            }
        }

        if ((possibilities[0][0] == true || possibilities[3][0] == true || possibilities[6][0] == true) && possibilities[1][0] == false && possibilities[2][0] == false && possibilities[4][0] == false && possibilities[5][0] == false && possibilities[7][0] == false && possibilities[8][0] == false)
        {
            if (possibilities[0][0])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][0])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 00;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][0] == false && possibilities[2][0] == false && possibilities[3][0] == false && (possibilities[1][0] == true || possibilities[4][0] == true || possibilities[7][0] == true) && possibilities[5][0] == false && possibilities[6][0] == false && possibilities[8][0] == false)
        {
            if (possibilities[1][0])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][0])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][0] == false && possibilities[1][0] == false && possibilities[3][0] == false && possibilities[4][0] == false && possibilities[6][0] == false && possibilities[7][0] == false && (possibilities[2][0] == true || possibilities[5][0] == true || possibilities[8][0] == true))
        {
            if (possibilities[2][0])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][0])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][1] == true || possibilities[3][1] == true || possibilities[6][1] == true) && possibilities[1][1] == false && possibilities[2][1] == false && possibilities[4][1] == false && possibilities[5][1] == false && possibilities[7][1] == false && possibilities[8][1] == false)
        {
            if (possibilities[0][1])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][1])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][1] == false && possibilities[2][1] == false && possibilities[3][1] == false && (possibilities[1][1] == true || possibilities[4][1] == true || possibilities[7][1] == true) && possibilities[5][1] == false && possibilities[6][1] == false && possibilities[8][1] == false)
        {
            if (possibilities[1][1])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][1])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][1] == false && possibilities[1][1] == false && possibilities[3][1] == false && possibilities[4][1] == false && possibilities[6][1] == false && possibilities[7][1] == false && (possibilities[2][1] == true || possibilities[5][1] == true || possibilities[8][1] == true))
        {
            if (possibilities[2][1])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][1])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][2] == true || possibilities[3][2] == true || possibilities[6][2] == true) && possibilities[1][2] == false && possibilities[2][2] == false && possibilities[4][2] == false && possibilities[5][2] == false && possibilities[7][2] == false && possibilities[8][2] == false)
        {
            if (possibilities[0][2])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][2])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][2] == false && possibilities[2][2] == false && possibilities[3][2] == false && (possibilities[1][2] == true || possibilities[4][2] == true || possibilities[7][2] == true) && possibilities[5][2] == false && possibilities[6][2] == false && possibilities[8][2] == false)
        {
            if (possibilities[1][2])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][2])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][2] == false && possibilities[1][2] == false && possibilities[3][2] == false && possibilities[4][2] == false && possibilities[6][2] == false && possibilities[7][2] == false && (possibilities[2][2] == true || possibilities[5][2] == true || possibilities[8][2] == true))
        {
            if (possibilities[2][2])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][2])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][3] == true || possibilities[3][3] == true || possibilities[6][3] == true) && possibilities[1][3] == false && possibilities[2][3] == false && possibilities[4][3] == false && possibilities[5][3] == false && possibilities[7][3] == false && possibilities[8][3] == false)
        {
            if (possibilities[0][3])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][3])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][3] == false && possibilities[2][3] == false && possibilities[3][3] == false && (possibilities[1][3] == true || possibilities[4][3] == true || possibilities[7][3] == true) && possibilities[5][3] == false && possibilities[6][3] == false && possibilities[8][3] == false)
        {
            if (possibilities[1][3])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][3])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][3] == false && possibilities[1][3] == false && possibilities[3][3] == false && possibilities[4][3] == false && possibilities[6][3] == false && possibilities[7][3] == false && (possibilities[2][3] == true || possibilities[5][3] == true || possibilities[8][3] == true))
        {
            if (possibilities[2][3])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][3])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][4] == true || possibilities[3][4] == true || possibilities[6][4] == true) && possibilities[1][4] == false && possibilities[2][4] == false && possibilities[4][4] == false && possibilities[5][4] == false && possibilities[7][4] == false && possibilities[8][4] == false)
        {
            if (possibilities[0][4])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][4])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][4] == false && possibilities[2][4] == false && possibilities[3][4] == false && (possibilities[1][4] == true || possibilities[4][4] == true || possibilities[7][4] == true) && possibilities[5][4] == false && possibilities[6][4] == false && possibilities[8][4] == false)
        {
            if (possibilities[1][4])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][4])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][4] == false && possibilities[1][4] == false && possibilities[3][4] == false && possibilities[4][4] == false && possibilities[6][4] == false && possibilities[7][4] == false && (possibilities[2][4] == true || possibilities[5][4] == true || possibilities[8][4] == true))
        {
            if (possibilities[2][4])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][4])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][5] == true || possibilities[3][5] == true || possibilities[6][5] == true) && possibilities[1][5] == false && possibilities[2][5] == false && possibilities[4][5] == false && possibilities[5][5] == false && possibilities[7][5] == false && possibilities[8][5] == false)
        {
            if (possibilities[0][5])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][5])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][5] == false && possibilities[2][5] == false && possibilities[3][5] == false && (possibilities[1][5] == true || possibilities[4][5] == true || possibilities[7][5] == true) && possibilities[5][5] == false && possibilities[6][5] == false && possibilities[8][5] == false)
        {
            if (possibilities[1][5])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][5])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][5] == false && possibilities[1][5] == false && possibilities[3][5] == false && possibilities[4][5] == false && possibilities[6][5] == false && possibilities[7][5] == false && (possibilities[2][5] == true || possibilities[5][5] == true || possibilities[8][5] == true))
        {
            if (possibilities[2][5])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][5])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][6] == true || possibilities[3][6] == true || possibilities[6][6] == true) && possibilities[1][6] == false && possibilities[2][6] == false && possibilities[4][6] == false && possibilities[5][6] == false && possibilities[7][6] == false && possibilities[8][6] == false)
        {
            if (possibilities[0][6])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][6])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][6] == false && possibilities[2][6] == false && possibilities[3][6] == false && (possibilities[1][6] == true || possibilities[4][6] == true || possibilities[7][6] == true) && possibilities[5][6] == false && possibilities[6][6] == false && possibilities[8][6] == false)
        {
            if (possibilities[1][6])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][6])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][6] == false && possibilities[1][6] == false && possibilities[3][6] == false && possibilities[4][6] == false && possibilities[6][6] == false && possibilities[7][6] == false && (possibilities[2][6] == true || possibilities[5][6] == true || possibilities[8][6] == true))
        {
            if (possibilities[2][6])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][6])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if ((possibilities[0][7] == true || possibilities[3][7] == true || possibilities[6][7] == true) && possibilities[1][7] == false && possibilities[2][7] == false && possibilities[4][7] == false && possibilities[5][7] == false && possibilities[7][7] == false && possibilities[8][7] == false)
        {
            if (possibilities[0][7])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][7])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][7] == false && possibilities[2][7] == false && possibilities[3][7] == false && (possibilities[1][7] == true || possibilities[4][7] == true || possibilities[7][7] == true) && possibilities[5][7] == false && possibilities[6][7] == false && possibilities[8][7] == false)
        {
            if (possibilities[1][7])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][7])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][7] == false && possibilities[1][7] == false && possibilities[3][7] == false && possibilities[4][7] == false && possibilities[6][7] == false && possibilities[7][7] == false && (possibilities[2][7] == true || possibilities[5][7] == true || possibilities[8][7] == true))
        {
            if (possibilities[2][7])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][7])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);

            }
        }
        else if ((possibilities[0][8] == true || possibilities[3][8] == true || possibilities[6][8] == true) && possibilities[1][8] == false && possibilities[2][8] == false && possibilities[4][8] == false && possibilities[5][8] == false && possibilities[7][8] == false && possibilities[8][8] == false)
        {
            if (possibilities[0][8])
            {
                box_time_saver[0] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[3][8])
            {
                box_time_saver[3] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[6] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][8] == false && possibilities[2][8] == false && possibilities[3][8] == false && (possibilities[1][8] == true || possibilities[4][8] == true || possibilities[7][8] == true) && possibilities[5][8] == false && possibilities[6][8] == false && possibilities[8][8] == false)
        {
            if (possibilities[1][8])
            {
                box_time_saver[1] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[4][8])
            {
                box_time_saver[4] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[7] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
        else if (possibilities[0][8] == false && possibilities[1][8] == false && possibilities[3][8] == false && possibilities[4][8] == false && possibilities[6][8] == false && possibilities[7][8] == false && (possibilities[2][8] == true || possibilities[5][8] == true || possibilities[8][8] == true))
        {
            if (possibilities[2][8])
            {
                box_time_saver[2] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else if (possibilities[5][8])
            {
                box_time_saver[5] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
            else
            {
                box_time_saver[8] = 0;
                throwawaybox->setboxs(box_num, box_time_saver);
            }
        }
    }

    // If we changed something, return what we learned.
    if (change)
    {
        for (int i = 0; i < 9; i++)
        {
            fakebox.setboxs(i, throwawaybox->getboxs(i));
        }
        return std::make_tuple(true, fakebox);
    }
    else
    {
        return std::make_tuple(false, fakebox);
    }

}

std::tuple<bool, int**> intermediate_value_solving(int** mat, int** mat2, int** mat3)
{
    /*
     * This looks at whether there are unique possbilities within a set.
     * For instance, a box has three 0s, but only one of them can be a 1.
     * Therefore that 0 must be a 1, and we set it as such.
     *
     * Because it is a set-based approach, we need unique solvers to look at each set type.
     */

    /* Setup dummy objects so that we can use their tools. */
    Rows *fakerow = new Rows();
    Cols *fakecol = new Cols();
    Boxs *fakebox = new Boxs();

    /* Populate the dummies with the correct information. */
    for (int fake = 0; fake < 9; fake++)
    {
        fakerow->setrows(fake, mat[fake]);
        fakecol->setcols(fake, mat2[fake]);
        fakebox->setboxs(fake, mat3[fake]);
    }

    /* Find the important row/column/box numbers (the first or next zero we find) and analyze them. */
    int important[3] = {-1, -1, -1};
    int skiprow = -1;
    int skipcol = -1;

    int count = 0;
    bool act = false;

    do
    {
        int* a = find_important(*fakerow, skiprow, skipcol);

        important[0] = a[0];
        important[1] = a[1];
        important[2] = a[2];

        if (important[0] > skiprow)
        {
            skipcol = -1;
        }
        else
        {
            skipcol = important[1];
        }

        skiprow = important[0];

        std::tuple t = intermediate_row_value_checking(*fakerow, important[0], *fakecol, *fakebox);
        bool verify1 = std::get<0>(t);
        Rows newFakerow = std::get<1>(t);

        std::tuple u = intermediate_col_value_checking(*fakerow, *fakecol, important[1], *fakebox);
        bool verify2 = std::get<0>(u);
        Cols newFakecol = std::get<1>(u);

        std::tuple v = intermediate_box_value_checking(*fakerow, *fakecol, *fakebox, important[2]);
        bool verify3 = std::get<0>(v);
        Boxs newFakebox = std::get<1>(v);

        if (verify1)
        {
            fakerow->setrows(important[0], newFakerow.getrows(important[0]));
            fakecol = rows_to_cols(fakecol, fakerow->getmatrix());
            fakebox = rows_to_boxs(fakebox, fakerow->getmatrix());
            act = true;
            count++;
        }

        else if (verify2)
        {
            fakecol->setcols(important[1], newFakecol.getcols(important[1]));
            fakerow = cols_to_rows(fakerow, fakecol->getmatrix());
            fakebox = cols_to_boxs(fakebox, fakecol->getmatrix());
            act = true;
            count++;
        }

        else if (verify3)
        {
            fakebox->setboxs(important[2], newFakebox.getboxs(important[2]));
            fakerow = boxs_to_rows(fakerow, fakebox->getmatrix());
            fakecol = boxs_to_cols(fakecol, fakebox->getmatrix());
            act = true;
            count++;
        }

        // If direct analysis doesn't work, see if we can infer a value and solve with that.
        else
        {
            std::tuple q = intermediate_inference_checking(*fakerow, *fakecol, *fakebox, important[2]);
            act = std::get<0>(q);
            *fakebox = std::get<1>(q);

            if (act)
            {
                fakerow = boxs_to_rows(fakerow, fakebox->getmatrix());
                fakecol = boxs_to_cols(fakecol, fakebox->getmatrix());
            }

            count++;
            if (count == 81)
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("We are maxing out intermediate solver.");
                msg.exec();
            }
        }
    }
    while ((act == false) && (count < 81));

    return std::make_tuple(act, fakerow->getmatrix());
}

std::tuple<bool, int, int, int> advanced_overlap_row_checking(Rows fakerow, std::tuple<int, int, int> search_num)
{
    /* This is the possibility checker, to find any Alternate Pairs.
     * It takes the original row/column for a pair and searches the others for a match to the number we are looking for.
     * Output is either true (and which row has the overlap) or false (and 0).
     */


    std::tuple a = search_num;
    int row_num = std::get<0>(a);
    int col_num = std::get<1>(a);
    int find_num = std::get<2>(a);

    bool match = false;
    int row = 0;
    int col = 0;

    // We need to find all the zeros in our current row, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    for (int scan = 0; scan < 9; scan++)
    {
        int* row_time_saver = fakerow.getrows(scan);

        // We now have the number and locations of each zero.
        // Create and control the size of the possibility-tracking matrix.
        bool possibilities[9][9] = {{0}};

        // We need to set if a zero can be a one, a two, etc.
        bool one = false;
        bool two = false;
        bool three = false;
        bool four = false;
        bool five = false;
        bool six = false;
        bool seven = false;
        bool eight = false;
        bool nine = false;

        // Check if the row already has each number. ("Does this row already have a 1? Do they have a 2?", etc)
        one = fakerow.has_number(1, row_time_saver);
        two = fakerow.has_number(2, row_time_saver);
        three = fakerow.has_number(3, row_time_saver);
        four = fakerow.has_number(4, row_time_saver);
        five = fakerow.has_number(5, row_time_saver);
        six = fakerow.has_number(6, row_time_saver);
        seven = fakerow.has_number(7, row_time_saver);
        eight = fakerow.has_number(8, row_time_saver);
        nine = fakerow.has_number(9, row_time_saver);

        // Set the matrix of possbilities for each zero in our box.
        for (int w = 0; w < 9; w++)
        {
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }

        // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
        int alpha = 0;
        int beta = 0;
        int gamma = 0;
        int delta = 0;
        int epsilon = 0;
        int zeta = 0;
        int eta = 0;
        int theta = 0;
        int iota = 0;

        int a[9] = {0};
        int b[9] = {0};
        int c[9] = {0};
        int d[9] = {0};
        int e[9] = {0};
        int f[9] = {0};
        int g[9] = {0};
        int h[9] = {0};
        int i[9] = {0};

        for (int ye = 0; ye < 9; ye++)
        {
            if (possibilities[ye][0])
            {
                alpha += 1;
                a[ye] = ye;
            }
            if (possibilities[ye][1])
            {
                beta += 1;
                b[ye] = ye;
            }
            if (possibilities[ye][2])
            {
                gamma += 1;
                c[ye] = ye;
            }
            if (possibilities[ye][3])
            {
                delta += 1;
                d[ye] = ye;
            }
            if (possibilities[ye][4])
            {
                epsilon += 1;
                e[ye] = ye;
            }
            if (possibilities[ye][5])
            {
                zeta += 1;
                f[ye] = ye;
            }
            if (possibilities[ye][6])
            {
                eta += 1;
                g[ye] = ye;
            }
            if (possibilities[ye][7])
            {
                theta += 1;
                h[ye] = ye;
            }
            if (possibilities[ye][8])
            {
                iota += 1;
                i[ye] = ye;
            }
        }

        for (int z = 0; z < 9; z++)
        {
            if (a[z] == find_num && alpha == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && beta == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && gamma == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && delta == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && epsilon == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && zeta == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && eta == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && theta == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else if (a[z] == find_num && iota == 2 && z == col_num && scan != row_num)
            {
                match = true;
                row = scan;
                col = z;
            }
            else
            {
                continue;
            }

        }
    }

    return std::make_tuple(match, row, col, find_num);
}

std::tuple<bool, int, int, int> advanced_overlap_col_checking(Cols fakecol, std::tuple<int, int, int> search_num)
{
    /* This is the possibility checker, to find any Alternate Pairs.
     * It takes the original row/column for a pair and searches the others for a match to the number we are looking for.
     * Output is either true (and which row has the overlap) or false (and 0).
     */


    std::tuple a = search_num;
    int row_num = std::get<0>(a);
    int col_num = std::get<1>(a);
    int find_num = std::get<2>(a);

    bool match = false;
    int row = 0;
    int col = 0;

    // We need to find all the zeros in our current row, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    for (int scan = 0; scan < 9; scan++)
    {
        int* col_time_saver = fakecol.getcols(scan);

        // We now have the number and locations of each zero.
        // Create and control the size of the possibility-tracking matrix.
        bool possibilities[9][9] = {{0}};

        // We need to set if a zero can be a one, a two, etc.
        bool one = false;
        bool two = false;
        bool three = false;
        bool four = false;
        bool five = false;
        bool six = false;
        bool seven = false;
        bool eight = false;
        bool nine = false;

        // Check if the row already has each number. ("Does this row already have a 1? Do they have a 2?", etc)
        one = fakecol.has_number(1, col_time_saver);
        two = fakecol.has_number(2, col_time_saver);
        three = fakecol.has_number(3, col_time_saver);
        four = fakecol.has_number(4, col_time_saver);
        five = fakecol.has_number(5, col_time_saver);
        six = fakecol.has_number(6, col_time_saver);
        seven = fakecol.has_number(7, col_time_saver);
        eight = fakecol.has_number(8, col_time_saver);
        nine = fakecol.has_number(9, col_time_saver);

        // Set the matrix of possbilities for each zero in our box.
        for (int w = 0; w < 9; w++)
        {
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }

        // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
        int alpha = 0;
        int beta = 0;
        int gamma = 0;
        int delta = 0;
        int epsilon = 0;
        int zeta = 0;
        int eta = 0;
        int theta = 0;
        int iota = 0;

        int a[9] = {0};
        int b[9] = {0};
        int c[9] = {0};
        int d[9] = {0};
        int e[9] = {0};
        int f[9] = {0};
        int g[9] = {0};
        int h[9] = {0};
        int i[9] = {0};

        for (int ye = 0; ye < 9; ye++)
        {
            if (possibilities[ye][0])
            {
                alpha += 1;
                a[ye] = ye;
            }
            if (possibilities[ye][1])
            {
                beta += 1;
                b[ye] = ye;
            }
            if (possibilities[ye][2])
            {
                gamma += 1;
                c[ye] = ye;
            }
            if (possibilities[ye][3])
            {
                delta += 1;
                d[ye] = ye;
            }
            if (possibilities[ye][4])
            {
                epsilon += 1;
                e[ye] = ye;
            }
            if (possibilities[ye][5])
            {
                zeta += 1;
                f[ye] = ye;
            }
            if (possibilities[ye][6])
            {
                eta += 1;
                g[ye] = ye;
            }
            if (possibilities[ye][7])
            {
                theta += 1;
                h[ye] = ye;
            }
            if (possibilities[ye][8])
            {
                iota += 1;
                i[ye] = ye;
            }
        }

        for (int z = 0; z < 9; z++)
        {
            if (a[z] == find_num && alpha == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && beta == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && gamma == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && delta == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && epsilon == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && zeta == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && eta == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && theta == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else if (a[z] == find_num && iota == 2 && z == row_num && scan != col_num)
            {
                match = true;
                col = scan;
                row = z;
            }
            else
            {
                continue;
            }

        }
    }

    return std::make_tuple(match, row, col, find_num);
}

std::tuple<bool, Rows> advanced_row_value_checking_AlternatePairs(Rows fakerow, int row_num, Cols fakecol, Boxs fakebox)
{
    /*
     * This is the checker for Alternate Pairs, to limit the number of possibilities as much as possible, and see what we can do.
     * If it can solve for a particular square, it adds the number and returns the new Row set.
     * If it cannot solve anything, it returns the original Row set.
     */

    // We need to find all the zeros in our current row, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    int* row_time_saver = fakerow.getrows(row_num);

    int* zero_loc = where_zeros(row_time_saver);

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};

    bool change = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* col_time_saver = fakecol.getcols(w);
            int* box_time_saver = nullptr;

            switch (row_num)
            {
                case 0:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 1:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 5:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 6:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 7:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 8:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
            }

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
    int alpha = 0;
    int beta = 0;
    int gamma = 0;
    int delta = 0;
    int epsilon = 0;
    int zeta = 0;
    int eta = 0;
    int theta = 0;
    int iota = 0;

    int a[9] = {0};
    int b[9] = {0};
    int c[9] = {0};
    int d[9] = {0};
    int e[9] = {0};
    int f[9] = {0};
    int g[9] = {0};
    int h[9] = {0};
    int i[9] = {0};

    std::tuple<bool, int, int, int> pair = std::make_tuple(false, 0, 0, 0);

    for (int ye = 0; ye < 9; ye++)
    {
        if (possibilities[ye][0])
        {
            alpha += 1;
            a[ye] = ye;
        }
        if (possibilities[ye][1])
        {
            beta += 1;
            b[ye] = ye;
        }
        if (possibilities[ye][2])
        {
            gamma += 1;
            c[ye] = ye;
        }
        if (possibilities[ye][3])
        {
            delta += 1;
            d[ye] = ye;
        }
        if (possibilities[ye][4])
        {
            epsilon += 1;
            e[ye] = ye;
        }
        if (possibilities[ye][5])
        {
            zeta += 1;
            f[ye] = ye;
        }
        if (possibilities[ye][6])
        {
            eta += 1;
            g[ye] = ye;
        }
        if (possibilities[ye][7])
        {
            theta += 1;
            h[ye] = ye;
        }
        if (possibilities[ye][8])
        {
            iota += 1;
            i[ye] = ye;
        }
    }

    // If only two zeros can be a specific number, check other rows for number-overlap
    if (alpha == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (a[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, a[yi], 1));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (beta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (b[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, b[yi], 2));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (gamma == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (c[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, c[yi], 3));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (delta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (d[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, d[yi], 4));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (epsilon == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (e[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, e[yi], 5));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (zeta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (f[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, f[yi], 6));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (eta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (g[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, g[yi], 7));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (theta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (h[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, h[yi], 8));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (iota == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (i[yi] != 0)
            {
                pair = advanced_overlap_row_checking(fakerow, std::make_tuple(row_num, i[yi], 9));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    // If there is number overlap, remove that possibility from all other rows in the corresponding columns

    /* pair now contains: (1) was there a match, (2) which row matched, (3) which column had the duplicate, and (4) what number was doubled.
     * we also have our own local row_num that we matched to, we have a-i for what number was doubled, and the index of a-i can be used for
     * the other column. Not sure how that will track if the second column is the one with the duplication though.
     */
    bool matt = std::get<0>(pair);
    int roww = std::get<1>(pair);
    int coll = std::get<2>(pair);
    int numm = std::get<3>(pair);

    if (matt)
    {
        // We need to find all the zeros in our column, and know their location.
        // As named, the time saver variables save time by reducing function calls dramatically.
        int* ncol_time_saver = fakecol.getcols(coll);

        int nnum_zeros = count_zeros(ncol_time_saver);
        if (nnum_zeros == 0)
        {
            return std::make_tuple(false, fakerow);
        }
        int* nzero_loc = where_zeros(ncol_time_saver);

        // We now have the number and locations of each zero.
        // Create and control the size of the possibility-tracking matrix.
        bool npossibilities[9][9] = {{0}};

        // We need to set if a zero can be a one, a two, etc.
        bool none = false;
        bool ntwo = false;
        bool nthree = false;
        bool nfour = false;
        bool nfive = false;
        bool nsix = false;
        bool nseven = false;
        bool neight = false;
        bool nnine = false;

        for (int w = 0; w < 9; w++)
        {
            if (nzero_loc[w] != 1)
            {
                continue;
            }
            else
            {
                int* nrow_time_saver = fakerow.getrows(w);
                int* nbox_time_saver = nullptr;

                switch (coll)
                {
                    case 0:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 1:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 4:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 5:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 6:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 7:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 8:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                }

                // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
                none = (fakerow.has_number(1, nrow_time_saver) || fakecol.has_number(1, ncol_time_saver) || fakebox.has_number(1, nbox_time_saver));
                ntwo = (fakerow.has_number(2, nrow_time_saver) || fakecol.has_number(2, ncol_time_saver) || fakebox.has_number(2, nbox_time_saver));
                nthree = (fakerow.has_number(3, nrow_time_saver) || fakecol.has_number(3, ncol_time_saver) || fakebox.has_number(3, nbox_time_saver));
                nfour = (fakerow.has_number(4, nrow_time_saver) || fakecol.has_number(4, ncol_time_saver) || fakebox.has_number(4, nbox_time_saver));
                nfive = (fakerow.has_number(5, nrow_time_saver) || fakecol.has_number(5, ncol_time_saver) || fakebox.has_number(5, nbox_time_saver));
                nsix = (fakerow.has_number(6, nrow_time_saver) || fakecol.has_number(6, ncol_time_saver) || fakebox.has_number(6, nbox_time_saver));
                nseven = (fakerow.has_number(7, nrow_time_saver) || fakecol.has_number(7, ncol_time_saver) || fakebox.has_number(7, nbox_time_saver));
                neight = (fakerow.has_number(8, nrow_time_saver) || fakecol.has_number(8, ncol_time_saver) || fakebox.has_number(8, nbox_time_saver));
                nnine = (fakerow.has_number(9, nrow_time_saver) || fakecol.has_number(9, ncol_time_saver) || fakebox.has_number(9, nbox_time_saver));

                // Set the matrix of possbilities for each zero in our box.
                npossibilities[w][0] = !none;
                npossibilities[w][1] = !ntwo;
                npossibilities[w][2] = !nthree;
                npossibilities[w][3] = !nfour;
                npossibilities[w][4] = !nfive;
                npossibilities[w][5] = !nsix;
                npossibilities[w][6] = !nseven;
                npossibilities[w][7] = !neight;
                npossibilities[w][8] = !nnine;
            }
        }

        // Now remove possibilities based on alternate pairs
        switch (numm)
        {
            case 1:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][0] = false;
                    }
                }
                break;
            }
            case 2:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][1] = false;
                    }
                }
                break;
            }
            case 3:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][2] = false;
                    }
                }
                break;
            }
            case 4:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][3] = false;
                    }
                }
                break;
            }
            case 5:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][4] = false;
                    }
                }
                break;
            }
            case 6:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][5] = false;
                    }
                }
                break;
            }
            case 7:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][6] = false;
                    }
                }
                break;
            }
            case 8:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][7] = false;
                    }
                }
                break;
            }
            case 9:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == roww || x == row_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][8] = false;
                    }
                }
                break;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Houston, we have a problem with removing Alternate pairs");
                msg.exec();
                break;
            }
        }

        // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
        int nalpha = 0;
        int nbeta = 0;
        int ngamma = 0;
        int ndelta = 0;
        int nepsilon = 0;
        int nzeta = 0;
        int neta = 0;
        int ntheta = 0;
        int niota = 0;

        for (int ne = 0; ne < 9; ne++)
        {
            if (npossibilities[ne][0])
            {
                nalpha += 1;
            }
            if (npossibilities[ne][1])
            {
                nbeta += 1;
            }
            if (npossibilities[ne][2])
            {
                ngamma += 1;
            }
            if (npossibilities[ne][3])
            {
                ndelta += 1;
            }
            if (npossibilities[ne][4])
            {
                nepsilon += 1;
            }
            if (npossibilities[ne][5])
            {
                nzeta += 1;
            }
            if (npossibilities[ne][6])
            {
                neta += 1;
            }
            if (npossibilities[ne][7])
            {
                ntheta += 1;
            }
            if (npossibilities[ne][8])
            {
                niota += 1;
            }
        }

        // Replace anything that can only be one thing.
        if (nalpha == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][0])
                {
                    ncol_time_saver[r] = 1;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (nbeta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][1])
                {
                    ncol_time_saver[r] = 2;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (ngamma == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][2])
                {
                    ncol_time_saver[r] = 3;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (ndelta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][3])
                {
                    ncol_time_saver[r] = 4;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (nepsilon == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][4])
                {
                    ncol_time_saver[r] = 5;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (nzeta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][5])
                {
                    ncol_time_saver[r] = 6;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (neta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][6])
                {
                    ncol_time_saver[r] = 7;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (ntheta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][7])
                {
                    ncol_time_saver[r] = 8;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }
        if (niota == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][8])
                {
                    ncol_time_saver[r] = 9;
                    fakecol.setcols(coll, ncol_time_saver);
                    change = true;
                }
            }
        }

        // If we did something, return true, otherwise, return false. Return the matrix either way.
        if (change == true)
        {
            fakerow = *(cols_to_rows(&fakerow, fakecol.getmatrix()));
            return std::make_tuple(true, fakerow);
        }
        else
        {
            return std::make_tuple(false, fakerow);
        }
    }
    else
    {
        return std::make_tuple(false, fakerow);
    }
}

std::tuple<bool, Cols> advanced_col_value_checking_AlternatePairs(Rows fakerow, Cols fakecol, int col_num, Boxs fakebox)
{
    /*
     * This is the checker for Alternate Pairs, to limit the number of possibilities as much as possible, and see what we can do.
     * If it can solve for a particular square, it adds the number and returns the new Row set.
     * If it cannot solve anything, it returns the original Row set.
     */

    // We need to find all the zeros in our current row, and know their location.
    // As named, the time saver variables save time by reducing function calls dramatically.
    int* col_time_saver = fakecol.getcols(col_num);

    int* zero_loc = where_zeros(col_time_saver);

    // We now have the number and locations of each zero.
    // Create and control the size of the possibility-tracking matrix.
    bool possibilities[9][9] = {{0}};

    bool change = false;

    // We need to set if a zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    for (int w = 0; w < 9; w++)
    {
        if (zero_loc[w] != 1)
        {
            continue;
        }
        else
        {
            int* row_time_saver = fakerow.getrows(w);
            int* box_time_saver = nullptr;

            switch (col_num)
            {
                case 0:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 1:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(0);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(3);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(6);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 5:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(1);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(4);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(7);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 6:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 7:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
                case 8:
                {
                    switch (w)
                    {
                        case 0:
                        case 1:
                        case 2:
                        {
                            box_time_saver = fakebox.getboxs(2);
                            break;
                        }
                        case 3:
                        case 4:
                        case 5:
                        {
                            box_time_saver = fakebox.getboxs(5);
                            break;
                        }
                        case 6:
                        case 7:
                        case 8:
                        {
                            box_time_saver = fakebox.getboxs(8);
                            break;
                        }
                        default:
                        {
                            QMessageBox msg;
                            msg.setStandardButtons(QMessageBox::Ok);
                            msg.setText("Something is very wrong with assinging box values.");
                            msg.exec();
                            break;
                        }
                    }
                    break;
                }
            }

            // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
            one = (fakerow.has_number(1, row_time_saver) || fakecol.has_number(1, col_time_saver) || fakebox.has_number(1, box_time_saver));
            two = (fakerow.has_number(2, row_time_saver) || fakecol.has_number(2, col_time_saver) || fakebox.has_number(2, box_time_saver));
            three = (fakerow.has_number(3, row_time_saver) || fakecol.has_number(3, col_time_saver) || fakebox.has_number(3, box_time_saver));
            four = (fakerow.has_number(4, row_time_saver) || fakecol.has_number(4, col_time_saver) || fakebox.has_number(4, box_time_saver));
            five = (fakerow.has_number(5, row_time_saver) || fakecol.has_number(5, col_time_saver) || fakebox.has_number(5, box_time_saver));
            six = (fakerow.has_number(6, row_time_saver) || fakecol.has_number(6, col_time_saver) || fakebox.has_number(6, box_time_saver));
            seven = (fakerow.has_number(7, row_time_saver) || fakecol.has_number(7, col_time_saver) || fakebox.has_number(7, box_time_saver));
            eight = (fakerow.has_number(8, row_time_saver) || fakecol.has_number(8, col_time_saver) || fakebox.has_number(8, box_time_saver));
            nine = (fakerow.has_number(9, row_time_saver) || fakecol.has_number(9, col_time_saver) || fakebox.has_number(9, box_time_saver));

            // Set the matrix of possbilities for each zero in our box.
            possibilities[w][0] = !one;
            possibilities[w][1] = !two;
            possibilities[w][2] = !three;
            possibilities[w][3] = !four;
            possibilities[w][4] = !five;
            possibilities[w][5] = !six;
            possibilities[w][6] = !seven;
            possibilities[w][7] = !eight;
            possibilities[w][8] = !nine;
        }
    }

    // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
    int alpha = 0;
    int beta = 0;
    int gamma = 0;
    int delta = 0;
    int epsilon = 0;
    int zeta = 0;
    int eta = 0;
    int theta = 0;
    int iota = 0;

    int a[9] = {0};
    int b[9] = {0};
    int c[9] = {0};
    int d[9] = {0};
    int e[9] = {0};
    int f[9] = {0};
    int g[9] = {0};
    int h[9] = {0};
    int i[9] = {0};

    std::tuple<bool, int, int, int> pair = std::make_tuple(false, 0, 0, 0);

    for (int ye = 0; ye < 9; ye++)
    {
        if (possibilities[ye][0])
        {
            alpha += 1;
            a[ye] = ye;
        }
        if (possibilities[ye][1])
        {
            beta += 1;
            b[ye] = ye;
        }
        if (possibilities[ye][2])
        {
            gamma += 1;
            c[ye] = ye;
        }
        if (possibilities[ye][3])
        {
            delta += 1;
            d[ye] = ye;
        }
        if (possibilities[ye][4])
        {
            epsilon += 1;
            e[ye] = ye;
        }
        if (possibilities[ye][5])
        {
            zeta += 1;
            f[ye] = ye;
        }
        if (possibilities[ye][6])
        {
            eta += 1;
            g[ye] = ye;
        }
        if (possibilities[ye][7])
        {
            theta += 1;
            h[ye] = ye;
        }
        if (possibilities[ye][8])
        {
            iota += 1;
            i[ye] = ye;
        }
    }

    // If only two zeros can be a specific number, check other rows for number-overlap
    if (alpha == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (a[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(a[yi], col_num, 1));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (beta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (b[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(b[yi], col_num, 2));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (gamma == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (c[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(c[yi], col_num, 3));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (delta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (d[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(d[yi], col_num, 4));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (epsilon == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (e[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(e[yi], col_num, 5));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (zeta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (f[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(f[yi], col_num, 6));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (eta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (g[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(g[yi], col_num, 7));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (theta == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (h[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(h[yi], col_num, 8));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    if (iota == 2)
    {
        for (int yi = 0; yi < 9; yi++)
        {
            if (i[yi] != 0)
            {
                pair = advanced_overlap_col_checking(fakecol, std::make_tuple(i[yi], col_num, 9));

                bool ma = std::get<0>(pair);

                if (ma)
                {
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    // If there is number overlap, remove that possibility from all other rows in the corresponding columns

    /* pair now contains: (1) was there a match, (2) which row matched, (3) which column had the duplicate, and (4) what number was doubled.
                * we also have our own local row_num that we matched to, we have a-i for what number was doubled, and the index of a-i can be used for
                * the other column. Not sure how that will track if the second column is the one with the duplication though.
                */
    bool matt = std::get<0>(pair);
    int roww = std::get<1>(pair);
    int coll = std::get<2>(pair);
    int numm = std::get<3>(pair);

    if (matt)
    {
        // We need to find all the zeros in our column, and know their location.
        // As named, the time saver variables save time by reducing function calls dramatically.
        int* nrow_time_saver = fakerow.getrows(roww);

        int nnum_zeros = count_zeros(nrow_time_saver);
        if (nnum_zeros == 0)
        {
            return std::make_tuple(false, fakecol);
        }
        int* nzero_loc = where_zeros(nrow_time_saver);

        // We now have the number and locations of each zero.
        // Create and control the size of the possibility-tracking matrix.
        bool npossibilities[9][9] = {{0}};

        // We need to set if a zero can be a one, a two, etc.
        bool none = false;
        bool ntwo = false;
        bool nthree = false;
        bool nfour = false;
        bool nfive = false;
        bool nsix = false;
        bool nseven = false;
        bool neight = false;
        bool nnine = false;

        for (int w = 0; w < 9; w++)
        {
            if (nzero_loc[w] != 1)
            {
                continue;
            }
            else
            {
                int* ncol_time_saver = fakecol.getcols(w);
                int* nbox_time_saver = nullptr;

                switch (roww)
                {
                    case 0:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 1:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(0);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(1);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(2);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 4:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 5:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(3);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(4);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(5);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 6:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 7:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                    case 8:
                    {
                        switch (w)
                        {
                            case 0:
                            case 1:
                            case 2:
                            {
                                nbox_time_saver = fakebox.getboxs(6);
                                break;
                            }
                            case 3:
                            case 4:
                            case 5:
                            {
                                nbox_time_saver = fakebox.getboxs(7);
                                break;
                            }
                            case 6:
                            case 7:
                            case 8:
                            {
                                nbox_time_saver = fakebox.getboxs(8);
                                break;
                            }
                            default:
                            {
                                QMessageBox msg;
                                msg.setStandardButtons(QMessageBox::Ok);
                                msg.setText("Something is very wrong with assinging box values.");
                                msg.exec();
                                break;
                            }
                        }
                        break;
                    }
                }

                // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
                none = (fakerow.has_number(1, nrow_time_saver) || fakecol.has_number(1, ncol_time_saver) || fakebox.has_number(1, nbox_time_saver));
                ntwo = (fakerow.has_number(2, nrow_time_saver) || fakecol.has_number(2, ncol_time_saver) || fakebox.has_number(2, nbox_time_saver));
                nthree = (fakerow.has_number(3, nrow_time_saver) || fakecol.has_number(3, ncol_time_saver) || fakebox.has_number(3, nbox_time_saver));
                nfour = (fakerow.has_number(4, nrow_time_saver) || fakecol.has_number(4, ncol_time_saver) || fakebox.has_number(4, nbox_time_saver));
                nfive = (fakerow.has_number(5, nrow_time_saver) || fakecol.has_number(5, ncol_time_saver) || fakebox.has_number(5, nbox_time_saver));
                nsix = (fakerow.has_number(6, nrow_time_saver) || fakecol.has_number(6, ncol_time_saver) || fakebox.has_number(6, nbox_time_saver));
                nseven = (fakerow.has_number(7, nrow_time_saver) || fakecol.has_number(7, ncol_time_saver) || fakebox.has_number(7, nbox_time_saver));
                neight = (fakerow.has_number(8, nrow_time_saver) || fakecol.has_number(8, ncol_time_saver) || fakebox.has_number(8, nbox_time_saver));
                nnine = (fakerow.has_number(9, nrow_time_saver) || fakecol.has_number(9, ncol_time_saver) || fakebox.has_number(9, nbox_time_saver));

                // Set the matrix of possbilities for each zero in our box.
                npossibilities[w][0] = !none;
                npossibilities[w][1] = !ntwo;
                npossibilities[w][2] = !nthree;
                npossibilities[w][3] = !nfour;
                npossibilities[w][4] = !nfive;
                npossibilities[w][5] = !nsix;
                npossibilities[w][6] = !nseven;
                npossibilities[w][7] = !neight;
                npossibilities[w][8] = !nnine;
            }
        }

        // Now remove possibilities based on alternate pairs
        switch (numm)
        {
            case 1:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][0] = false;
                    }
                }
                break;
            }
            case 2:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][1] = false;
                    }
                }
                break;
            }
            case 3:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][2] = false;
                    }
                }
                break;
            }
            case 4:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][3] = false;
                    }
                }
                break;
            }
            case 5:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][4] = false;
                    }
                }
                break;
            }
            case 6:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][5] = false;
                    }
                }
                break;
            }
            case 7:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][6] = false;
                    }
                }
                break;
            }
            case 8:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][7] = false;
                    }
                }
                break;
            }
            case 9:
            {
                for (int x = 0; x < 9; x++)
                {
                    if (x == coll || x == col_num)
                    {
                        continue;
                    }
                    else
                    {
                        npossibilities[x][8] = false;
                    }
                }
                break;
            }
            default:
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Houston, we have a problem with removing Alternate pairs");
                msg.exec();
                break;
            }
        }

        // Determine the number of zeros that can be a given number (3 zeros could be a 1, 1 zero could be a 4, etc).
        int nalpha = 0;
        int nbeta = 0;
        int ngamma = 0;
        int ndelta = 0;
        int nepsilon = 0;
        int nzeta = 0;
        int neta = 0;
        int ntheta = 0;
        int niota = 0;

        for (int ne = 0; ne < 9; ne++)
        {
            if (npossibilities[ne][0])
            {
                nalpha += 1;
            }
            if (npossibilities[ne][1])
            {
                nbeta += 1;
            }
            if (npossibilities[ne][2])
            {
                ngamma += 1;
            }
            if (npossibilities[ne][3])
            {
                ndelta += 1;
            }
            if (npossibilities[ne][4])
            {
                nepsilon += 1;
            }
            if (npossibilities[ne][5])
            {
                nzeta += 1;
            }
            if (npossibilities[ne][6])
            {
                neta += 1;
            }
            if (npossibilities[ne][7])
            {
                ntheta += 1;
            }
            if (npossibilities[ne][8])
            {
                niota += 1;
            }
        }

        // Replace anything that can only be one thing.
        if (nalpha == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][0])
                {
                    nrow_time_saver[r] = 1;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (nbeta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][1])
                {
                    nrow_time_saver[r] = 2;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (ngamma == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][2])
                {
                    nrow_time_saver[r] = 3;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (ndelta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][3])
                {
                    nrow_time_saver[r] = 4;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (nepsilon == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][4])
                {
                    nrow_time_saver[r] = 5;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (nzeta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][5])
                {
                    nrow_time_saver[r] = 6;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (neta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][6])
                {
                    nrow_time_saver[r] = 7;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (ntheta == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][7])
                {
                    nrow_time_saver[r] = 8;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }
        if (niota == 1)
        {
            for (int r = 0; r < 9; r++)
            {
                if (npossibilities[r][8])
                {
                    nrow_time_saver[r] = 9;
                    fakerow.setrows(roww, nrow_time_saver);
                    change = true;
                }
            }
        }

        if (change == true)
        {
            fakecol = *(rows_to_cols(&fakecol, fakerow.getmatrix()));
            return std::make_tuple(true, fakecol);
        }
        else
        {
            return std::make_tuple(false, fakecol);
        }
    }
    else
    {
        return std::make_tuple(false, fakecol);
    }
}

std::tuple<bool, int**> advanced_value_solving(int** mat, int** mat2, int** mat3)
{

    /*
     * This looks at whether there are advanced tricks going on within a set.
     * For instance, Alternate Pairs, XY-Wing, etc.
     * Therefore we can eliminate possibilities and solve for something.
     *
     * Because it looks for patterns in the overall puzzle, we may need multiple sets to be invoked, so that we check everything.
     */

    /* Setup dummy objects so that we can use their tools. */
    Rows* fakerow = new Rows();
    Cols* fakecol = new Cols();
    Boxs* fakebox = new Boxs();

    /* Populate the dummies with the correct information. */
    for (int fake = 0; fake < 9; fake++)
    {
        fakerow->setrows(fake, mat[fake]);
        fakecol->setcols(fake, mat2[fake]);
        fakebox->setboxs(fake, mat3[fake]);
    }

    /* Find the important row/column/box numbers (the first or next zero we find) and analyze them. */
    int important[] = {-1, -1, -1};
    int skiprow = -1;
    int skipcol = -1;

    int count = 0;
    bool act = false;

    do
    {
        int* a = find_important(*fakerow, skiprow, skipcol);

        important[0] = a[0];
        important[1] = a[1];
        important[2] = a[2];

        if (important[0] > skiprow)
        {
            skipcol = -1;
        }
        else
        {
            skipcol = important[1];
        }

        skiprow = important[0];

        std::tuple r = advanced_row_value_checking_AlternatePairs(*fakerow, important[0], *fakecol, *fakebox);
        std::tuple c = advanced_col_value_checking_AlternatePairs(*fakerow, *fakecol, important[1], *fakebox);

        bool verify1 = std::get<0>(r);
        Rows newFakerow = std::get<1>(r);

        bool verify2 = std::get<0>(c);
        Cols newFakecol = std::get<1>(c);

        if (verify1)
        {
            fakerow->setrows(important[0], newFakerow.getrows(important[0]));
            fakecol = rows_to_cols(fakecol, fakerow->getmatrix());
            fakebox = rows_to_boxs(fakebox, fakerow->getmatrix());
            act = true;
            count++;
        }

        else if (verify2)
        {
            fakecol->setcols(important[1], newFakecol.getcols(important[1]));
            fakerow = cols_to_rows(fakerow, fakecol->getmatrix());
            fakebox = cols_to_boxs(fakebox, fakecol->getmatrix());
            act = true;
            count++;
        }

        // If direct analysis doesn't work, KILL IT WITH ABSOLUTE POWEEERRRRR
        else
        {
            count++;
            if (count == 81)
            {
                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("We are maxing out intermediate solver.");
                msg.exec();
            }
        }
    }
    while ((act == false) && (count < 81));

    return std::make_tuple(act, fakerow->getmatrix());
}

/*------------------------------------------------------------------------------------------------------------------------*/
/* Cheat Mode */
/*------------------------------------------------------------------------------------------------------------------------*/

bool* possibilities(Rows *fakerow, int row_num, Cols *fakecol, int col_num, Boxs *fakebox)
{
    int* row_time_saver = fakerow->getrows(row_num);
    int* col_time_saver = fakecol->getcols(col_num);

    // Create and control the size of the possibility-tracking matrix.
    static bool possibilities[9] = {0};

    // We need to set if the zero can be a one, a two, etc.
    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    int* box_time_saver;

    switch (row_num)
    {
        case 0:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(0);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(1);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(2);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 1:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(0);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(1);
                    break;
                }
                case 6:
                case 7:
                case 8:
                    box_time_saver = fakebox->getboxs(2);
                    break;
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 2:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(0);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(1);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(2);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 3:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(3);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(4);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(5);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 4:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(3);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(4);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(5);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 5:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(3);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(4);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(5);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 6:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(6);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(7);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(8);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 7:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(6);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(7);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(8);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
        case 8:
        {
            switch (col_num)
            {
                case 0:
                case 1:
                case 2:
                {
                    box_time_saver = fakebox->getboxs(6);
                    break;
                }
                case 3:
                case 4:
                case 5:
                {
                    box_time_saver = fakebox->getboxs(7);
                    break;
                }
                case 6:
                case 7:
                case 8:
                {
                    box_time_saver = fakebox->getboxs(8);
                    break;
                }
                default:
                {
                    QMessageBox msg;
                    msg.setStandardButtons(QMessageBox::Ok);
                    msg.setText("Something is very wrong with assinging box values.");
                    msg.exec();
                    break;
                }
            }
            break;
        }
    }

    // Check if the row/column/box already has each number. ("Does this row/column/box already have a 1? Do they have a 2?", etc)
    one = (fakerow->has_number(1, row_time_saver) || fakecol->has_number(1, col_time_saver) || fakebox->has_number(1, box_time_saver));
    two = (fakerow->has_number(2, row_time_saver) || fakecol->has_number(2, col_time_saver) || fakebox->has_number(2, box_time_saver));
    three = (fakerow->has_number(3, row_time_saver) || fakecol->has_number(3, col_time_saver) || fakebox->has_number(3, box_time_saver));
    four = (fakerow->has_number(4, row_time_saver) || fakecol->has_number(4, col_time_saver) || fakebox->has_number(4, box_time_saver));
    five = (fakerow->has_number(5, row_time_saver) || fakecol->has_number(5, col_time_saver) || fakebox->has_number(5, box_time_saver));
    six = (fakerow->has_number(6, row_time_saver) || fakecol->has_number(6, col_time_saver) || fakebox->has_number(6, box_time_saver));
    seven = (fakerow->has_number(7, row_time_saver) || fakecol->has_number(7, col_time_saver) || fakebox->has_number(7, box_time_saver));
    eight = (fakerow->has_number(8, row_time_saver) || fakecol->has_number(8, col_time_saver) || fakebox->has_number(8, box_time_saver));
    nine = (fakerow->has_number(9, row_time_saver) || fakecol->has_number(9, col_time_saver) || fakebox->has_number(9, box_time_saver));

    // Set the matrix of possbilities for each zero in our box.
    possibilities[0] = !one;
    possibilities[1] = !two;
    possibilities[2] = !three;
    possibilities[3] = !four;
    possibilities[4] = !five;
    possibilities[5] = !six;
    possibilities[6] = !seven;
    possibilities[7] = !eight;
    possibilities[8] = !nine;

    return possibilities;
}

bool has_duplicates(int* vect)
{
    int count = 0;

    for (int numb = 1; numb < 10; numb++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (numb == vect[i])
            {
                count++;
            }
        }

        if (count > 1)
        {
            return true;
        }
        else
        {
            count = 0;
        }
    }

    return false;
}

bool rule_enforcer(Rows try_row, Cols try_col, Boxs try_box)
{
    bool kill_case = false;

    // Check for any duplicates in each row/column/box
    bool a_dup = has_duplicates(try_row.getrows(0));
    bool b_dup = has_duplicates(try_row.getrows(1));
    bool c_dup = has_duplicates(try_row.getrows(2));
    bool d_dup = has_duplicates(try_row.getrows(3));
    bool e_dup = has_duplicates(try_row.getrows(4));
    bool f_dup = has_duplicates(try_row.getrows(5));
    bool g_dup = has_duplicates(try_row.getrows(6));
    bool h_dup = has_duplicates(try_row.getrows(7));
    bool i_dup = has_duplicates(try_row.getrows(8));

    bool a_dup2 = has_duplicates(try_col.getcols(0));
    bool b_dup2 = has_duplicates(try_col.getcols(1));
    bool c_dup2 = has_duplicates(try_col.getcols(2));
    bool d_dup2 = has_duplicates(try_col.getcols(3));
    bool e_dup2 = has_duplicates(try_col.getcols(4));
    bool f_dup2 = has_duplicates(try_col.getcols(5));
    bool g_dup2 = has_duplicates(try_col.getcols(6));
    bool h_dup2 = has_duplicates(try_col.getcols(7));
    bool i_dup2 = has_duplicates(try_col.getcols(8));

    bool a_dup3 = has_duplicates(try_box.getboxs(0));
    bool b_dup3 = has_duplicates(try_box.getboxs(1));
    bool c_dup3 = has_duplicates(try_box.getboxs(2));
    bool d_dup3 = has_duplicates(try_box.getboxs(3));
    bool e_dup3 = has_duplicates(try_box.getboxs(4));
    bool f_dup3 = has_duplicates(try_box.getboxs(5));
    bool g_dup3 = has_duplicates(try_box.getboxs(6));
    bool h_dup3 = has_duplicates(try_box.getboxs(7));
    bool i_dup3 = has_duplicates(try_box.getboxs(8));

    // If any number is duplicated across any set, it's wrong.
    if (a_dup || b_dup || c_dup || d_dup || e_dup || f_dup || g_dup || h_dup || i_dup)
    {
        kill_case = true;
    }

    else if (a_dup2 || b_dup2 || c_dup2 || d_dup2 || e_dup2 || f_dup2 || g_dup2 || h_dup2 || i_dup2)
    {
        kill_case = true;
    }

    else if (a_dup3 || b_dup3 || c_dup3 || d_dup3 || e_dup3 || f_dup3 || g_dup3 || h_dup3 || i_dup3)
    {
        kill_case = true;

    }

    else
    {
        kill_case = false;
    }

    return kill_case;
}


/*---------------------------------------------------------------------------------------------------------------------*/

