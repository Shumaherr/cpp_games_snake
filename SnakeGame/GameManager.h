//
// Created by Aleksandr on 31.01.2021.
//

#ifndef CPP_GAMES_SNAKE_GAMEMANAGER_H
#define CPP_GAMES_SNAKE_GAMEMANAGER_H

#endif //CPP_GAMES_SNAKE_GAMEMANAGER_H

enum GameState : unsigned int{
    STATE_INIT = 0,
    STATE_MENU = 1,
    STATE_GAME = 2,
    STATE_PAUSE = 3,
    STATE_GAME_OVER = 99
};

class GameManager {
public:
    void StartGame();
    void GameOver();
    bool isGameOver();

private:
    GameState state = STATE_INIT;
};