//Sabrina Turney
//Last Edited July 24, 2019
//COP 2224 - C++ - Assignment 6
//This program uses arrays and a random number generator to randomly create 20 sentences.


//I include headers I'll be using to change the code.
//iosstream so the program will run on VS 2019,
//string header and standard library to use rand() as a function,
//and time to get a randomly generated number for our randomly generated sentences.

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <string.h>


//I only need a main function here, as the arrays are given to us.
int main(void)
{


	srand(time(NULL));
	//prototyping our random number generator.
	const char* article[]{ "the", "a", "one", "some", "any" };
	const char* noun[]{ "boy", "girl", "dog", "town", "car" };
	const char* verb[]{ "drove", "jumped", "ran", "walked", "skipped" };
	const char* preposition[]{ "to", "from", "over", "under", "on" };
	//These arrays were given explicitly to use, I just copied and pasted them right here.
	
	
	char sentence[60] = "";
	//Allows sentence arrays to be large in number, but right now, it's empty.


	//Here's where the program actually runs the good stuff. For loop until 20 sentences are reached!
	for (int i = 0; i < 20; i++)
	{


		strcat_s(sentence, article[rand() % 5]); //gets random article.
		strcat_s(sentence, " "); //Keeps the sentence from ending.
		sentence[0] = toupper(sentence[0]); //makes the first letter capitalized always.



		strcat_s(sentence, noun[rand() % 5]); //gets random noun, keeps sentence from ending!
		strcat_s(sentence, " ");



		strcat_s(sentence, verb[rand() % 5]); //gets random verb, keeps sentence from ending.
		strcat_s(sentence, " ");




		strcat_s(sentence, preposition[rand() % 5]); //gets random preposition, keeps sentence from ending.
		strcat_s(sentence, " ");



		strcat_s(sentence, article[rand() % 5]); //gets a random article and keeps sentence from ending (ad nauseam).
		strcat_s(sentence, " ");




		strcat_s(sentence, noun[rand() % 5]); //gets a random noun.



		//Now that we have a sentence of random quality, we can end the sentence with a period.
		strcat_s(sentence, ".");

		//Just formatted printing of the sentence array, now that it's complete!
		printf("%s\n", sentence);


		sentence[0] = '\0'; 
		//This part was tricky for me to figure out- The 0 keeps the sentences separated.

	}

	return 0;
} //end




