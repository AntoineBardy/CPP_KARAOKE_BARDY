#include <string>
#include <vector>

class Player
{
    private:
        std::string _nom;
        int _score[5] = {0,10,20,30,50};

    public:
        void Score(int score, int chanson);
        void AfficherScore();
        void printMeilleurScore(); 
        void printScoreTotal(); 
        Player(std::string nom);    
};