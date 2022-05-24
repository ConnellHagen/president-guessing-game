#include <iostream>
#include "question-game.hpp"

void setup_game(Question_Game* game)
{
    Question_Node* answer1 = new Question_Node("Answer 1");
    Question_Node* answer2 = new Question_Node("Answer 2");
    Question_Node* answer3 = new Question_Node("Answer 3");
    
    Question_Node* a12tree = new Question_Node(answer1, answer2, "YES: Answer 1, NO: Answer 2");
    Question_Node* a3nonetree = new Question_Node(a12tree, answer3, "YES: New Question, NO: Answer 3");

    game->set_root_node(a3nonetree);
}

int main()
{
    Question_Game president_game = Question_Game();
    setup_game(&president_game);

    president_game.play_game();
}