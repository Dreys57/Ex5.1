#include <iostream>

enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(int& mystery) {
	
}

int main() {
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber;

	while (gameState != GameState::EXIT);
	{
		switch (gameState) {
		case GameState::INIT:
			/*
				Cette partie doit donner une valeur � mysterNumber comprise entre 0 et 100
			*/
			gameState = GameState::PLAY;
			break;

		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre myst�re � l'aide d'un function
				- Si le nombre mystre est trouv� il faut passer � l'�tat END
			*/
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont �t� n�cessaire pour trouver le nombre myst�re et indiquer quel est ce nombre myst�re
			*/
			break;

		case GameState::EXIT:
			break;
		}
	}

	
	system("pose");
	return EXIT_FAILURE;
}