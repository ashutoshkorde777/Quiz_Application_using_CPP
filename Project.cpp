#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int correctanswers[8];

string sportsquestions1[8] = {
    "Who won the Men's Singles title in the 2021 US Open tennis tournament?",
    "In which city is the Baseball Hall of Fame located?",
    "Who won the 2021 Tour de France?",
    "Which country has won the most World Series titles in MLB?",
    "Who won the Women's Singles title in the 2021 US Open tennis tournament?",
    "Which country has won the most medals in the history of the Winter Olympic Games?",
    "Who won the Men's Singles title in the 2022 Australian Open tennis tournament?",
    "Which team has won the most Copa Libertadores titles in South American club football?"};

string sportsoptions1[8][4] = {
    {"Daniil Medvedev", "Alexander Zverev", "Novak Djokovic", "Rafael Nadal"},
    {"Cooperstown, New York", "Boston, Massachusetts", "Chicago, Illinois", "Los Angeles, California"},
    {"Tadej Pogacar", "Primoz Roglic", "Richard Carapaz", "Egan Bernal"},
    {"New York Yankees", "St. Louis Cardinals", "Boston Red Sox", "Los Angeles Dodgers"}, 
    {"Emma Raducanu", "Leylah Fernandez", "Aryna Sabalenka", "Naomi Osaka"},
    {"Norway", "United States", "Soviet Union", "Russia"},
    {"Daniil Medvedev", "Rafael Nadal", "Dominic Thiem", "Novak Djokovic"},
    {"Club Atletico Independiente", "Boca Juniors", "Club Nacional de Football", "Santos FC"}};

int sportscorrectanswers1[8] = {2, 0, 0, 0, 0, 0, 3, 1};

string sportsquestions2[] = {
    "Which of the following sports use a round ball? (Select all that apply)",
    "Which countries have won the FIFA World Cup? (Select all that apply)",
    "Which sports are part of the Olympic Decathlon? (Select all that apply)",
    "Which of the following are team sports? (Select all that apply)",
    "Which athletes have won the Laureus World Sportsman of the Year award? (Select all that apply)",
    "Which sports are included in the Commonwealth Games? (Select all that apply)",
    "Which of the following are racquet sports? (Select all that apply)",
    "Which athletes have won the Ballon d'Or award? (Select all that apply)"};

string sportsoptions2[][4] = {
    {"Football", "Basketball", "Volleyball", "Tennis"},
    {"Brazil", "Germany", "Argentina", "Italy"},
    {"100 meters", "Long jump", "Shot put", "High jump"},
    {"Football", "Cricket", "Basketball", "Tennis"},
    {"Usain Bolt", "Roger Federer", "LeBron James", "Cristiano Ronaldo"},
    {"Swimming", "Athletics", "Badminton", "Weightlifting"},
    {"Tennis", "Squash", "Table tennis", "Badminton"},
    {"Lionel Messi", "Cristiano Ronaldo", "Neymar", "Robert Lewandowski"}};

int sportscorrectanswers2[][4] = {
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 2},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3}};

string sportsquestions3[] = {
    "Who won the Men's Singles title in the 2021 US Open tennis tournament?",
    "In which city is the Baseball Hall of Fame located?",
    "Who won the 2021 Tour de France?",
    "Which country has won the most World Series titles in MLB?",
    "Who won the Women's Singles title in the 2021 US Open tennis tournament?",
    "Which country has won the most medals in the history of the Winter Olympic Games?",
    "Who won the Men's Singles title in the 2022 Australian Open tennis tournament?",
    "Which team has won the most Copa Libertadores titles in South American club football?"};

string sportsanswers3[] = {
    "Daniil Medvedev",
    "Cooperstown",
    "Tadej Pogacar",
    "New York Yankees",
    "Emma Raducanu",
    "Norway",
    "Daniil Medvedev",
    "Club Atletico Independiente"};

string filmsquestions1[8] = {
    "Who directed the movie 'Lagaan: Once Upon a Time in India'?",
    "Which actor played the lead role in the movie 'Dilwale Dulhania Le Jayenge'?",
    "In which city is the Bollywood film industry based?",
    "Which actress won the National Film Award for Best Actress for her role in the movie 'Neerja'?",
    "Who composed the music for the movie 'Slumdog Millionaire'?",
    "Which film is India's official entry for the 2021 Academy Awards (Oscars)?",
    "Who is known as the 'King of Bollywood'?",
    "Which actor played the role of 'Baahubali' in the movie series of the same name?"};

