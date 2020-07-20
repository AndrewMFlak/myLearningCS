#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// string textInput = "Congratulations! Today is your day. You're off to Great Places! You're off and away!";
// string textInput2 = "Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.";
// string textInput3 = "It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.";
// string textInput4 = "Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, 'and what is the use of a book,' thought Alice 'without pictures or conversation?'";
// string textInput5 = "It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.";
// string textInput6 = "When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.";
// 295 letter(s)
// 70 word(s)
// 3 sentence(s)
long charCount;
int wordCount;
int sentenceCount;
int nullCharacter;
char userInput;
int getCharCount(char userInput);
int getWordCount(char userInput);
int getSentenceCount(char userInput);
int colemanLiau(long charCount, int wordCount, int sentenceCount);

    int main(void)
{
    charCount = 0;
    wordCount = 1;
    sentenceCount = 0;
    nullCharacter = 2;
    // bool wordCount = false;
    // printf("Hello World\n");
    string getUserInput = get_string("Please Input a String To check the grade level: \n");
    // printf("Text: %s\n", getUserInput);
    for (int i = 0; i < strlen(getUserInput); i++)
    {
        userInput = getUserInput[i];
        getCharCount(userInput);
        getWordCount(userInput);
        getSentenceCount(userInput);
    }
    printf("sentence count: %i\n", sentenceCount);
    printf("word count: %i\n", wordCount);
    printf("char count: %li\n", charCount);
    colemanLiau(charCount, wordCount, sentenceCount);
   
    return 0;
}

int colemanLiau(long charCount, int wordCount, int sentenceCount)
{
    float perOneHundo = 100.00000 / (float) wordCount;
    //Here, L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
    float L = charCount * (float) perOneHundo;
    float S = sentenceCount * (float) perOneHundo;
    printf("per100do: %.6f\n",perOneHundo);
    printf("L: %.2f\n", L);
    printf("S: %.2f\n", S);
    int grade = round(0.0588 * L - 0.296 * S - 15.8);
    if((float) grade < 1) {
        printf("Before Grade 1\n");
    }
    else if ((float) grade > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", (float) grade);
    }
    return grade;
}
int getCharCount(char userInput)
{
    if (isalpha(userInput) && userInput != ',' && userInput != ':' && userInput != ';' && userInput != '"')
        {
            charCount++;
            return charCount;
        }
        return 0;
}
int getWordCount(char userInput)
{
    if (userInput == ' ')
        {
            wordCount++;
            return wordCount;
        }
        return 0;
}
int getSentenceCount(char userInput)
{
    if (userInput == '!' || userInput == '.' || userInput == '?')
        {
            sentenceCount++;
            return sentenceCount;
        }
        return 0;
}
