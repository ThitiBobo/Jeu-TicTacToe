#ifndef TICTACTOEGRID_H
#define TICTACTOEGRID_H


class TicTacToeGrid
{
    public:
        enum Token{
            cross = 1,
            circle = 2
        };

        TicTacToeGrid();
        virtual ~TicTacToeGrid();
        int addToken(int,int,Token);
        bool checkVictory();

    private:
        int grid[3][3];
        const int condVictory = 3;

};

#endif // TICTACTOEGRID_H
