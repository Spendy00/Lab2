#include <stdio.h>
#include <pthread.h>
#inlude <stdlib.h>
#include "lab2.h"

int** read board from file(/*char* filename*/){
    FILE *fp = NULL;
    int** board=NULL;
    string file = "valid_board.txt";
    ifstream inFile;
    inFile.open(file);
    string line="";
    string  line1="";
    
    int ROW SIZE=9;
    int COL SIZE=9;
    int board[ROW SIZE][COL SIZE] = {0}:
    if (inFile.is_open())
    {
    int row=0:
    int column = 0;
    while(getline(inFile,line))
    {
   if(line != "")
    {
    column = 0;
    line = line +',';
    for(int i=0; i<line.length();i++)
    if(lineli]!=',')
    {
    line1 += line[il:
    }
    else
    {
    board[row][col] = stoi(temp);
    line1
    columnt++:
    }
    }
    rowt++;
    }
    }
    else
    {
     cout<<"file cannot open."<< end1:
    }
                 
    for(int i = 0; i < row; it+)
    {
    for (int col = 0; col < COL_SIZE; colt+)
    {
    cout << boardli][col] << "";
    }
    cout << end1;
    }
    return 0;

