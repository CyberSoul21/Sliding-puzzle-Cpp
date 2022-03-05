/**
 * @file puzzle.cpp 
 * @brief This program simulate 3 by 3 sliding block puzzle
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 5/03/2022
 */


#include <iostream>
#include "puzzle.h"
#include <string>
//#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

Puzzle::Puzzle()
{
	
	contador = -1;
}
void Puzzle::Generate()
{
	//int c=0;
	contador++;
	cout<<"                                   Number of movements "<<contador<<endl;
	//srand(time(0));
	for(int i=0; i<3; i++){
		 cout<<"                            ";
		for(int j=0; j<3; j++){
			
		//	p[i][j]=rand()%9;
		 
			cout<<p[i][j]<<" ";
			
		}
		cout<<"\n";
	}
}
void Puzzle::up()
{
	int co=0,n,m;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		
		 co=p[i][j];
		 if(co==0)
		 {
		 	n=i;
		 	m=j;
		 }			
		}		
	}
	if((n-1)<0)
	 {
	 	cout<<"Invalid move"<<endl;
	 }
	 else
	 {
	 	p[n][m]=p[n-1][m];
	 	p[n-1][m]=0;
	 }	
}
void Puzzle::down()
{
	int co=0,n,m;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		
		 co=p[i][j];
		 if(co==0)
		 {
		 	n=i;
		 	m=j;
		 }			
		}		
	}
	if((n+1)>2)
	 {
	 	cout<<"Invalid move"<<endl;
	 }
	 else
	 {
	 	p[n][m]=p[n+1][m];
	 	p[n+1][m]=0;
	 }	
}
void Puzzle::left()
{
	int co=0,n,m;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		
		 co=p[i][j];
		 if(co==0)
		 {
		 	n=i;
		 	m=j;
		 }			
		}		
	}
	if((m-1)<0)
	 {
	 	cout<<"Invalid move"<<endl;
	 }
	 else
	 {
	 	p[n][m]=p[n][m-1];
	 	p[n][m-1]=0;
	 }	
}
void Puzzle::right()
{
	int co=0,n,m;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		
		 co=p[i][j];
		 if(co==0)
		 {
		 	n=i;
		 	m=j;
		 }			
		}		
	}
	if((m+1)>2)
	 {
	 	cout<<"Invalid move"<<endl;
	 }
	 else
	 {
	 	p[n][m]=p[n][m+1];
	 	p[n][m+1]=0;
	 }	
}
bool Puzzle::comp()
{   
    int l=0; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			if(p[i][j]==f[i][j])
			{
				l++;
			}
		}
	}
	if(l==9)
	{
		cout<<"------Congratulations!------"<<endl;
		l=0;
		return false;
	}
	return true;
	
}








