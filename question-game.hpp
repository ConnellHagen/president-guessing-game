#ifndef QUESTION_GAME_HPP
#define QUESITON_GAME_HPP

#include <string>

class Question_Game
{
public:
    Question_Game();
    ~Question_Game();

private:
};

class Question_Node
{
public:
    Question_Node();
    ~Question_Node();
    
private:
    Question_Node* positive_response;
    Question_Node* negative_response;
    std::string question;
};

#endif