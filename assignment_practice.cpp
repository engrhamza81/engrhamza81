#include<iostream>
#include<string>
using namespace std;
int score=0;
void ask_question(string& questions, string& optionA , string& optionB, string& optionC, string& optionD, char& correct_option)
{
	
    char userAnswer;
    cout << questions << endl;
    cout << "a. " << optionA << endl;
    cout << "b. " << optionB << endl;
    cout << "c. " << optionC << endl;
    cout << "d. " << optionD << endl;
    
    cout << "Your answer (a, b, c, or d): ";
    cin >> userAnswer;
    if (userAnswer==correct_option)
    {
    	cout<<"Correct!"<<endl;
    	score=score+1;
	}
    else {
    	cout<<"Wrong!"<<endl;
	}
	cout<<"Score="<<score<<endl;
  

}

int main()
{
  string questions[20] = {
        "What is the capital of France?",
        "In which year did World War II end?",
        "What is the largest planet in our solar system?",
        "Who wrote \"Romeo and Juliet\"?",
        "What is the capital of Japan?",
        "Which ocean is the largest?",
        "What is the currency of Australia?",
        "Who was the first President of the United States?",
        "What is the main ingredient in guacamole?",
        "In which year did the Titanic sink?",
        "What is the largest mammal on Earth?",
        "Who painted the Mona Lisa?",
        "What is the national flower of Japan?",
        "Which planet is known as the \"Red Planet\"?",
        "What is the largest desert in the world?",
        "Who wrote \"To Kill a Mockingbird\"?",
        "What is the capital of Canada?",
        "Which element has the chemical symbol \"H\"?",
        "What is the largest organ in the human body?",
        "Which famous scientist developed the theory of relativity?"
    };
string options[20][4] = {
        {"Berlin", "Madrid", "Paris", "Rome"},
        {"1943", "1945", "1945", "1950"},
        {"Venus", "Mars", "Jupiter", "Saturn"},
        {"Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain"},
        {"Beijing", "Seoul", "Tokyo", "Bangkok"},
        {"Indian Ocean", "Atlantic Ocean", "Pacific Ocean", "Arctic Ocean"},
        {"Euro", "Dollar", "Australian Dollar", "Peso"},
        {"Thomas Jefferson", "George Washington", "Abraham Lincoln", "John Adams"},
        {"Tomatoes", "Onions", "Avocado", "Peppers"},
        {"1910", "1912", "1915", "1920"},
        {"Elephant", "Blue Whale", "Giraffe", "Polar Bear"},
        {"Vincent van Gogh", "Leonardo da Vinci", "Pablo Picasso", "Claude Monet"},
        {"Rose", "Tulip", "Cherry Blossom", "Orchid"},
        {"Jupiter", "Venus", "Saturn", "Mars"},
        {"Sahara Desert", "Gobi Desert", "Arabian Desert", "Antarctic Desert"},
        {"J.K. Rowling", "Ernest Hemingway", "Harper Lee", "F. Scott Fitzgerald"},
        {"Ottawa", "Toronto", "Ottawa", "Montreal"},
        {"Hydrogen", "Helium", "Carbon", "Oxygen"},
        {"Heart", "Liver", "Skin", "Lungs"},
        {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Stephen Hawking"}
    };

    char correct_option[20] = {'b', 'c', 'c', 'c', 'c', 'c', 'b', 'c', 'b', 'b', 'b', 'c', 'c', 'd', 'a', 'a', 'a', 'c', 'c', 'c'};

    int score = 0;
    for (int i = 0; i < 20; ++i) {
         ask_question(questions[i], options[i][0], options[i][1], options[i][2], options[i][3], correct_option[i]) ;
       
       }   
       char play_again;
       cout<<"Do you wnat to play again"<<"\n"<<"Press y ,Y"<<endl;
       if (play_again=='y'||'Y')
       {
       	main();
	   }
	   else {
	   	cout<<"Thank You\n";
	   }
 }

   
   

