#include <iostream>
#include <time.h>
#include <random>

enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(unsigned int& mystery) {

	srand (time(NULL));

	int maxNumber = 101;
	mystery = (rand() % maxNumber);
	
}

int main() {
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber;

	while (gameState != GameState::EXIT);
	{
		switch (gameState) {
		case GameState::INIT:
			/*
				Cette partie doit donner une valeur à mysteryNumber comprise entre 0 et 100
			*/

			GenerateMysteryNumber(mysteryNumber);

			gameState = GameState::PLAY;
			break;

		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre mystère à l'aide d'un function
				- Si le nombre mystre est trouvé il faut passer à l'état END
			*/
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
			*/
			break;

		case GameState::EXIT:
			break;
		}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}