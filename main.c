

#include "quiztypes.h"
#include <ctype.h>
#include <stdio.h>

#define DEFAULT "\x1b[0m"
#define RED "\x1b[31;1m"
#define GREEN "\x1b[32;1m"
#define YELLOW "\x1b[33;1m"
#define BLUE "\x1b[34;1m"
#define CYAN "\x1b[36;1m"

Quiz quizzes[] = {

    {.questions =
         (Question[]){
             {"What is the capital of France?",
              (Option[]){{'A', "Berlin"},
                         {'B', "Madrid"},
                         {'C', "Paris"},
                         {'D', "Rome"}},
              4, 'C'},
             {"2 + 2 = ?",
              (Option[]){{'A', "3"}, {'B', "4"}, {'C', "5"}, {'D', "6"}}, 4,
              'B'},
             {"Which planet is known as the Red Planet?",
              (Option[]){{'A', "Earth"},
                         {'B', "Mars"},
                         {'C', "Jupiter"},
                         {'D', "Venus"}},
              4, 'B'},
             {"Largest ocean?",
              (Option[]){{'A', "Atlantic"},
                         {'B', "Indian"},
                         {'C', "Arctic"},
                         {'D', "Pacific"}},
              4, 'D'},
             {"H2O is?",
              (Option[]){{'A', "Oxygen"},
                         {'B', "Hydrogen"},
                         {'C', "Water"},
                         {'D', "Salt"}},
              4, 'C'},
             {"Fastest land animal?",
              (Option[]){{'A', "Lion"},
                         {'B', "Tiger"},
                         {'C', "Cheetah"},
                         {'D', "Horse"}},
              4, 'C'},
             {"5 * 6 = ?",
              (Option[]){{'A', "30"}, {'B', "35"}, {'C', "25"}, {'D', "40"}}, 4,
              'A'},
             {"Sun is a?",
              (Option[]){{'A', "Planet"},
                         {'B', "Star"},
                         {'C', "Moon"},
                         {'D', "Comet"}},
              4, 'B'},
             {"Which is a mammal?",
              (Option[]){{'A', "Shark"},
                         {'B', "Dolphin"},
                         {'C', "Octopus"},
                         {'D', "Trout"}},
              4, 'B'},
             {"Square root of 16?",
              (Option[]){{'A', "2"}, {'B', "3"}, {'C', "4"}, {'D', "5"}}, 4,
              'C'}},
     .questionCount = 10,
     .topic = "General Knowledge"},

    {.questions =
         (Question[]){
             {"Who wrote Hamlet?",
              (Option[]){{'A', "Shakespeare"},
                         {'B', "Tolstoy"},
                         {'C', "Hemingway"},
                         {'D', "Dante"}},
              4, 'A'},
             {"First man on the moon?",
              (Option[]){
                  {'A', "Buzz"}, {'B', "Neil"}, {'C', "Yuri"}, {'D', "Alan"}},
              4, 'B'},
             {"WW2 ended in?",
              (Option[]){
                  {'A', "1943"}, {'B', "1944"}, {'C', "1945"}, {'D', "1946"}},
              4, 'C'},
             {"Pyramids are in?",
              (Option[]){{'A', "Mexico"},
                         {'B', "Egypt"},
                         {'C', "India"},
                         {'D', "China"}},
              4, 'B'},
             {"Roman numeral X = ?",
              (Option[]){{'A', "5"}, {'B', "10"}, {'C', "50"}, {'D', "100"}}, 4,
              'B'},
             {"Who discovered gravity?",
              (Option[]){{'A', "Einstein"},
                         {'B', "Newton"},
                         {'C', "Tesla"},
                         {'D', "Darwin"}},
              4, 'B'},
             {"Cold War rivals?",
              (Option[]){{'A', "US-UK"},
                         {'B', "US-USSR"},
                         {'C', "China-Japan"},
                         {'D', "France-Germany"}},
              4, 'B'},
             {"First president USA?",
              (Option[]){{'A', "Lincoln"},
                         {'B', "Washington"},
                         {'C', "Adams"},
                         {'D', "Jefferson"}},
              4, 'B'},
             {"Great Wall country?",
              (Option[]){{'A', "India"},
                         {'B', "China"},
                         {'C', "Japan"},
                         {'D', "Korea"}},
              4, 'B'},
             {"Titanic sank in?",
              (Option[]){
                  {'A', "1910"}, {'B', "1912"}, {'C', "1915"}, {'D', "1920"}},
              4, 'B'}},
     .questionCount = 10,
     .topic = "History"},
    {.questions =
         (Question[]){
             {"What sound does a sheep make?",
              (Option[]){
                  {'A', "Moo"}, {'B', "Baa"}, {'C', "Oink"}, {'D', "Neigh"}},
              4, 'B'},
             {"A baby sheep is called?",
              (Option[]){
                  {'A', "Calf"}, {'B', "Kid"}, {'C', "Lamb"}, {'D', "Foal"}},
              4, 'C'},
             {"Male sheep is called?",
              (Option[]){{'A', "Ram"},
                         {'B', "Bull"},
                         {'C', "Boar"},
                         {'D', "Stallion"}},
              4, 'A'},
             {"Sheep are mainly raised for?",
              (Option[]){{'A', "Milk"},
                         {'B', "Wool"},
                         {'C', "Eggs"},
                         {'D', "Feathers"}},
              4, 'B'},
             {"What do sheep eat?",
              (Option[]){{'A', "Meat"},
                         {'B', "Grass"},
                         {'C', "Fish"},
                         {'D', "Insects"}},
              4, 'B'},
             {"Group of sheep is called?",
              (Option[]){
                  {'A', "Pack"}, {'B', "Flock"}, {'C', "Herd"}, {'D', "Swarm"}},
              4, 'B'},
             {"Sheep have how many legs?",
              (Option[]){{'A', "2"}, {'B', "4"}, {'C', "6"}, {'D', "8"}}, 4,
              'B'},
             {"Where are sheep commonly kept?",
              (Option[]){
                  {'A', "Barn"}, {'B', "Ocean"}, {'C', "Cage"}, {'D', "Tree"}},
              4, 'A'},
             {"What protects sheep from cold?",
              (Option[]){{'A', "Skin"},
                         {'B', "Fur"},
                         {'C', "Wool"},
                         {'D', "Feathers"}},
              4, 'C'},
             {"Shearing means?",
              (Option[]){{'A', "Feeding"},
                         {'B', "Cutting wool"},
                         {'C', "Washing"},
                         {'D', "Breeding"}},
              4, 'B'},
             {"Which animal guards sheep?",
              (Option[]){
                  {'A', "Cat"}, {'B', "Dog"}, {'C', "Horse"}, {'D', "Duck"}},
              4, 'B'},
             {"Sheep are?",
              (Option[]){{'A', "Carnivores"},
                         {'B', "Herbivores"},
                         {'C', "Omnivores"},
                         {'D', "Scavengers"}},
              4, 'B'},
             {"Where do sheep sleep?",
              (Option[]){
                  {'A', "Nest"}, {'B', "Den"}, {'C', "Field"}, {'D', "Hive"}},
              4, 'C'},
             {"What color is sheep wool usually?",
              (Option[]){{'A', "Blue"},
                         {'B', "Green"},
                         {'C', "White"},
                         {'D', "Purple"}},
              4, 'C'},
             {"Farm animals include?",
              (Option[]){
                  {'A', "Lion"}, {'B', "Sheep"}, {'C', "Tiger"}, {'D', "Wolf"}},
              4, 'B'},
             {"What do farmers feed sheep?",
              (Option[]){
                  {'A', "Hay"}, {'B', "Candy"}, {'C', "Fish"}, {'D', "Bread"}},
              4, 'A'},
             {"A sheep’s baby sound?",
              (Option[]){
                  {'A', "Roar"}, {'B', "Bleat"}, {'C', "Chirp"}, {'D', "Hiss"}},
              4, 'B'},
             {"Which is NOT a farm animal?",
              (Option[]){
                  {'A', "Cow"}, {'B', "Pig"}, {'C', "Sheep"}, {'D', "Shark"}},
              4, 'D'},
             {"Sheep wool is used for?",
              (Option[]){{'A', "Metal"},
                         {'B', "Clothing"},
                         {'C', "Plastic"},
                         {'D', "Glass"}},
              4, 'B'},
             {"Where do sheep graze?",
              (Option[]){{'A', "Desert"},
                         {'B', "Pasture"},
                         {'C', "City"},
                         {'D', "Mountain"}},
              4, 'B'}},
     .questionCount = 20,
     .topic = "Sheep & Farm Animals"},
    {.questions =
         (Question[]){
             {"What do bees produce?",
              (Option[]){
                  {'A', "Milk"}, {'B', "Honey"}, {'C', "Wool"}, {'D', "Silk"}},
              4, 'B'},
             {"A bee home is called?",
              (Option[]){
                  {'A', "Nest"}, {'B', "Hive"}, {'C', "Den"}, {'D', "Burrow"}},
              4, 'B'},
             {"Who lays eggs in a hive?",
              (Option[]){{'A', "Worker"},
                         {'B', "Drone"},
                         {'C', "Queen"},
                         {'D', "Larva"}},
              4, 'C'},
             {"Bees collect nectar from?",
              (Option[]){{'A', "Trees"},
                         {'B', "Flowers"},
                         {'C', "Water"},
                         {'D', "Soil"}},
              4, 'B'},
             {"What do bees use nectar for?",
              (Option[]){{'A', "Wax"},
                         {'B', "Honey"},
                         {'C', "Food only"},
                         {'D', "Poison"}},
              4, 'B'},
             {"Male bees are called?",
              (Option[]){{'A', "Workers"},
                         {'B', "Drones"},
                         {'C', "Guards"},
                         {'D', "Kings"}},
              4, 'B'},
             {"Worker bees are?",
              (Option[]){
                  {'A', "Male"}, {'B', "Female"}, {'C', "Both"}, {'D', "None"}},
              4, 'B'},
             {"What protects beekeepers?",
              (Option[]){{'A', "Armor"},
                         {'B', "Suit"},
                         {'C', "Helmet"},
                         {'D', "Shield"}},
              4, 'B'},
             {"Bees communicate by?",
              (Option[]){{'A', "Sound"},
                         {'B', "Dance"},
                         {'C', "Smell"},
                         {'D', "Light"}},
              4, 'B'},
             {"Honeycomb shape?",
              (Option[]){{'A', "Square"},
                         {'B', "Circle"},
                         {'C', "Hexagon"},
                         {'D', "Triangle"}},
              4, 'C'},
             {"What do bees pollinate?",
              (Option[]){{'A', "Rocks"},
                         {'B', "Flowers"},
                         {'C', "Water"},
                         {'D', "Sand"}},
              4, 'B'},
             {"Bees store honey in?",
              (Option[]){{'A', "Leaves"},
                         {'B', "Cells"},
                         {'C', "Ground"},
                         {'D', "Shells"}},
              4, 'B'},
             {"What is beeswax used for?",
              (Option[]){{'A', "Fuel"},
                         {'B', "Candles"},
                         {'C', "Metal"},
                         {'D', "Glass"}},
              4, 'B'},
             {"Bees belong to which group?",
              (Option[]){{'A', "Mammals"},
                         {'B', "Insects"},
                         {'C', "Birds"},
                         {'D', "Fish"}},
              4, 'B'},
             {"What do bees drink?",
              (Option[]){
                  {'A', "Milk"}, {'B', "Water"}, {'C', "Oil"}, {'D', "Juice"}},
              4, 'B'},
             {"Beekeeping is called?",
              (Option[]){{'A', "Apiculture"},
                         {'B', "Agriculture"},
                         {'C', "Horticulture"},
                         {'D', "Zoology"}},
              4, 'A'},
             {"What attracts bees?",
              (Option[]){{'A', "Bright flowers"},
                         {'B', "Dark caves"},
                         {'C', "Cold air"},
                         {'D', "Noise"}},
              4, 'A'},
             {"How many wings do bees have?",
              (Option[]){{'A', "2"}, {'B', "4"}, {'C', "6"}, {'D', "8"}}, 4,
              'B'},
             {"What do bees make from pollen?",
              (Option[]){
                  {'A', "Wax"}, {'B', "Bread"}, {'C', "Honey"}, {'D', "Milk"}},
              4, 'B'},
             {"Bees help plants by?",
              (Option[]){{'A', "Eating leaves"},
                         {'B', "Pollinating"},
                         {'C', "Breaking stems"},
                         {'D', "Drying soil"}},
              4, 'B'}},
     .questionCount = 20,
     .topic = "Bees & Beekeeping"},
    {.questions =
         (Question[]){
             {"C language created by?",
              (Option[]){{'A', "Dennis Ritchie"},
                         {'B', "Bjarne"},
                         {'C', "James Gosling"},
                         {'D', "Guido"}},
              4, 'A'},
             {"HTML stands for?",
              (Option[]){{'A', "Hyper Trainer ML"},
                         {'B', "HyperText Markup Language"},
                         {'C', "HighText ML"},
                         {'D', "None"}},
              4, 'B'},
             {"Binary of 2?",
              (Option[]){{'A', "10"}, {'B', "11"}, {'C', "01"}, {'D', "00"}}, 4,
              'A'},
             {"CPU means?",
              (Option[]){{'A', "Central Process Unit"},
                         {'B', "Central Processing Unit"},
                         {'C', "Computer Unit"},
                         {'D', "Core Unit"}},
              4, 'B'},
             {"RAM is?",
              (Option[]){{'A', "Storage"},
                         {'B', "Memory"},
                         {'C', "CPU"},
                         {'D', "GPU"}},
              4, 'B'},
             {"Git command to clone?",
              (Option[]){
                  {'A', "copy"}, {'B', "clone"}, {'C', "pull"}, {'D', "init"}},
              4, 'B'},
             {"JS runs in?",
              (Option[]){{'A', "Browser"},
                         {'B', "Compiler"},
                         {'C', "Kernel"},
                         {'D', "BIOS"}},
              4, 'A'},
             {"1 byte = ?",
              (Option[]){{'A', "4 bits"},
                         {'B', "8 bits"},
                         {'C', "16 bits"},
                         {'D', "32 bits"}},
              4, 'B'},
             {"Linux is?",
              (Option[]){{'A', "Kernel"},
                         {'B', "IDE"},
                         {'C', "Language"},
                         {'D', "Browser"}},
              4, 'A'},
             {"OOP stands for?",
              (Option[]){{'A', "Object Oriented Programming"},
                         {'B', "Only One Program"},
                         {'C', "Open Program"},
                         {'D', "None"}},
              4, 'A'}},
     .questionCount = 10,
     .topic = "Programming"}

};

