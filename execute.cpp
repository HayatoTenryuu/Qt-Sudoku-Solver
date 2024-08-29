/*------------------------------------------------------------------
 * This file is the Definition of each class and function.
 * The include files establish the types, provide definitions,
 *      and are used functionally as well.
 *-----------------------------------------------------------------*/

// Add any needed Qt libraries here.
#include <QMessageBox>

// Add any needed C++ files here.
#include "qdatetime.h"
#include "machinery.h"
#include "mainwindow.h"

// Add any needed forms here.
#include "ui_finalwindow.h"
#include "ui_mainwindow.h"


/* --------------------------------
 * Step 0: Get access to our tools.
 --------------------------------*/
void execute(Ui::MainWindow *ui)
{
    // Get the start time
    QTime starttime = QTime::currentTime();

    /* ----------------------------------------------------
     * Step 1: Set up the initial Matrix, as a set of Rows.
     ----------------------------------------------------*/

    Rows rowset;

    int ra1[] = {ui->lineEdit11->text() != "" ? ui->lineEdit11->text().toInt() : 0,
                 ui->lineEdit12->text() != "" ? ui->lineEdit12->text().toInt() : 0,
                 ui->lineEdit13->text() != "" ? ui->lineEdit13->text().toInt() : 0,
                 ui->lineEdit14->text() != "" ? ui->lineEdit14->text().toInt() : 0,
                 ui->lineEdit15->text() != "" ? ui->lineEdit15->text().toInt() : 0,
                 ui->lineEdit16->text() != "" ? ui->lineEdit16->text().toInt() : 0,
                 ui->lineEdit17->text() != "" ? ui->lineEdit17->text().toInt() : 0,
                 ui->lineEdit18->text() != "" ? ui->lineEdit18->text().toInt() : 0,
                 ui->lineEdit19->text() != "" ? ui->lineEdit19->text().toInt() : 0};
    rowset.setrows(0,ra1);

    int ra2[] = {ui->lineEdit21->text() != "" ? ui->lineEdit21->text().toInt() : 0,
                 ui->lineEdit22->text() != "" ? ui->lineEdit22->text().toInt() : 0,
                 ui->lineEdit23->text() != "" ? ui->lineEdit23->text().toInt() : 0,
                 ui->lineEdit24->text() != "" ? ui->lineEdit24->text().toInt() : 0,
                 ui->lineEdit25->text() != "" ? ui->lineEdit25->text().toInt() : 0,
                 ui->lineEdit26->text() != "" ? ui->lineEdit26->text().toInt() : 0,
                 ui->lineEdit27->text() != "" ? ui->lineEdit27->text().toInt() : 0,
                 ui->lineEdit28->text() != "" ? ui->lineEdit28->text().toInt() : 0,
                 ui->lineEdit29->text() != "" ? ui->lineEdit29->text().toInt() : 0};
    rowset.setrows(1, ra2);

    int ra3[] = {ui->lineEdit31->text() != "" ? ui->lineEdit31->text().toInt() : 0,
                 ui->lineEdit32->text() != "" ? ui->lineEdit32->text().toInt() : 0,
                 ui->lineEdit33->text() != "" ? ui->lineEdit33->text().toInt() : 0,
                 ui->lineEdit34->text() != "" ? ui->lineEdit34->text().toInt() : 0,
                 ui->lineEdit35->text() != "" ? ui->lineEdit35->text().toInt() : 0,
                 ui->lineEdit36->text() != "" ? ui->lineEdit36->text().toInt() : 0,
                 ui->lineEdit37->text() != "" ? ui->lineEdit37->text().toInt() : 0,
                 ui->lineEdit38->text() != "" ? ui->lineEdit38->text().toInt() : 0,
                 ui->lineEdit39->text() != "" ? ui->lineEdit39->text().toInt() : 0};
    rowset.setrows(2, ra3);

    int ra4[] = {ui->lineEdit41->text() != "" ? ui->lineEdit41->text().toInt() : 0,
                 ui->lineEdit42->text() != "" ? ui->lineEdit42->text().toInt() : 0,
                 ui->lineEdit43->text() != "" ? ui->lineEdit43->text().toInt() : 0,
                 ui->lineEdit44->text() != "" ? ui->lineEdit44->text().toInt() : 0,
                 ui->lineEdit45->text() != "" ? ui->lineEdit45->text().toInt() : 0,
                 ui->lineEdit46->text() != "" ? ui->lineEdit46->text().toInt() : 0,
                 ui->lineEdit47->text() != "" ? ui->lineEdit47->text().toInt() : 0,
                 ui->lineEdit48->text() != "" ? ui->lineEdit48->text().toInt() : 0,
                 ui->lineEdit49->text() != "" ? ui->lineEdit49->text().toInt() : 0};
    rowset.setrows(3, ra4);

    int ra5[] = {ui->lineEdit51->text() != "" ? ui->lineEdit51->text().toInt() : 0,
                 ui->lineEdit52->text() != "" ? ui->lineEdit52->text().toInt() : 0,
                 ui->lineEdit53->text() != "" ? ui->lineEdit53->text().toInt() : 0,
                 ui->lineEdit54->text() != "" ? ui->lineEdit54->text().toInt() : 0,
                 ui->lineEdit55->text() != "" ? ui->lineEdit55->text().toInt() : 0,
                 ui->lineEdit56->text() != "" ? ui->lineEdit56->text().toInt() : 0,
                 ui->lineEdit57->text() != "" ? ui->lineEdit57->text().toInt() : 0,
                 ui->lineEdit58->text() != "" ? ui->lineEdit58->text().toInt() : 0,
                 ui->lineEdit59->text() != "" ? ui->lineEdit59->text().toInt() : 0};
    rowset.setrows(4, ra5);

    int ra6[] = {ui->lineEdit61->text() != "" ? ui->lineEdit61->text().toInt() : 0,
                 ui->lineEdit62->text() != "" ? ui->lineEdit62->text().toInt() : 0,
                 ui->lineEdit63->text() != "" ? ui->lineEdit63->text().toInt() : 0,
                 ui->lineEdit64->text() != "" ? ui->lineEdit64->text().toInt() : 0,
                 ui->lineEdit65->text() != "" ? ui->lineEdit65->text().toInt() : 0,
                 ui->lineEdit66->text() != "" ? ui->lineEdit66->text().toInt() : 0,
                 ui->lineEdit67->text() != "" ? ui->lineEdit67->text().toInt() : 0,
                 ui->lineEdit68->text() != "" ? ui->lineEdit68->text().toInt() : 0,
                 ui->lineEdit69->text() != "" ? ui->lineEdit69->text().toInt() : 0};
    rowset.setrows(5, ra6);

    int ra7[] = {ui->lineEdit71->text() != "" ? ui->lineEdit71->text().toInt() : 0,
                 ui->lineEdit72->text() != "" ? ui->lineEdit72->text().toInt() : 0,
                 ui->lineEdit73->text() != "" ? ui->lineEdit73->text().toInt() : 0,
                 ui->lineEdit74->text() != "" ? ui->lineEdit74->text().toInt() : 0,
                 ui->lineEdit75->text() != "" ? ui->lineEdit75->text().toInt() : 0,
                 ui->lineEdit76->text() != "" ? ui->lineEdit76->text().toInt() : 0,
                 ui->lineEdit77->text() != "" ? ui->lineEdit77->text().toInt() : 0,
                 ui->lineEdit78->text() != "" ? ui->lineEdit78->text().toInt() : 0,
                 ui->lineEdit79->text() != "" ? ui->lineEdit79->text().toInt() : 0};
    rowset.setrows(6, ra7);

    int ra8[] = {ui->lineEdit81->text() != "" ? ui->lineEdit81->text().toInt() : 0,
                 ui->lineEdit82->text() != "" ? ui->lineEdit82->text().toInt() : 0,
                 ui->lineEdit83->text() != "" ? ui->lineEdit83->text().toInt() : 0,
                 ui->lineEdit84->text() != "" ? ui->lineEdit84->text().toInt() : 0,
                 ui->lineEdit85->text() != "" ? ui->lineEdit85->text().toInt() : 0,
                 ui->lineEdit86->text() != "" ? ui->lineEdit86->text().toInt() : 0,
                 ui->lineEdit87->text() != "" ? ui->lineEdit87->text().toInt() : 0,
                 ui->lineEdit88->text() != "" ? ui->lineEdit88->text().toInt() : 0,
                 ui->lineEdit89->text() != "" ? ui->lineEdit89->text().toInt() : 0};
    rowset.setrows(7, ra8);

    int ra9[] = {ui->lineEdit91->text() != "" ? ui->lineEdit91->text().toInt() : 0,
                 ui->lineEdit92->text() != "" ? ui->lineEdit92->text().toInt() : 0,
                 ui->lineEdit93->text() != "" ? ui->lineEdit93->text().toInt() : 0,
                 ui->lineEdit94->text() != "" ? ui->lineEdit94->text().toInt() : 0,
                 ui->lineEdit95->text() != "" ? ui->lineEdit95->text().toInt() : 0,
                 ui->lineEdit96->text() != "" ? ui->lineEdit96->text().toInt() : 0,
                 ui->lineEdit97->text() != "" ? ui->lineEdit97->text().toInt() : 0,
                 ui->lineEdit98->text() != "" ? ui->lineEdit98->text().toInt() : 0,
                 ui->lineEdit99->text() != "" ? ui->lineEdit99->text().toInt() : 0};
    rowset.setrows(8, ra9);


    /*--------------------------------------------
     * Step 2: Create Columns and Boxes from Rows.
     *-------------------------------------------*/

    Cols colset;
    colset = *(rows_to_cols(&colset, rowset.getmatrix()));

    Boxs boxset;
    boxset = *(rows_to_boxs(&boxset, rowset.getmatrix()));


    /*------------------------------------------------
     * Step 3: Create Dummy Matrix for the Final Page.
     *-----------------------------------------------*/

    Rows original_rowset;
    original_rowset = *(cols_to_rows(&original_rowset, colset.getmatrix()));


    /*----------------------
     * Step 4: Try to Solve.
     *---------------------*/

    try
    {
        bool a = false;
        bool b = false;
        bool c = false;

        bool checker = false;
        int loop_counter = 0;
        int** matrix = nullptr;

        do
        {
            // Basic value solving
            for (int i = 0; i < 9; i++)
            {
                std::tuple al = basic_value_insert(rowset.getrows(i));
                a = std::get<0>(al);

                if (a == true)
                {
                    colset = *(rows_to_cols(&colset, rowset.getmatrix()));
                    boxset = *(rows_to_boxs(&boxset, rowset.getmatrix()));
                    break;
                }
            }

            for (int i = 0; i < 9; i++)
            {
                std::tuple bl = basic_value_insert(colset.getcols(i));
                b = std::get<0>(bl);

                if (b == true)
                {
                    boxset = *(cols_to_boxs(&boxset, colset.getmatrix()));
                    rowset = *(cols_to_rows(&rowset, colset.getmatrix()));
                    break;
                }
            }

            for (int i = 0; i < 9; i++)
            {
                std::tuple cl = basic_value_insert(boxset.getboxs(i));
                c = std::get<0>(cl);

                if (c == true)
                {
                    rowset = *(boxs_to_rows(&rowset, boxset.getmatrix()));
                    colset = *(boxs_to_cols(&colset, boxset.getmatrix()));
                    break;
                }
            }

            std::tuple d = basic_value_solving(rowset.getmatrix(), colset.getmatrix(), boxset.getmatrix());
            bool act = std::get<0>(d);
            int** return_matrix = std::get<1>(d);

            for (int i = 0; i < 9; i++)
            {
                rowset.setrows(i, return_matrix[i]);
            }

            if (act == true)
            {
                colset = *(rows_to_cols(&colset, rowset.getmatrix()));
                boxset = *(rows_to_boxs(&boxset, rowset.getmatrix()));
            }


            // Intermediate value solving
            else
            {
                std::tuple e = intermediate_value_solving(rowset.getmatrix(), colset.getmatrix(), boxset.getmatrix());
                act = std::get<0>(e);
                matrix = std::get<1>(e);

                for (int i = 0; i < 9; i++)
                {
                    rowset.setrows(i, matrix[i]);
                }
            }

            if (act == true)
            {
                colset = *(rows_to_cols(&colset, rowset.getmatrix()));
                boxset = *(rows_to_boxs(&boxset, rowset.getmatrix()));
            }


            // Advanced value solving
            else
            {
                std::tuple f = advanced_value_solving(rowset.getmatrix(), colset.getmatrix(), boxset.getmatrix());
                act = std::get<0>(f);
                matrix = std::get<1>(f);

                for (int i = 0; i < 9; i++)
                {
                    rowset.setrows(i, matrix[i]);
                }
            }

            if (act == true)
            {
                colset = *(rows_to_cols(&colset, rowset.getmatrix()));
                boxset = *(rows_to_boxs(&boxset, rowset.getmatrix()));
            }


            // Checking for completion
            checker = (has_zeros(rowset.getrows(0)) || has_zeros(rowset.getrows(1)) ||
                       has_zeros(rowset.getrows(2)) || has_zeros(rowset.getrows(3)) ||
                       has_zeros(rowset.getrows(4)) || has_zeros(rowset.getrows(5)) ||
                       has_zeros(rowset.getrows(6)) || has_zeros(rowset.getrows(7)) ||
                       has_zeros(rowset.getrows(8)));

            loop_counter++;

            // Future improvements
            if (loop_counter > 100)
            {
                rowset.printrows(rowset.getrows(0));
                rowset.printrows(rowset.getrows(1));
                rowset.printrows(rowset.getrows(2));
                rowset.printrows(rowset.getrows(3));
                rowset.printrows(rowset.getrows(4));
                rowset.printrows(rowset.getrows(5));
                rowset.printrows(rowset.getrows(6));
                rowset.printrows(rowset.getrows(7));
                rowset.printrows(rowset.getrows(8));

                QMessageBox msg;
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setText("Cheat Mode has been enabled.");
                msg.show();

                /*  std::tuple g = cheat_mode_enabled(rowset, colset, boxset);
                    act = std::get<0>(g);
                    rowset = std::get<1>(g);
                */

                if (act == false)
                {
                    std::exception t;
                    throw t;
                }
                else
                {
                    checker = (has_zeros(rowset.getrows(0)) || has_zeros(rowset.getrows(1)) ||
                               has_zeros(rowset.getrows(2)) || has_zeros(rowset.getrows(3)) ||
                               has_zeros(rowset.getrows(4)) || has_zeros(rowset.getrows(5)) ||
                               has_zeros(rowset.getrows(6)) || has_zeros(rowset.getrows(7)) ||
                               has_zeros(rowset.getrows(8)));
                }
            }
        }
        while (checker);

        // Get the end time and duration
        QTime endtime = QTime::currentTime();
        int takentime = starttime.secsTo(endtime);

        // Tell the user the time it took to solve
        QMessageBox timer;
        timer.setText(QString("All Done! \nIt took me %1 seconds to finish this.").arg(takentime));

        // Create output window  
        FinalWindow ending;

            // Populate Labels with original puzzle
        QList<QLabel *> LB1s = ending.ui2->horizontalLayout_6->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 0;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB1s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB2s = ending.ui2->horizontalLayout_7->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 9;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB2s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB3s = ending.ui2->horizontalLayout_8->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 18;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB3s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB4s = ending.ui2->horizontalLayout_9->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 27;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB4s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB5s = ending.ui2->horizontalLayout_10->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 36;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB5s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB6s = ending.ui2->horizontalLayout_11->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 45;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB6s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB7s = ending.ui2->horizontalLayout_12->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 54;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB7s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB8s = ending.ui2->horizontalLayout_13->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 63;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB8s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB9s = ending.ui2->horizontalLayout_14->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 72;
            if (*original_rowset.getmatrix()[r] != 0)
            {
                LB9s[i]->setText(QString::number(*original_rowset.getmatrix()[r]));
            }
            else
            {
                continue;
            }
        }


            // Populate Labels with Solved Puzzle
        QList<QLabel *> LB1_2s = ending.ui2->horizontalLayout_15->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 0;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB1_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB1s[i]->text() == "")
                {
                    QPalette palette = LB1_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB1_2s[i]->setPalette(palette);
                }

            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB2_2s = ending.ui2->horizontalLayout_16->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 9;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB2_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB2s[i]->text() == "")
                {
                    QPalette palette = LB2_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB2_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB3_2s = ending.ui2->horizontalLayout_17->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 18;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB3_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB3s[i]->text() == "")
                {
                    QPalette palette = LB3_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB3_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB4_2s = ending.ui2->horizontalLayout_18->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 27;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB4_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB4s[i]->text() == "")
                {
                    QPalette palette = LB4_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB4_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB5_2s = ending.ui2->horizontalLayout_19->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 36;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB5_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB5s[i]->text() == "")
                {
                    QPalette palette = LB5_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB5_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB6_2s = ending.ui2->horizontalLayout_20->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 45;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB6_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB6s[i]->text() == "")
                {
                    QPalette palette = LB6_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB6_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB7_2s = ending.ui2->horizontalLayout_21->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 54;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB7_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB7s[i]->text() == "")
                {
                    QPalette palette = LB7_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB7_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB8_2s = ending.ui2->horizontalLayout_22->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 63;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB8_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB8s[i]->text() == "")
                {
                    QPalette palette = LB8_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB8_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        QList<QLabel *> LB9_2s = ending.ui2->horizontalLayout_23->findChildren<QLabel *>();
        for(int i = 0; i < 9; i++)
        {
            int r = i + 72;
            if (*rowset.getmatrix()[r] != 0)
            {
                LB9_2s[i]->setText(QString::number(*rowset.getmatrix()[r]));
                if (LB9s[i]->text() == "")
                {
                    QPalette palette = LB9_2s[i]->palette();
                    palette.setColor(QPalette::WindowText, {75, 25, 255});
                    LB9_2s[i]->setPalette(palette);
                }
            }
            else
            {
                continue;
            }
        }

        ending.show();
    }

    catch (std::exception &ex)
    {
        QMessageBox msgbox;
        msgbox.setStandardButtons(QMessageBox::Ok);
        msgbox.setText("Something has gone wrong, please contact your local administrator for help.\n\n");
        msgbox.setInformativeText(QString("Error Message: %1").arg(ex.what()));
        msgbox.exec();

        QMessageBox msgbox2;
        msgbox2.setStandardButtons(QMessageBox::Ok);
        msgbox2.setInformativeText("Also, please be sure you typed in the problem correctly, because I can't solve unsolvable problems.");
        msgbox2.exec();
    }

    return;
}
