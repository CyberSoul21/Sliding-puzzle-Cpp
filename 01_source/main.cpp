/**
 * @file main.cpp 
 * @brief The program simulate 3 by 3 sliding block puzzle
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 5/03/2022
 */

#include <iostream>
#include "puzzle.h"
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a=0;
	Puzzle miPuzzle;
	cout<<"             ";
	cout<<"Artificial Intellegence course \n"<<endl;
	cout<<"Welcome to 3 by 3 sliding block puzzle\n"<<endl;
	cout<<"The number despict the box empty, the commands are:\n"<<endl;
	cout<<"    8"<<endl;
	cout<<"    ^"<<endl;
	cout<<"    |"<<endl;
	cout<<"4<-- -->6"<<endl;
    cout<<"    |"<<endl;
	cout<<"    v"<<endl;
	cout<<"    2"<<endl;
	cout<<"________________________________________________________________________________"<<endl;
	miPuzzle.Generate();
	//cin>>n;
	
	//miPuzzle.right();
	//miPuzzle.Generate();
	
	while(miPuzzle.comp())
	{
		cin>>a;
		switch(a)
		{
			case 8: miPuzzle.up();
			        miPuzzle.comp();
			        miPuzzle.Generate();
			        break; 
			case 6: miPuzzle.right();
			        miPuzzle.comp();
			        miPuzzle.Generate();
			        break;
			case 4: miPuzzle.left();
			        miPuzzle.comp();
			        miPuzzle.Generate();  
			        break;
			case 2: miPuzzle.down();
			        miPuzzle.comp();
			        miPuzzle.Generate();
			        break;	
			default: cout<<"Wrong command"<<endl;
			        //miPuzzle.Generate(); 
			        break;			        
		}
	}
	
	return 0;
}