string filmsoptions1[8][4] = {
    {"Ashutosh Gowariker", "Sanjay Leela Bhansali", "Karan Johar", "Rajkumar Hirani"},
    {"Shah Rukh Khan", "Aamir Khan", "Salman Khan", "Hrithik Roshan"},
    {"Mumbai", "Delhi", "Kolkata", "Chennai"},
    {"Sonam Kapoor", "Kangana Ranaut", "Deepika Padukone", "Priyanka Chopra"},
    {"A.R. Rahman", "Pritam", "Vishal-Shekhar", "Shankar-Ehsaan-Loy"},
    {"Gully Boy", "Padmaavat", "Super Deluxe", "Lagaan"},
    { "Amitabh Bachchan","Shah Rukh Khan", "Akshay Kumar", "Ranbir Kapoor"},
    {"Ranveer Singh","Prabhas", "Shahid Kapoor", "Rajinikanth"}};

int filmscorrectanswers1[8] = {0, 0, 0, 0, 0, 0, 1, 1};

string filmsquestions2[] = {
    "Which actors have won the Academy Award for Best Actor? (Select all that apply)",
    "Which actresses have won the Academy Award for Best Actress? (Select all that apply)",
    "Which films have won the Academy Award for Best Picture? (Select all that apply)",
    "Which directors have won the Academy Award for Best Director? (Select all that apply)",
    "Which films are part of the Marvel Cinematic Universe? (Select all that apply)",
    "Which actors have portrayed James Bond? (Select all that apply)",
    "Which films have won the Palme d'Or at the Cannes Film Festival? (Select all that apply)",
    "Which directors have won the Best Director award at the Oscars? (Select all that apply)"};

string filmsoptions2[][4] = {
    {"Marlon Brando", "Tom Hanks", "Daniel Day-Lewis", "Anthony Hopkins"},
    {"Meryl Streep", "Katharine Hepburn", "Julia Roberts", "Cate Blanchett"},
    {"The Godfather", "Titanic", "The Shape of Water", "Parasite"},
    {"Steven Spielberg", "Martin Scorsese", "Kathryn Bigelow", "Ang Lee"},
    {"Iron Man", "Avengers: Endgame", "Black Panther", "Guardians of the Galaxy"},
    {"Sean Connery", "Roger Moore", "Daniel Craig", "Pierce Brosnan"},
    {"Pulp Fiction", "Apocalypse Now", "The Tree of Life", "Parasite"},
    {"Steven Spielberg", "Alfonso Cuarón", "Ang Lee", "Bong Joon-ho"}};

int filmscorrectanswers2[][4] = {
    {0, 1, 2, 3},
    {0, 1, 3},
    {0, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 2, 3},
    {0, 1, 3}};

string filmsquestions3[] = {
    "Who directed the movie 'The Shawshank Redemption'?",
    "Which actor played the character Tony Stark in the Marvel Cinematic Universe?",
    "Which film won the Academy Award for Best Picture in 2020?",
    "Who portrayed the character Harry Potter in the film series?",
    "Which actress won the Academy Award for Best Actress for her role in 'Black Swan'?",
    "Which director directed the 'Lord of the Rings' trilogy?",
    "Which film won the Palme d'Or at the Cannes Film Festival in 2019?",
    "Who played the role of The Joker in the film 'The Dark Knight'?"};

string filmsanswers3[] = {
    "Frank Darabont",
    "Robert Downey Jr.",
    "Parasite",
    "Daniel Radcliffe",
    "Natalie Portman",
    "Peter Jackson",
    "Parasite",
    "Heath Ledger"};

string gkquestions1[8] = {
    "Who is known as the 'Father of the Nation' in India?",
    "Which city is the capital of India?",
    "Who wrote the Indian national anthem?",
    "In which year did India gain independence from British rule?",
    "Which river is known as the 'Ganga' in India?",
    "Which is the highest mountain peak in India?",
    "Who was the first President of India?",
    "Which state in India is known as the 'Land of the Gods'?"};

