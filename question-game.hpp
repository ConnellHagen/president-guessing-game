#ifndef QUESTION_GAME_HPP
#define QUESITON_GAME_HPP

#include <string>

class Question_Node
{
public:
    Question_Node();
    Question_Node(const std::string& p_answer);
    Question_Node(Question_Node* p_positive_response, Question_Node* p_negative_response, const std::string& p_question);
    ~Question_Node();

    inline bool get_is_answer() { return is_answer; }
    inline Question_Node* get_pos_response() { return positive_response; }
    inline Question_Node* get_neg_response() { return negative_response; }
    inline std::string get_answer() { return answer; }
    inline std::string get_question() { return question; }

private:
    bool is_answer;
    std::string answer;

    Question_Node* positive_response;
    Question_Node* negative_response;
    std::string question;
};

class Question_Game
{
public:
    Question_Game();
    Question_Game(Question_Node* p_root_node);
    ~Question_Game();

    inline void set_root_node(Question_Node* p_root_node) { root_node = p_root_node; }
    void play_game();

private:
    Question_Node* root_node;
    Question_Node* current_node;

    void next_question();
    void end_game();
};

#endif