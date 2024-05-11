#include <iostream>
#include <string>

int winLoss(int win, int loss){
    return win-loss;
};


int checkRank(int wins, int win_rate){
    std::string current_rank;
    // Se vitórias for menor do que 10 = Ferro
    if (wins<10){current_rank = "Ferro";}
    // Se vitórias for entre 11 e 20 = Bronze
    else if (wins>=11 && wins<=20){current_rank = "Bronze";}
    // Se vitórias for entre 21 e 50 = Prata
    else if (wins>=21 && wins<=50){current_rank = "Prata";}
    // Se vitórias for entre 51 e 80 = Ouro
    else if (wins>=51 && wins<=80){current_rank = "Ouro";}
    // Se vitórias for entre 81 e 90 = Diamante
    else if (wins>=81 && wins<=90){current_rank = "Diamante";}
    // Se vitórias for entre 91 e 100= Lendário
    else if (wins>=91 && wins<=100){current_rank = "Lendário";}
    // Se vitórias for maior ou igual a 101 = Imortal
    else if (wins>=101){current_rank = "Imortal";}

    std::cout<<"O Herói tem saldo de **{"<<win_rate<<"}** e está no nível de **{"<<current_rank<<"}**"<<std::endl;

    return 0;
};


int main(int argc, char* argv[]){
    int wins, loss, win_rate;
    std::cout<<"Digite o numero de vitorias:\n";
    std::cin>>wins;
    std::cout<<"Digite o numero de derrotas:\n";
    std::cin>>loss;
    win_rate = winLoss(wins,loss);
    checkRank(wins,win_rate);

    return 0;
}

