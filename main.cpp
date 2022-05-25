#include <iostream>
#include "question-game.hpp"

void setup_president_game(Question_Game* game)
{
    // defining all presidents
    Question_Node* washington = new Question_Node("George Washington");
    Question_Node* adams = new Question_Node("John Adams");
    Question_Node* jefferson = new Question_Node("Thomas Jefferson");
    Question_Node* madison = new Question_Node("James Madison");
    Question_Node* monroe = new Question_Node("James Monroe");
    Question_Node* q_adams = new Question_Node("John Quincy Adams");
    Question_Node* jackson = new Question_Node("Andrew Jackson");
    Question_Node* buren = new Question_Node("Martin Van Buren");
    Question_Node* harrison = new Question_Node("William Henry Harrison");
    Question_Node* tyler = new Question_Node("John Tyler");
    Question_Node* polk = new Question_Node("James Polk");
    Question_Node* taylor = new Question_Node("Zachary Taylor");
    Question_Node* fillmore = new Question_Node("Millard Fillmore");
    Question_Node* pierce = new Question_Node("Franklin Pierce");
    Question_Node* buchanan = new Question_Node("James Buchanan");
    Question_Node* lincoln = new Question_Node("Abraham Lincoln");
    Question_Node* johnson = new Question_Node("Andrew Johnson");
    Question_Node* grant = new Question_Node("Ulysses S Grant");
    Question_Node* hayes = new Question_Node("Rutherford B Hayes");
    Question_Node* garfield = new Question_Node("James Garfield");
    Question_Node* arthur = new Question_Node("Chester Arthur");
    Question_Node* cleveland = new Question_Node("Grover Cleveland");
    Question_Node* b_harrison = new Question_Node("Benjamin Harrison");
    Question_Node* mckinley = new Question_Node("William McKinley");
    Question_Node* roosevelt = new Question_Node("Theodore Roosevelt");
    Question_Node* taft = new Question_Node("William Taft");
    Question_Node* wilson = new Question_Node("Woodrow Wilson");
    Question_Node* harding = new Question_Node("Warren G Harding");
    Question_Node* coolidge = new Question_Node("Calvin Coolidge");
    Question_Node* hoover = new Question_Node("Herbert Hoover");
    Question_Node* fdr = new Question_Node("Franklin D Roosevelt");
    Question_Node* truman = new Question_Node("Harry Truman");
    Question_Node* eisenhower = new Question_Node("Dwight D Eisenhower");
    Question_Node* jfk = new Question_Node("John F Kennedy");
    Question_Node* lbj = new Question_Node("Lyndon B Johnson");
    Question_Node* nixon = new Question_Node("Richard Nixon");
    Question_Node* ford = new Question_Node("Gerald Ford");
    Question_Node* carter = new Question_Node("Jimmy Carter");
    Question_Node* reagan = new Question_Node("Ronald Reagan");
    Question_Node* hw_bush = new Question_Node("George H W Bush");
    Question_Node* clinton = new Question_Node("Bill Clinton");
    Question_Node* bush = new Question_Node("George W Bush");
    Question_Node* obama = new Question_Node("Barack Obama");
    Question_Node* trump = new Question_Node("Donald Trump");
    Question_Node* biden = new Question_Node("Joe Biden");

    // creating all sub-trees for each question and 2 possible answer choices
    Question_Node* indep = new Question_Node(tyler, fillmore, "Were they ever an Independant?");
    Question_Node* alive = new Question_Node(biden, indep, "Are they still alive?");
    Question_Node* fathe = new Question_Node(adams, alive, "Were they a Founding Father?");
    Question_Node* impea = new Question_Node(johnson, fathe, "Were they ever impeached?");
    Question_Node* navy = new Question_Node(ford, arthur, "Were they ever in the Navy?");
    Question_Node* repub = new Question_Node(navy, impea, "Were they ever a Republican?");
    Question_Node* whig = new Question_Node(taylor, harding, "Were they a Whig?");
    Question_Node* term = new Question_Node(harrison, whig, "Did they have the shortest term in history?");
    Question_Node* offic = new Question_Node(term, repub, "Did they die in office?");
    Question_Node* democ = new Question_Node(jfk, garfield, "Were they a Democrat?");
    Question_Node* assas = new Question_Node(democ, offic, "Were they assassinated?");
    Question_Node* lawye = new Question_Node(b_harrison, hoover, "Were they a lawyer?");
    Question_Node* elecv = new Question_Node(lawye, hayes, "Did they receive enough electoral votes to win?");
    Question_Node* chief = new Question_Node(taft, elecv, "Were they a chief justice?");
    Question_Node* aliv2 = new Question_Node(trump, chief, "Are they still alive?");
    Question_Node* texas = new Question_Node(polk, pierce, "Did they annex texas?");
    Question_Node* repre = new Question_Node(buchanan, buren, "Were they ever a member of the house of representatives?");
    Question_Node* lawy2 = new Question_Node(repre, texas, "Were they a lawyer?");
    Question_Node* aliv3 = new Question_Node(carter, lawy2, "Are they still alive?");
    Question_Node* demo2 = new Question_Node(aliv3, q_adams, "Were they a Democrat?");
    Question_Node* repu2 = new Question_Node(aliv2, demo2, "Were they a Republican?");
    Question_Node* fullt = new Question_Node(repu2, assas, "Did they serve a full term?");
    Question_Node* trail = new Question_Node(jackson, lbj, "Were they president during the Trail Of Tears");
    Question_Node* korea = new Question_Node(truman, trail, "Were they president during the Korean War?");
    Question_Node* wwii = new Question_Node(wilson, korea, "Were they president during WWII?");
    Question_Node* black = new Question_Node(obama, clinton, "Are they black?");
    Question_Node* aliv4 = new Question_Node(black, wwii, "Are they still alive?");
    Question_Node* penny = new Question_Node(lincoln, eisenhower, "Are they on the penny?");
    Question_Node* diewh = new Question_Node(mckinley, penny, "Did they die while holding office?");
    Question_Node* resig = new Question_Node(nixon, coolidge, "Did they resign?");
    Question_Node* assum = new Question_Node(diewh, resig, "Did they assume the presidency as vice president after a death?");
    Question_Node* rough = new Question_Node(roosevelt, assum, "Were they a rough rider?");
    Question_Node* civil = new Question_Node(grant, rough, "Were they a civil war general?");
    Question_Node* actor = new Question_Node(reagan, civil, "Were they an actor?");
    Question_Node* aliv5 = new Question_Node(bush, actor, "Are they still alive?");
    Question_Node* feder = new Question_Node(madison, monroe, "Did they co-write the Federalist Papers?");
    Question_Node* first = new Question_Node(washington, jefferson, "Were they the first president?");
    Question_Node* curre = new Question_Node(first, feder, "Are they on any currency in circulation?");
    Question_Node* fath2 = new Question_Node(curre, aliv5, "Were they a Founding Father?");
    Question_Node* demo3 = new Question_Node(aliv4, fath2, "Were they a Democrat?");
    Question_Node* moret = new Question_Node(fdr, demo3, "Did they serve more than two terms?");
    Question_Node* conse = new Question_Node(moret, cleveland, "Did they serve their terms consecutively");

    // final tree with all questions nested inside
    Question_Node* full_tree = new Question_Node(conse, fullt, "Did they serve more than one term?");

    game->set_root_node(full_tree);
}

int main()
{
    Question_Game president_game = Question_Game();
    setup_president_game(&president_game);

    president_game.play_game();

    std::cout << "Type anything to exit.\n";
    std::string temp;
    std::cin >> temp;
}