#include <string>
#include <vector>

class Player
{
    private:
        std::string _nom;
        int _score[5] = {0,30,90,40,60};

    public:
        void Score(int score, int chanson);
        void AfficherScore();
        void printMeilleurScore(); 
        void printScoreTotal(); 
        Player(std::string nom);    
};