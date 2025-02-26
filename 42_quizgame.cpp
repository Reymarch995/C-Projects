#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                            "2. Who invented C++?: ",
                            "3. What is the predecessor of C++?: ",
                            "4. Is the Earth flat?: "};

    std::string options [][4] = {{"A. 1969","B. 1975","C. 1985","D. 1989"},
                            {"A. Guido Van Rossum","Bjarne Stroustrup","C. John Marston","D. Micheal De Santa"},
                            {"A. C","B. C+","C. C--","D. B++"},
                            {"A. yes", "B. no", "C. Sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size;i++){
        std::cout << "*********************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*********************************\n";
        
        for(int j = 0; j < 4; j++){
            std::cout << options[i][j] << '\n';
        };

        std::cin >> guess;
        guess = toupper(guess);

        if(guess==answerKey[i]){
            std::cout << "CORRECT!\n";
            score++;
        }
        else{
            std::cout << "WRONG!\n";
        }
    }


    std::cout <<"Results: You've got " << score << " correct!";
    std::cout <<"Youve got "<<((score/(double)size)*100)<<"%\n";

    return 0;
}