#include <iostream>
#include <string>

#include "Player.h"

void Player::Score(int score, int chanson)
{
    if (score > _score[chanson])
    {
        _score[chanson] = score;
    }
}
void Player::AfficherScore()
{
    for (int i = 0; i<5; i++)   
    {
        if (_score[i]> 50)
        {
            std::cout << "Vous avez fait :" << i << " : " << _score[i] << std::endl;
        }

        else
        {
            std::cout << "Vous avez fait : " << i << " : Pas de score enregistré :" << std::endl;
        }
        
    }
}

void Player::printMeilleurScore()
{
    int meilleurScore = 0;
    for (int i = 0; i<5; i++)   
    {
        if (meilleurScore < _score[i])
        {
            meilleurScore = _score[i];
        }
    }
    std::cout << "Votre meilleur score est de: " << meilleurScore << std::endl;
}


void Player::printScoreTotal()
{
    int scoreTotal = 0;
    for (int i = 0; i<5; i++)
    {
        if (_score[i]> 50)
        {
            scoreTotal += _score[i];
        }
    }

    std::cout << "Votre score total est de : " << scoreTotal << std::endl;
}

Player::Player(std::string nom) : _nom (nom)
{

}