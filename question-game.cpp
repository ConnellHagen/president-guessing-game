#include <iostream>

#include "question-game.hpp"

Question_Node::Question_Node()
    :is_answer(false), positive_response(nullptr), negative_response(nullptr)
{}

Question_Node::Question_Node(const std::string& p_answer)
    :Question_Node()
{
    is_answer = true;
    answer = p_answer;
}

Question_Node::Question_Node(Question_Node* p_positive_response, Question_Node* p_negative_response, const std::string& p_question)
    :Question_Node()
{
    positive_response = p_positive_response;
    negative_response = p_negative_response;
    question = p_question;
}

// recursively deletes all child nodes
Question_Node::~Question_Node()
{
    delete positive_response;
    delete negative_response;
}

Question_Game::Question_Game()
{
    root_node = new Question_Node();
    current_node = root_node;
}

Question_Game::Question_Game(Question_Node* p_root_node)
{
    root_node = p_root_node;
    current_node = root_node;
}

Question_Game::~Question_Game()
{
    delete root_node;
}

void Question_Game::play_game()
{
    current_node = root_node;

    while(!current_node->get_is_answer())
    {
        next_question();
    }

    end_game();
}

void Question_Game::next_question()
{
    std::cout << current_node->get_question() << "\n";
    std::cout << "yes/no" << "\n";
    std::string response;

    while(true)
    {
        std::cin >> response;
        std::cout << "\n";
        if(response == "yes" || response == "Yes" || response == "y")
        {
            break;
        }
        if(response == "no" || response == "No" || response == "n")
        {
            break;
        }
        std::cout << "Invalid Response!\n";
        std::cout << current_node->get_question() << "\n";
        std::cout << "yes/no" << "\n";
    }

    if(response == "yes" || response == "Yes" || response == "y")
    {
        current_node = current_node->get_pos_response();
    }
    else
    {
        current_node = current_node->get_neg_response();
    }
}

void Question_Game::end_game()
{
    std::cout << "The president you are thinking of is: " << current_node->get_answer() << "!\n";
}