int main(void) {

  char playGame = 'y';
  int quizCount = 4;

  do {

    int selectedQuizIndex;

    printf("Select Quiz: \n");
    for (int i = 0; i < quizCount; i++) {
      Quiz quiz = quizzes[i];
      printf("%s : enter %d\n", quiz.topic, i);
    }

    printf("Enter quiz number: \n");
    scanf(" %d", &selectedQuizIndex);

    if (selectedQuizIndex < 0 || selectedQuizIndex >= quizCount) {
      printf("Invalid quiz number selected \n");
      continue;
    }

    Quiz selectedQuiz = quizzes[selectedQuizIndex];

    int currQuestionIndex = 0;
    int max = selectedQuiz.questionCount;
    int correctPoints = 0;

    // GAME LOOP
    do {

      Question currentQuestion = selectedQuiz.questions[currQuestionIndex];
      int displayQNumber = currQuestionIndex + 1;
      int possibleOptions[currentQuestion.optionCount];

      char correctValue = currentQuestion.correctValue;
      char userValue;

      char *correctOptionContent = "If you see this i am dumb";

      for (int i = 0; i < currentQuestion.optionCount; i++) {
        Option curr = currentQuestion.options[i];
        possibleOptions[i] = curr.value;
        if (curr.value == correctValue) {
          correctOptionContent = curr.content;
        }
      }

      printf("========================\n");
      printf("Question: %d\n", displayQNumber);
      printf("%s%s%s\n", CYAN, currentQuestion.question, DEFAULT);
      printf("----------\n");
      for (int i = 0; i < currentQuestion.optionCount; i++) {
        Option option = currentQuestion.options[i];
        printf("[%c] - %s\n", option.value, option.content);
      }
      printf("----------\n");
      printf("\n");
      printf("Enter the value of your answer: \n");
      scanf(" %c", &userValue);

      int isValid = 0;

      for (int i = 0; i < currentQuestion.optionCount; i++) {
        char curr = possibleOptions[i];
        if (tolower(userValue) == tolower(curr)) {
          isValid = 1;
        }
      }

      if (isValid != 1) {
        printf("Invalid option selected.\n");
        printf("Please select from either: ");
        for (int i = 0; i < currentQuestion.optionCount; i++) {
          char curr = possibleOptions[i];
          printf("%c, ", curr);
        }
        printf("\n");
        continue;
      }

      printf("\n");
      printf("==========\n");

      if (tolower(userValue) == tolower(correctValue)) {
        printf("%sCorrect! %s\n", GREEN, DEFAULT);
        correctPoints++;
      } else {
        printf("%sIncorrect! The answer was: %s\n", RED, DEFAULT);
        printf("%s\n", correctOptionContent);
      }

      printf("\n\n");

      currQuestionIndex++;

    } while (currQuestionIndex < max);

    printf("=============\n");
    printf("GAME SUMMARY\n");
    printf("=============\n");
    printf("Your score was: %d out of %d points\n", correctPoints, max);
    printf("=============\n");

    printf("Type y to play again \n");
    scanf(" %c", &playGame);

  } while (playGame == 'y' || playGame == 'Y');

  return 0;
}
