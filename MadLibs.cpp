#include <iostream>
#include <string>
// declare header files (String and input/output needed)
using namespace std;
int main() {
//declare variables
    string Noun,Adjective,Verb,Adverb,Plural_Noun,Adjective2,Verb_ending_in_ing,Noun2,Adjective3,Verb2;
    int option;
//get user input
    cout << "Please choose story 1,2 or 3 (type 1,2 or 3):";
    cin >>option;
    cout << "Type in a Noun:";
    getline(cin,Noun);
    cout << "Type in a Adjective:";
    getline(cin,Adjective);
    cout << "Type in a Verb:";
    getline(cin,Verb);
    cout << "Type in a Adverb:";
    getline(cin,Adverb);
    cout << "Type in a Plural Noun:";
    getline(cin,Plural_Noun);
    cout << "Type in a Adjective:";
    getline(cin,Adjective2);
    cout << "Type in a Verb ending in \'ing\':";
    getline(cin,Verb_ending_in_ing);
    cout << "Type in a Noun:";
    getline(cin,Noun2);
    cout << "Type in a Adjective:";
    getline(cin,Adjective3); 
    cout << "Type in a Verb:";
    getline(cin,Verb2);    
  
    cout<< "Lets take a look at our story! (please note the Madlib stories themselves were generted by ChatGPT )" << endl << endl;
//check which story to choose and add the variables to the story
    if(option==1)
    {  
        cout << "Once upon a time, in a " << Adjective << " kingdom, there lived a brave " << Noun << ". " << endl;
        cout << "They were known for their incredible " << Verb << " skills and their " << Adverb << " determination to protect their kingdom." << endl << endl;

        cout << "One day, a group of " << Plural_Noun << " with " << Adjective2 << " personalities arrived in the kingdom, causing chaos and " << Verb_ending_in_ing << " around every corner." << endl;
        cout << "The " << Noun << " knew they had to put an end to their mischief and embarked on a quest to find the powerful " << Noun2 << "." << endl << endl;

        cout << "After a long and " << Adjective3 << " journey, the " << Noun << " finally found the " << Noun2 << " hidden deep within a " << Adjective << " cave." << endl;
        cout << "With the " << Noun2 << "'s " << Verb2 << " powers, the " << Noun << " was able to restore peace and harmony to the kingdom." << endl << endl;

        cout << "The people of the kingdom celebrated the " << Adjective3 << " deeds of the " << Noun << " and admired their unwavering dedication to " << Verb2 << " the impossible." << endl;
        cout << "The legend of the " << Adjective << " " << Noun << " and their extraordinary journey would be passed down through generations, inspiring future heroes." << endl;
    }
    else if(option==2)
    {
        cout << "In a land filled with " << Adjective << " " << Plural_Noun << ", there was a " << Adjective2 << " " << Noun << "." << endl;
        cout << "This " << Noun << " possessed the ability to " << Verb << " " << Adverb << " and was loved by all." << endl << endl;

        cout << "One day, while " << Verb_ending_in_ing << " through the enchanted " << Noun2 << ", the " << Noun << " discovered a hidden treasure." << endl;
        cout << "The treasure radiated with " << Adjective3 << " energy and promised to grant a single wish to whoever found it." << endl << endl;

        cout << "The " << Noun << " knew exactly what they desired: to bring " << Adjective2 << " happiness to their beloved " << Plural_Noun << "." << endl;
        cout << "With great determination, they made their wish and the world transformed before their eyes." << endl << endl;

        cout << "From that day forward, the " << Noun << " and their " << Plural_Noun << " lived in a realm of " << Adjective3 << " wonder and joy." << endl;
        cout << "Their lives were filled with endless " << Verb2 << " and every day was an adventure to be cherished." << endl << endl;

        cout << "And so, the story of the " << Adjective << " " << Noun << " and their extraordinary journey became a legend, inspiring generations to follow their dreams." << endl;
        cout << "Their tale reminded all who heard it that with " << Adjective2 << " spirit and a heart full of love, anything is possible." << endl;

    }
    else{
        cout << "Once upon a time, in a land far, far away, there lived a " << Adjective << " " << Noun << "." << endl;
        cout << "This peculiar " << Noun << " had a unique talent: it could " << Verb << " " << Adverb << " and make " << Plural_Noun << " laugh uncontrollably." << endl << endl;

        cout << "Every day, the " << Noun << " would go around the kingdom, " << Verb_ending_in_ing << " and spreading joy to everyone it encountered." << endl;
        cout << "People couldn't help but burst into fits of laughter in the presence of this " << Adjective2 << " and silly " << Noun << "." << endl << endl;

        cout << "One day, the " << Noun << " stumbled upon a mysterious " << Noun2 << " that had the power to grant any wish." << endl;
        cout << "But instead of wishing for riches or fame, the " << Noun << " wished for an endless supply of " << Adjective3 << " jokes." << endl << endl;

        cout << "From that day forward, the kingdom was filled with laughter and " << Plural_Noun << " rolling on the floor." << endl;
        cout << "The " << Noun << " became a beloved figure, and people would gather just to hear its side-splitting " << Verb2 << "." << endl << endl;

        cout << "And so, the funny " << Adjective << " " << Noun << " and its hilarious adventures became the stuff of legends." << endl;
        cout << "Generations would remember the joy it brought and how it taught them the importance of laughter and not taking life too seriously." << endl;
    }

    return 0;
}
