#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define RANK 13
#define SUIT 4

int main(void)
{
	bool in_hand[SUIT][RANK] = { false };
	int card_num, suit, rank;
	const  _suit[] = { 'rh','sf','bh','pb' };
	const  _rank[] = { '2','3','4','5','6','7','8','9','10','j','q','k','a' };

	printf("Enter number of cards in hand:");
	scanf_s("%d", &card_num);

	srand((unsigned) time(NULL));

	printf("Your hand:");
	while (card_num > 0)
	{
		suit = rand() % SUIT;
		rank = rand() % RANK;
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			card_num--;
			printf("  %c%c", _suit[suit], _rank[rank]);
		}
	}
	printf("\n");

	system("pause");
	return 0;
}