string gkoptions1[8][4] = {
    {"Mahatma Gandhi", "Jawaharlal Nehru", "Subhas Chandra Bose", "B.R. Ambedkar"},
    {"New Delhi", "Mumbai", "Kolkata", "Chennai"},
    {"Rabindranath Tagore", "Bankim Chandra Chattopadhyay", "Sarojini Naidu", "Muhammad Iqbal"},
    {"1947", "1950", "1942", "1965"},
    {"Ganges", "Yamuna", "Brahmaputra", "Godavari"},
    {"Kangchenjunga", "Mount Everest", "Nanda Devi", "Annapurna"},
    {"Rajendra Prasad", "Jawaharlal Nehru", "S. Radhakrishnan", "Dr. A.P.J. Abdul Kalam"},
    {"Uttarakhand", "Himachal Pradesh", "Jammu and Kashmir", "Uttar Pradesh"}};

int gkcorrectanswers1[8] = {0, 0, 0, 0, 0, 1, 0, 0};

string gkquestions2[] = {
    "Which countries are part of the G7? (Select all that apply)",
    "Which languages are spoken in Switzerland? (Select all that apply)",
    "Which are the official languages of the United Nations? (Select all that apply)",
    "Which cities have hosted the Olympic Games? (Select all that apply)",
    "Which countries are permanent members of the United Nations Security Council? (Select all that apply)",
    "Which are the largest deserts in the world? (Select all that apply)",
    "Which are the Seven Wonders of the Ancient World? (Select all that apply)",
    "Which planets are part of our solar system? (Select all that apply)"};

string gkoptions2[][4] = {
    {"United States", "United Kingdom", "Canada", "France"},
    {"German", "French", "Italian", "English"},
    {"English", "French", "Spanish", "Russian"},
    {"Athens", "London", "Beijing", "Rio de Janeiro"},
    {"United States", "United Kingdom", "Russia", "China"},
    {"Sahara", "Arabian", "Gobi", "Patagonian"},
    {"Great Pyramid of Giza", "Hanging Gardens of Babylon", "Colossus of Rhodes", "Lighthouse of Alexandria"},
    {"Mercury", "Venus", "Earth", "Mars"}};

int gkcorrectanswers2[][4] = {
    {0, 1, 2, 3},
    {1, 2},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 1, 2, 3},
    {0, 2},
    {0, 1, 2, 3},
    {2, 3}};

string gkquestions3[] = {
    "What is the capital city of Australia?",
    "Which planet is known as the 'Red Planet'?",
    "Which country is famous for the Taj Mahal?",
    "What is the currency of Japan?",
    "Who painted the Mona Lisa?",
    "What is the largest ocean in the world?",
    "What is the tallest mountain in the world?",
    "Which country is known as the 'Land of the Rising Sun'?"};

string gkanswers3[] = {
    "Canberra",
    "Mars",
    "India",
    "Japanese Yen",
    "Leonardo da Vinci",
    "Pacific Ocean",
    "Mount Everest",
    "Japan"};

bool isNumberInArray(int number, const int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            return true;
        }
    }
    return false;
}

struct User
{
    string username;
    string password;
};

