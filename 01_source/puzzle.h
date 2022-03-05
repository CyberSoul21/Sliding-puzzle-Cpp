/**
 * @file puzzle.h 
 * @brief This program simulate 3 by 3 sliding block puzzle
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date 28/10/2010
 * @update: 5/03/2022
 */

#ifndef PUZZLE_H
#define PUZZLE_H
#include <string>

using namespace std;

class Puzzle
{
	private:
		    int p[3][3]={{2,8,3},{1,6,4},{7,0,5}};
		    int f[3][3]={{1,2,3},{8,0,4},{7,6,5}};
		    int contador;
	
	public:
		Puzzle();
		void Generate();
		void up();
		void down();
		void left();
		void right();
		bool comp();
		
	
	
};

#endif
