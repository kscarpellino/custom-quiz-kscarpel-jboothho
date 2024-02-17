//
// Created by Julia Booth-Howe on 2/17/24.
//
#include "Quiz.h"
#include <ctime>
#include <iostream>
using namespace std;

/** TODO: uncomment line for testing in CMakeLists **/
/** TODO: test each function in Quiz.h and Question. h **/

bool test_Quiz();
bool test_Question();

int main(){
    srand(time(NULL));
    if (test_Quiz()){
        cout << "Passed all Quiz test cases" << endl;
    }
    if (test_Question()){
        cout << "Passed all Question test cases" << endl;
    }
    return 0;
}

bool test_Quiz(){
    bool passed = true;
    Quiz qz;
    /** TODO: Test case for constructor
     * TODO: Test case for getQuestion (int index)
     * TODO: Test case for getQuestion (string prompt)
     * TODO: Test case for getQuestion (int index)
     * TODO: Test case for setTitle(string title)
     * TODO: Test case for addQuestion (Question newQuestion)
     * TODO: Test case for removeQuestion (int index)
     * TODO: Test case for removeQuestion (string prompt)
     * TODO: Test case for takeQuiz
     */
}

bool test_Question(){
    bool passed = true;
    Question qt;
    /** TODO: Test case for constructor
     * TODO: Test case for getPrompt()
     * TODO: Test case for getPoints()
     * TODO: Test case for getNumAnswers()
     * TODO: Test case for setPrompt(string prompt)
     * TODO: Test case for setPoints(int points)
     * TODO: Test case for addAnswer(answer a)
     * TODO: Test case for addAnswer(string text, bool correct)
     * TODO: Test case for removeAnswer(int index)
     * TODO: Test case for removeAnswer(string s)
     * TODO: Test case for void clearAnswers()
     * TODO: Test case for bool isCorrect(int index)
     * TODO: Test case for bool isCorrect(string text)
     * not sure if i need a test case for
     * friend ostream& operator << (ostream& outs, const Question& q)
     */
};
