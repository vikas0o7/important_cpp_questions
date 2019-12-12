Please use this Google doc during your interview (your interviewer will see what you write here). To free your hands for typing, we recommend using a headset or speakerphone.
#include<bits/stdc++.h>
using namespace std;

Given an input_string and a reject_string, return the index of the first character in input_string which also appears in reject_string. If no such character exists, return the length of input_string.
input: hello, reject: abcde -> return 1


int strcspn(string input, string reject){
unordered_map<char, int> count;
for(int i=0;i<reject.length();++i){
count[reject[i]]++;
}
int index=0;
for(index=0;index< input.length();index++){
if(count.find(input[index])!=count.end()){
return index;
}
}
return input.length();
}
// input string =”hello” reject_string =”reject”

A “SET” is a collection of 3 cards where, for each attribute, the cards either all have the same value or all have different values.

Attributes and possible values:
Number: 1, 2, 3
Color: red, green, blue
Style: solid, shaded, outlined
Shape: square, circle, triangle

Is a SET:
Card 1: 3 red shaded squares
Card 2: 2 blue shaded circles
Card 3: 1 green shaded triangle

Is not a SET:
Card 1: 3 red shaded squares
Card 2: 2 green shaded circles
Card 3: 1 green shaded triangle

1. Write a function is_set(card_1, card_2, card_3) that returns whether or not a collection of three cards is a SET.
0. Think about how to represent each card to simplify implementing the above.

struct card{
  int number;
  string color;
 string style;
 string shape;
};

bool is_set(card card1, card card2, card card3){
if(card1->number! =card2->number && card1->number!= card3->number && card2->number!= card3->number) 
}


bool is_set(card card1, card card2, card card3){
	set<int> set1; set<string> set2; set<string> set3; set<string> shape;
	set1.insert(card1->number); set1.insert(card2->number); set1.insert(card3->number);
	set2.insert(card1->color);set2.insert(card2->color);set2.insert(card3->color);
	….
if(((set1.size() )%2)==1  && ((set2.size())%2)==1 && ((set3.size())%2)==1 && ((set4.size())%2)==1) return true;
else return false;

}