void registerUser()
{
    ofstream outfile("users.txt", ios::app);
    if (!outfile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    User newUser;

    cout << "Enter username: ";
    cin >> newUser.username;
    cout << "Enter password: ";
    cin >> newUser.password;

    outfile << newUser.username << " " << newUser.password << endl;
    outfile.close();

    cout << "Registration successful!" << endl;
}

bool loginUser()
{
    ifstream infile("users.txt");
    if (!infile)
    {
        cerr << "Error opening file." << endl;
        return false;
    }

    User userToLogin;

    cout << "Enter username: ";
    cin >> userToLogin.username;
    cout << "Enter password: ";
    cin >> userToLogin.password;

    string storedUsername, storedPassword;
    while (infile >> storedUsername >> storedPassword)
    {
        if (storedUsername == userToLogin.username && storedPassword == userToLogin.password)
        {
            infile.close();
            return true;
        }
    }

    infile.close();
    return false;
}

int star = 0;
void sports1();
void sports2();
void sports3();
void films1();
void films2();
void films3();
void gk1();
void gk2();
void gk3();

void sports1()
{
    int i, j, userans, score = 0, life = 3, yes;

    for (i = 0; i < 8; i++)
    {
        cout << sportsquestions1[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << sportsoptions1[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> userans;
        if (userans == sportscorrectanswers1[i] + 1)
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            sports1();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            sports2();
        }
        else
        {
            cout << "thank You!!" << endl;
        }
    }
}
void sports2()
{
    int i, j, userans, score = 0, life = 3, yes;
    char w, x, y, z;
    for (i = 0; i < 8; i++)
    {
        cout << sportsquestions2[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << sportsoptions2[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> x >> y >> z >> w;
        if ((isNumberInArray(0, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == true && x == 'T') || (isNumberInArray(0, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == false && x == 'F'))
        {
            if ((isNumberInArray(1, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == true && y == 'T') || (isNumberInArray(1, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == false && y == 'F'))
            {
                if ((isNumberInArray(2, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == true && z == 'T') || (isNumberInArray(2, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == false && z == 'F'))
                {
                    if ((isNumberInArray(3, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == true && w == 'T') || (isNumberInArray(3, sportscorrectanswers2[i], sizeof(sportscorrectanswers2[i]) / sizeof(sportscorrectanswers2[i][0])) == false && w == 'F'))
                    {
                        cout << "correct answer" << endl;
                        score++;
                    }
                    else
                    {
                        cout << "wrong" << endl;
                        life--;
                    }
                }
                else
                {
                    cout << "wrong" << endl;
                    life--;
                }
            }
            else
            {
                cout << "wrong" << endl;
                life--;
            }
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            sports2();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            sports3();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
}
void sports3()
{
    int i, j, score = 0, life = 3, yes;
    string userans;

    for (i = 0; i < 8; i++)
    {
        cout << sportsquestions3[i] << endl;

        cout << "enter your response:" << endl;
        getline(cin, userans);
        if (userans == sportsanswers3[i])
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            sports3();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "Congratulation you are a champion!! you have complited the sports levels" << endl;
        cout << "would you like to play quiz on another topic if yes enter value accordingly " << endl
             << "films - 1" << endl
             << "gk - 2"
             << "stop - 0" << endl;

        cin >> yes;
        switch (yes)
        {
        case 0:
            cout << "thank you" << endl;
            break;
        case 1:
            films1();
            break;
        case 2:
            gk1();
            break;
        default:
            break;
        }
    }
}
void films1()
{
    int i, j, userans, score = 0, life = 3, yes;

    for (i = 0; i < 8; i++)
    {
        cout << filmsquestions1[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << filmsoptions1[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> userans;
        if (userans == filmscorrectanswers1[i] + 1)
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            films1();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            films2();
        }
        else
        {
            cout << "thank You!!" << endl;
        }
    }
}
void films2()
{
    int i, j, userans, score = 0, life = 3, yes;
    char w, x, y, z;
    for (i = 0; i < 8; i++)
    {
        cout << filmsquestions2[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << filmsoptions2[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> x >> y >> z >> w;
        if ((isNumberInArray(0, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == true && x == 'T') || (isNumberInArray(0, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == false && x == 'F'))
        {
            if ((isNumberInArray(1, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == true && y == 'T') || (isNumberInArray(1, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == false && y == 'F'))
            {
                if ((isNumberInArray(2, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == true && z == 'T') || (isNumberInArray(2, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == false && z == 'F'))
                {
                    if ((isNumberInArray(3, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == true && w == 'T') || (isNumberInArray(3, filmscorrectanswers2[i], sizeof(filmscorrectanswers2[i]) / sizeof(filmscorrectanswers2[i][0])) == false && w == 'F'))
                    {
                        cout << "correct answer" << endl;
                        score++;
                    }
                    else
                    {
                        cout << "wrong" << endl;
                        life--;
                    }
                }
                else
                {
                    cout << "wrong" << endl;
                    life--;
                }
            }
            else
            {
                cout << "wrong" << endl;
                life--;
            }
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            films2();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            films3();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
}
void films3()
{
    int i, j, score = 0, life = 3, yes;
    string userans;

    for (i = 0; i < 8; i++)
    {
        cout << filmsquestions3[i] << endl;

        cout << "enter your response:" << endl;
        getline(cin, userans);
        if (userans == filmsanswers3[i])
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            films3();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "Congratulation you are a champion!! you have complited the films levels" << endl;
        cout << "would you like to play quiz on another topic if yes enter value accordingly " << endl
             << "sports - 1" << endl
             << "gk - 2"
             << "stop - 0" << endl;

        cin >> yes;
        switch (yes)
        {
        case 0:
            cout << "thank you" << endl;
            break;
        case 1:
            sports1();
            break;
        case 2:
            gk1();
            break;
        default:
            break;
        }
    }
}
void gk1()
{
    int i, j, userans, score = 0, life = 3, yes;

    for (i = 0; i < 8; i++)
    {
        cout << gkquestions1[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << gkoptions1[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> userans;
        if (userans == gkcorrectanswers1[i] + 1)
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            gk1();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            gk2();
        }
        else
        {
            cout << "thank You!!" << endl;
        }
    }
}
void gk2()
{
    int i, j, userans, score = 0, life = 3, yes;
    char w, x, y, z;
    for (i = 0; i < 8; i++)
    {
        cout << gkquestions2[i] << endl;
        for (j = 0; j < 4; j++)
        {
            cout << gkoptions2[i][j] << endl;
        }
        cout << "enter your response:" << endl;
        cin >> x >> y >> z >> w;
        if ((isNumberInArray(0, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == true && x == 'T') || (isNumberInArray(0, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == false && x == 'F'))
        {
            if ((isNumberInArray(1, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == true && y == 'T') || (isNumberInArray(1, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == false && y == 'F'))
            {
                if ((isNumberInArray(2, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == true && z == 'T') || (isNumberInArray(2, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == false && z == 'F'))
                {
                    if ((isNumberInArray(3, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == true && w == 'T') || (isNumberInArray(3, gkcorrectanswers2[i], sizeof(gkcorrectanswers2[i]) / sizeof(gkcorrectanswers2[i][0])) == false && w == 'F'))
                    {
                        cout << "correct answer" << endl;
                        score++;
                    }
                    else
                    {
                        cout << "wrong" << endl;
                        life--;
                    }
                }
                else
                {
                    cout << "wrong" << endl;
                    life--;
                }
            }
            else
            {
                cout << "wrong" << endl;
                life--;
            }
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            gk2();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
    else
    {
        cout << "do you want to play next level if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            gk3();
        }
        else
        {
            cout << "thank you" << endl;
        }
    }
}
void gk3()
{
    int i, j, score = 0, life = 3, yes;
    string userans;

    for (i = 0; i < 8; i++)
    {
        cout << gkquestions3[i] << endl;

        cout << "enter your response:" << endl;
        getline(cin, userans);
        if (userans == gkanswers3[i])
        {
            cout << "correct answer" << endl;
            score++;
        }
        else
        {
            cout << "wrong" << endl;
            life--;
        }
        if (life == 0)
        {
            cout << "sorry you lose all life you lose" << endl;
            break;
        }
    }
    cout << "your score is " << score << endl;
    if (score == 8)
    {
        cout << "you have earned 2 *" << endl;
        star + 2;
    }
    if (score == 7)
    {
        cout << "you have earned 1 *" << endl;
        star++;
    }
    if (score < 7)
    {
        cout << "do you want to play this level again if yes enter 1 else 0" << endl;
        cin >> yes;
        if (yes == 1)
        {
            gk3();
        }
        else
        {
            cout << " thank you!!" << endl;
        }
    }
    else
    {
        cout << "Congratulation you are a champion!! you have complited the gk levels" << endl;
        cout << "would you like to play quiz on another topic if yes enter value accordingly " << endl;
        cout << "films - 1" << endl;
        cout << "sports - 2" << endl;
        cout << "stop - 0" << endl;

        cin >> yes;
        switch (yes)
        {
        case 0:
            cout << "thank you" << endl;
            break;
        case 1:
            films1();
            break;
        case 2:
            sports1();
            break;
        default:
            break;
        }
    }
}

int main()
{

    int a;
    string cat[3] = {"sports", "gk", "films"};
    int choice;
    bool loggedIn = false;

    do
    {
        cout << "1. Register\n2. Login\n3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            loggedIn = loginUser();
            if (loggedIn)
            {
                cout << "Login successful!" << endl;
                cout << "enter a number for category you want " << endl
                     << "sports - 1" << endl
                     << "gk - 2" << endl
                     << "films - 3" << endl
                     << "exit - 4" << endl;
                cin >> a;
                switch (a)
                {
                case 1:
                    sports1();
                    break;
                case 2:
                    gk1();
                    break;
                case 3:
                    films1();
                    break;
                case 4:
                    cout << "thank you!!" << endl;
                default:
                    break;
                }
            }
            else
            {
                cout << "Login failed. Invalid username or password." << endl;
            }
            break;
        case 3:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}
