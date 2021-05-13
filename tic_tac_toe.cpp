#include <iostream>
using namespace std;

//to create a somewhat representation of the box of tic tac toe && to add x & o's in it
void xoinput (string pos, int xovalue) {



}

//tic tac toe project
int main () {

    cout << "Welcome to CLI based TIC TAC TOE stimulator!!!" << endl;
    cout << "Remember THe first player to input value will be PLAYER1 &\n the second person will be PLAYER2" << endl;
    cout << "PLAYER1 willl be assigned x & PLAYER2 will be assigned o" << endl;
    cout << endl;

    string row[] = {" ", " ", "a", " ", "b", " ", "c"};
    string column1[] = {"1", " ", " ", " ", " ", " ", " "};
    string column2[] = {"2", " ", " ", " ", " ", " ", " "};
    string column3[] = {"3", " ", " ", " ", " ", " ", " "};

    cout << "U will be playing in a box looking like this" << endl;
    cout << endl;
    cout << "  a b c" << endl;
    cout << "1      " << endl;
    cout << "2      " << endl;
    cout << "3      " << endl;
    cout << endl;
    cout << "U will have to enter box positions, there r 9 boxes named\n";
    cout << "a1 b1 c1" << endl;
    cout << "a2 b2 c2" << endl;
    cout << "a3 b3 c3" << endl;
    cout << endl;
    cout << "be sure u r writing the correct box position or else the program will terminate & u will have to reastart it\n";
    cout << "Hope U enjoy the GAME\n"; 
    cout << "All the Best" << endl;
    cout << endl;

    //user's position choice
    string choice;

    //an integer which will check if there is no winner in the following next loop
    int winner = 0;

    //now the main game
    for (int i = 1; i < 10; i++) {
        
        //taking the users choice for their box position choice
        cout << "enter your box position: ";
        cin >> choice;
        cout << endl;
        
        //to take input values of x or o in a1, a2 & a3
        if (choice == "a1" && i % 2 != 0) {
            column1[2]= "x";
        }

        else if (choice == "a1" && i % 2 == 0) {
            column1[2]= "o";
        }

        else if (choice == "b1" && i % 2 != 0) {
            column1[4]= "x";
        }

        else if (choice == "b1" && i % 2 == 0) {
            column1[4]= "o";
        }

        else if (choice == "c1" && i % 2 != 0) {
            column1[6]= "x";
        }

        else if (choice == "c1" && i % 2 == 0) {
            column1[6]= "o";
        }

        else if (choice == "a2" && i % 2 != 0) {
            column2[2]= "x";
        }

        else if (choice == "a2" && i % 2 == 0) {
            column2[2]= "o";
        }

        else if (choice == "b2" && i % 2 != 0) {
            column2[4]= "x";
        }

        else if (choice == "b2" && i % 2 == 0) {
            column2[4]= "o";
        }

        else if (choice == "c2" && i % 2 != 0) {
            column2[6]= "x";
        }

        else if (choice == "c2" && i % 2 == 0) {
            column2[6]= "o";
        }

        else if (choice == "a3" && i % 2 != 0) {
            column3[2]= "x";
        }

        else if (choice == "a3" && i % 2 == 0) {
            column3[2]= "o";
        }

        else if (choice == "b3" && i % 2 != 0) {
            column3[4]= "x";
        }

        else if (choice == "b3" && i % 2 == 0) {
            column3[4]= "o";
        }

        else if (choice == "c3" && i % 2 != 0) {
            column3[6]= "x";
        }

        else if (choice == "c3" && i % 2 == 0) {
            column3[6]= "o";
        }

        //if the user does not inputs correct right position
        else {

            cout << "Sorry your choice input was absolutely wrong\nplease restart the program" << endl;
            break;

        }

        //printing the boxes
        for (int k = 0; k < 7; k += 1) {
            cout << row[k];
        }
        cout << " " << endl;
        for (int l = 0; l < 7; l += 1) {
            cout << column1[l];
        }
        cout << " " << endl;
        for (int m = 0; m < 7; m += 1) {
            cout << column2[m];
        }
        cout << " " << endl;
        for (int n = 0; n < 7; n += 1) {
            cout << column3[n];
        }
        cout << " " << endl;

        if (column1[2] == "x" && column1[4] == "x" && column1[6] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column2[2] == "x" && column2[4] == "x" && column2[6] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column3[2] == "x" && column3[4] == "x" && column3[6] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[2] == "x" && column2[2] == "x" && column3[2] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[4] == "x" && column2[4] == "x" && column3[4] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[6] == "x" && column2[6] == "x" && column3[6] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[6] == "x" && column2[4] == "x" && column3[2] == "x") {
            cout << "COngrats PLAYER1!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[2] == "o" && column2[4] == "o" && column3[6] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column2[2] == "o" && column2[4] == "o" && column2[6] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column3[2] == "o" && column3[4] == "o" && column3[6] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[2] == "o" && column2[2] == "o" && column3[2] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[4] == "o" && column2[4] == "o" && column3[4] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[6] == "o" && column2[6] == "o" && column3[6] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[6] == "o" && column2[4] == "o" && column3[2] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
        if (column1[2] == "o" && column2[4] == "o" && column3[6] == "o") {
            cout << "COngrats PLAYER2!!! U won..." << endl;
            winner++;
            break;
        }
    
    }


    //to congrat the winner && to tell them to try again if it's a draw
    if (winner == 0) {
        cout << "Huh! it's a draw. Good Luck to both of u on ur next try" << endl;
    }

    return 0;

}