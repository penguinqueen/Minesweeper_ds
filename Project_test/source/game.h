/*
 *	Header file of game
 */


#ifndef GAME_H_
#define GAME_H_

#define NBOMBS_EASY		10
#define NBOMBS_MEDIUM	15
#define NBOMBS_HARD		20

typedef struct tagCELL_INFO {
	int env_bomb_count;
	int is_bomb;
	int uncovered;
	int flagged;
} CELL_INFO;

void init_game(int level);
void on_matrix_clicked(int countery, int counterx);
int flagged(int countery, int counterx);


#endif /* GAME_H_ */
