#include <iostream>
#include <string>
#include <vector>
#include "Player.cpp"
using namespace std;


int KaraokeScore()
{
    Player joueur1 = Player("Antoine");
    joueur1.AfficherScore();
    joueur1.printMeilleurScore();
    joueur1.printScoreTotal();
    joueur1.Score(20, 0);
    joueur1.AfficherScore();
    joueur1.Score(30, 0);
    joueur1.AfficherScore();
}

int KaraokeScore()
{
    Player joueur2 = Player("Tom");
    joueur2.AfficherScore();
    joueur2.printMeilleurScore();
    joueur2.printScoreTotal();
    joueur2.Score(40, 0);
    joueur2.AfficherScore();
    joueur2.Score(20, 0);
    joueur2.AfficherScore();
}

int KaraokeScore()
{
    Player joueur3 = Player("Babou");
    joueur3.AfficherScore();
    joueur3.printMeilleurScore();
    joueur3.printScoreTotal();
    joueur3.Score(10, 0);
    joueur3.AfficherScore();
    joueur3.Score(10, 0);
    joueur3.AfficherScore();
}

int KaraokeScore()
{
    Player joueur4 = Player("Hugo Le Dieu");
    joueur4.AfficherScore();
    joueur4.printMeilleurScore();
    joueur4.printScoreTotal();
    joueur4.Score(50, 0);
    joueur4.AfficherScore();
    joueur4.Score(50, 0);
    joueur4.AfficherScore();
}

int KaraokeScore()
{
    Player joueur5 = Player("Adrien");
    joueur5.AfficherScore();
    joueur5.printMeilleurScore();
    joueur5.printScoreTotal();
    joueur5.Score(40, 0);
    joueur5.AfficherScore();
    joueur5.Score(40, 0);
    joueur5.AfficherScore();
}