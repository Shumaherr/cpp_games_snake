//
// Created by Aleksandr on 31.01.2021.
//

#include "GameManager.h"

    void GameManager::StartGame() {
        state = STATE_GAME;
    }

void GameManager::GameOver() {
    state = STATE_GAME_OVER;
}

bool GameManager::isGameOver() {
    return state == STATE_GAME_OVER;
}

