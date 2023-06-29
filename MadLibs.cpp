#include <iostream>
#include <string>

using namespace std;
int main() {
    string Noun,Adjective,Verb,Adverb,Plural_Noun,Adjective2,Verb_ending_in_ing,Noun2,Adjective3,Verb2;

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
    getline(cin,Adjective);
    cout << "Type in a Verb ending in \'ing\':";
    getline(cin,Verb_ending_in_ing);
    cout << "Type in a Noun:";
    getline(cin,Noun2);
    cout << "Type in a Adjective:";
    getline(cin,Adjective3); 
    cout << "Type in a Verb:";
    getline(cin,Verb2);    
  

     cout << "Once upon a time, in a faraway land, there was a brave adventurer who set out on a quest to find the legendary " << Noun << ". "
        << "This adventurer was known for their " << Adjective << " spirit and their ability to " << Verb << " even in the most challenging situations." << endl << endl;

    cout << "On their journey, they encountered a group of " << Plural_Noun << " who were known for their " << Adjective2 << " nature. "
        << "They were always " << Verb_ending_in_ing << " and causing mischief wherever they went." << endl << endl;

    cout << "As the adventurer continued their quest, they stumbled upon a magical " << Noun2 << " that possessed incredible powers. "
        << "This " << Adjective3 << " object had the ability to " << Verb2 << " the world and bring about great change." << endl << endl;

    cout << "With the help of the magical " << Noun2 << ", the adventurer was able to overcome obstacles and fulfill their destiny. "
        << "They returned home triumphant, forever remembered for their " << Adjective3 << " deeds and their unwavering determination to " << Verb2 << " the impossible." << endl << endl;

    cout << "And so, the tale of the brave adventurer and their incredible journey came to an end, leaving behind a legacy that would inspire generations to come." << endl;

    return 0;
}
