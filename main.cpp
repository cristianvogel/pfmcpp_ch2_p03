#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
int (Integer 4 bytes)
char (Character 1 byte)
bool (true of false)
float (Floating Point 4 bytes)
double (Double Floating Point 8 bytes)
void ( valueless )



2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//3)
/*
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int x = 25;
    double y = 25.5;
    bool isLearning = true;
    char channel = 'a';
    float gain = 5.0f;

    ignoreUnused(number, x, y, isLearning, channel, gain); //passing each variable declared to the ignoreUnused() function
}
*/
/*
 10 functions
 example:
 
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

*/

void variableDeclarations()
{
    int score = 100;
    int countDown = 50;
    int age = 42;

    char firstLetter = 'A';
    char plane = 'Z';
    char delimiter = ',';

    bool gameOver = true;
    bool success = false;
    bool active = true;

    float progress = 0.25f;
    float stepSize = 0.1f;
    float experienceRating = 0.0f;

    double finalSampleRate = 17/48000;
    double threshold = 1.0e-24;
    double successRatio = 16/19;

    ignoreUnused ( score, firstLetter, gameOver, progress, finalSampleRate  );
    ignoreUnused (countDown, plane, success, stepSize, threshold);
    ignoreUnused (age, delimiter, active, experienceRating, successRatio );

}
// 1 
int changeSliderValue ( int slide_id, int sliderType = 1 )
{
    ignoreUnused(slide_id, sliderType);
    return {};
}

//2 
float assignRandomValueToFader ( int fader_id, float seed, bool absolute=true)
{
    ignoreUnused(fader_id, seed, absolute);
    return {};
}

//3
bool isAnyKeyPressed () 
{
    ignoreUnused();
    return {};
}

//4
void startTimer (int timer_id, double startValue, double duration) 
{
    ignoreUnused(timer_id, startValue, duration);

}

//5
char getKeyboardInput() 
{
    ignoreUnused();
    return {};
}

//6
double scaledPi ( int scaleFactor ) 
{
    ignoreUnused (scaleFactor);
    return {};
}

//7
void emptyBuffer ( char buffer_ID, int tries = 2) 
{
    ignoreUnused (buffer_ID, tries);
}

//8
float pitchBendNote ( float range, bool smoothing, int resetValue = 0) 
{
    ignoreUnused (range, smoothing, resetValue);
    return {};
}

//9
int findOccurrencesOf (char findLetter, int stringBuffer_ID, int startIndex = 0 )
{
    ignoreUnused (stringBuffer_ID, findLetter, startIndex);
    return {};
}

//10

double stochasticGrowth (double stepSize, char direction, float seed = 0.909303f) 
{
    ignoreUnused (direction, stepSize, seed);
    return {};
}



int main()
{
    //example of calling that function
   // rentACar(6, 2); 
    
changeSliderValue(1);
assignRandomValueToFader(16, 0.1f);
isAnyKeyPressed();
startTimer(16, 0.0, 30000);
getKeyboardInput();
scaledPi(4);
emptyBuffer('z');
pitchBendNote ( 12.0f, true);
findOccurrencesOf ('0', 12);
stochasticGrowth (0.01, 'E');
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
