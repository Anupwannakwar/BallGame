#include "GameOver.h"

GameOver::GameOver()
{
	font.loadFromFile("FONTS/comic.ttf");

	//Display Game over
	GOBackTex.loadFromFile("SPRITES/menu.png");
	GOBack.setTexture(GOBackTex);
	GOtex.loadFromFile("SPRITES/gameover.png");
	GO.setTexture(GOtex);
	GO.setScale(0.65f, 0.65f);
	GO.setPosition(25.f, 90.f);

	//score button 
	ScoreBtex.loadFromFile("SPRITES/f.png");
	ScoreB.setTexture(ScoreBtex);
	ScoreB.setScale(0.2f, 0.15f);
	ScoreB.setPosition(40.f, 400.f);

	//current score
	ScoreDis.setFont(font);
	ScoreDis.setFillColor(sf::Color(100, 149, 273, 255));
	ScoreDis.setCharacterSize(40);
}

GameOver::~GameOver()
{
}

void GameOver::update(sf::Vector2f mpos, int & StateID)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		StateID = 0;
	}
}

void GameOver::render(sf::RenderTarget & target)
{
	target.draw(GOBack);
	target.draw(GO);
	target.draw(ScoreB);
	target.draw(ScoreDis);
}

void GameOver::setScore(int score)
{
	ScoreDis.setString("Your Score \n \t  " + std::to_string(score));
	ScoreDis.setPosition(95.f, 430.f);
}

