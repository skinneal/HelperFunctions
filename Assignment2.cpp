/**********************************************************************************************************************
Program: Assignment2.cpp
Author: Allison Skinner
Date: 10/15/19
Description: Implement the 14 functions included and test each of them in main by hard coded values. 
Input: Integers, floats, strings
Output: Bools, integers, strings
***********************************************************************************************************************/

#include <iostream> //cin.clear, cin.ignore, cin.fail
#include <string> //getline, length, size, [], at, +=
#include <cmath> //pow, abs

using namespace std;

int main() //test functions
{
	bool check_range(int lower_bound, int upper_bound, int test_value);

	//check_range
	cout << "\nTesting check_range(1, 10, 5)...\n"; //pass
	cout << "Expected: 1"; 
	cout << "\tActual: " << check_range(1, 10, 5); 
	(check_range(1, 10, 5) == 1)? cout << "\tPASSED\n" : cout << "\tFAILED\n";
	
	cout << "\nTesting check_range(5, 10, 15)...\n"; //fail
	cout << "Expected: 0"; 
	cout << "\tActual: " << check_range(5, 10, 15); 
	(check_range(1, 10, 15) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool is_capital(char letter);

	//is_capital
	cout << "\nTesting is_capital('A')...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << is_capital('A');
	(is_capital('A') == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting is_capital('a')...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << is_capital('a');
	(is_capital('a') == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool is_even(int num);

	//is_even
	cout << "\nTesting is_even(10)...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << is_even(10);
	(is_even(10) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting is_even(9)...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << is_even(9);
	(is_even(9) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool is_odd(int num);

	//is_odd
	cout << "\nTesting is_odd(9)...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << is_odd(9);
	(is_odd(9) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting is_odd(10)...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << is_odd(10);
	(is_odd(10) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	int equality_test(int num1, int num2);

	//equality_test
	cout << "\nTesting equality_test(5, 2)...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << equality_test(5, 2);
	(equality_test(5, 2) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting equality_test(5, 5)...\n"; //pass
	cout << "Expected: 0";
	cout << "\tActual: " << equality_test(5, 5);
	(equality_test(5, 5) == 0) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting equality_test(2, 5)...\n"; //pass
	cout << "Expected: -1";
	cout << "\tActual: " << equality_test(2, 5);
	(equality_test(2, 5) == -1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting equality_test(2, 2)...\n"; //fail
	cout << "Expected: 1";
	cout << "\tActual: " << equality_test(2, 2);
	(equality_test(2, 2) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting equality_test(0, 5)...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << equality_test(0, 5);
	(equality_test(0, 5) == 0) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting equality_test(5, 2)...\n"; //fail
	cout << "Expected: -1";
	cout << "\tActual: " << equality_test(5, 2);
	(equality_test(5, 2) == -1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool float_is_equal(float num1, float num2, float precision);

	//float_is_equal
	cout << "\nTesting float_is_equal(4.9, 4.1, 0.9)...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << float_is_equal(4.9f, 4.1f, 0.9f);
	(float_is_equal(4.9f, 4.1f, 0.9f) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting float_is_equal(5.5, 2.0, 1.0)...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << float_is_equal(5.5f, 2.0f, 1.0f);
	(float_is_equal(5.5f, 2.0f, 1.0f) == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";
	
	bool is_int(string num);

	//is_int
	cout << "\nTesting is_int(\"90\")...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << is_int("90");
	(is_int("90") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting is_int(\"0cat0\")...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << is_int("0cat0");
	(is_int("0cat0") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool numbers_present(string sentence);

	//numbers_present
	cout << "\nTesting numbers_present(\"I am 20 years old\")...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << numbers_present("I am 20 years old");
	(numbers_present("I am 20 years old") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting numbers_present(\"hello\")...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << numbers_present("hello");
	(numbers_present("hello") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool letters_present(string sentence);

	//letters_present
	cout << "\nTesting letters_present(\"The year is 2019\")...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << letters_present("The year is 2019");
	(letters_present("The year is 2019") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting letters_present(\"123456789\")...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << letters_present("123456789");
	(letters_present("123456789") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	bool contains_sub_string(string sentence, string sub_string);

	//contains_sub_string
	cout << "\nTesting contains_sub_string(\"computer science\",\"science\")...\n"; //pass
	cout << "Expected: 1";
	cout << "\tActual: " << contains_sub_string("computer science", "science");
	(contains_sub_string("computer science", "science") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting contains_sub_string(\"a\",\"hello\")...\n"; //fail
	cout << "Expected: 0";
	cout << "\tActual: " << contains_sub_string("a", "hello");
	(contains_sub_string("a", "hello") == 1) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	int word_count(string sentence);

	//word_count
	cout << "\nTesting word_count(\"This sentence has five words\")...\n"; //pass
	cout << "Expected: 5";
	cout << "\tActual: " << word_count("This sentence has five words");
	(word_count("This sentence has five words") == 5) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting word_count(\"#$@!$# #@$#@$@#$\")...\n"; //fail
	cout << "Expected: 2";
	cout << "\tActual: " << word_count("#$@!$# #@$#@$@#$");
	(word_count("#$@!$# #@$#@$@#$") == 2) ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	string to_upper(string sentence);

	//to_upper
	cout << "\nTesting to_upper(\"go beavs\")...\n"; //pass
	cout << "Expected: GO BEAVS";
	cout << "\tActual: " << to_upper("go beavs");
	(to_upper("go beavs")=="GO BEAVS") ? cout << "\tPASSED\n" : cout << "\tFAILED\n";
	
	cout << "\nTesting to_upper(\"GO BEAVS\")...\n"; //fail
	cout << "Expected: GO BEAVs";
	cout << "\tActual: " << to_upper("GO BEAVS");
	(to_upper("GO BEAVS")=="GO BEAVs") ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	string to_lower(string sentence);

	//to_lower 
	cout << "\nTesting to_lower(\"GO BEAVS\")...\n"; //pass
	cout << "Expected: go beavs";
	cout << "\tActual: " << to_lower("GO BEAVS");
	(to_lower("GO BEAVS")=="go beavs") ? cout << "\tPASSED\n" : cout << "\tFAILED\n";

	cout << "\nTesting to_lower(\"GO BEAVS\")...\n"; //fail
	cout << "Expected: go beavS";
	cout << "\tActual: " << to_lower("go beavs");
	(to_lower("go beavs")=="go beavS") ? cout << "\tPASSED\n" : cout << "\tFAILED\n";
	
	int get_int(string prompt);

	//get_int
	string input;
	cout << "\nPlease enter a number: ";
	cin >> input;
	cout << "Result: "<<get_int(input) << endl;

	return 0;
}

/***********************************************
Function: check_range()
Description: Indicates if the provided number 
is in the specified range
Parameters: int lower_bound, int upper_bound,
int test_value
Pre-Conditions: take 3 int parameters
Post-Conditions: return true (bool value) if int 
test_value falls between int lower_bound and int 
upper_bound; return false (bool value) otherwise
***********************************************/
bool check_range(int lower_bound, int upper_bound, int test_value) {
	if (test_value <= lower_bound || test_value >= upper_bound) {
		return false;
	}
	else {
		return true;
	}
}
/***********************************************
Function: is_capital()
Description: Indicates if a given character is a 
capital letter
Parameters: char letter
Pre-Conditions: take char parameter
Post-Conditions: return true (bool value) if char
is capitalized; return false (bool value) otherwise
***********************************************/
bool is_capital(char letter) {
	if (letter >= 65 && letter <= 90) { //uppercase
		return true;
	}
	else {
		return false;
	}
}
/***********************************************
Function: is_even()
Description: Indicates if a given number is even
Parameters: int num
Pre-Conditions: take int parameter
Post-Conditions: return true (bool value) if int 
is even; return false (bool value) otherwise
***********************************************/
bool is_even(int num) {
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
/***********************************************
Function: is_odd()
Description: Indicates if a given number is odd
Parameters: int num
Pre-Conditions: take int parameter
Post-Conditions: return true (bool value) if int 
is odd; return false (bool value) otherwise
***********************************************/
bool is_odd(int num) {
	if (num % 2 != 0) {
		return true;
	}
	else {
		return false;
	}
}
/***********************************************
Function: equality_test()
Description: Tests num1 against num2 and returns 
-1 if num1 < num2, returns 0 if num1 == num2, 
returns 1 if num1 > num2
Parameters: int num1, int num2
Pre-Conditions: take 2 int parameters 
Post-Conditions: return an int depending on 
relationship of int num1 and int num2
***********************************************/
int equality_test(int num1, int num2) {
	if (num1 < num2) {
		return -1;
	}
	if (num1 == num2) {
		return 0;
	}
	if (num1 > num2) {
		return 1;
	}
}
/***********************************************
Function: float_is_equal()
Description: Tests if num1 and num2 are equal to 
each other within a certain precision (hard coded)
Parameters: float num1, float num2, float precision
Pre-Conditions: take 3 float parameters
Post-Conditions: return true (bool value) if num1 
(float) = num2 (float) within precision (float); 
return false (bool value) otherwise
***********************************************/
bool float_is_equal(float num1, float num2, float precision) {
	float compVal = float(abs(num1 - num2));
	if (compVal <= precision) {
		return true;
	}
	else {
		return false;
	}
}
/***********************************************
Function: is_int()
Description: Indicates if a given string is an 
integer
Parameters: string num
Pre-Conditions: take a string parameter
Post-Conditions: return true (bool value) if string
is an integer; return false (bool value) otherwise
***********************************************/
bool is_int(string num) {
	for (int i = 0; i < num.size(); i++) {
		if (num[i] > 57 || num[i] < 48) { //numbers
			return false;
		}
	}
	return true;
}
/***********************************************
Function: numbers_present()
Description: Indicates if the provided string 
contains numbers
Parameters: string sentence
Pre-Conditions: take a string parameter
Post-Conditions: return true (bool value) if string
contains numbers; return false (bool value) otherwise
***********************************************/
bool numbers_present(string sentence) {
	for (int i = 0; i < sentence.size(); i++) {
		if ((sentence[i] <= 57 && sentence[i] >= 48)) { //numbers
			return true;
		}
	}
	return false;
}
/***********************************************
Function: letters_present()
Description: Indicates if the provided string 
contains letters
Parameters: string sentence
Pre-Conditions: take a string parameter
Post-Conditions: return true (bool value) if 
string contains letters; return false (bool value) 
otherwise
***********************************************/
bool letters_present(string sentence) {
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] >= 65 && sentence[i] <= 90) { //uppercase
			return true;
		}
		if (sentence[i] >= 97 && sentence[i] <= 122) { //lowercase
			return true;
		}
	}
	return false;
}
/***********************************************
Function: contains_sub_string
Description: Indicates if substring exists 
in sentence
Parameters: string sentence, string sub_string
Pre-Conditions: take 2 string parameters
Post-Conditions: return true (bool value) if 
string (sub-string) is found in string (sentence); 
return false (bool value) otherwise
***********************************************/
bool contains_sub_string(string sentence, string sub_string) {
	int difference = sentence.length() - sub_string.length(); //if sub-string length is greater than sentence length, return false
	if (difference < 0) {
		return false;
	}

	for (int sentencePosition = 0; sentencePosition < difference + 1; sentencePosition++) {
		int validity = 0;
		for (int wordPosition = 0; wordPosition < sub_string.length(); wordPosition++) {
			if (sentence[sentencePosition + wordPosition] == sub_string[wordPosition]) {
				validity++;
			}
		}
		if (validity == sub_string.length()) {
			return true;
		}
	}
	return false;
}
/***********************************************
Function: word_count
Description: Provides the number of words in a 
given string
Parameters: string sentence
Pre-Conditions: take a string parameter
Post-Conditions: return a value to tell how many 
words are in the string 
***********************************************/
int word_count(string sentence) {
	int words = 1;

	for (int i = 0; i < sentence.length(); i++) {
		if (!((sentence[i] >= 65 && sentence[i] <= 90) || //uppercase
			(sentence[i] >= 97 && sentence[i] <= 122) || //lowercase
			sentence[i] == 32 || sentence[i] == 33 || sentence[i] == 34 || sentence[i] == 40 
			|| sentence[i] == 44 || sentence[i] == 46 || sentence[i] == 63)){ // !"',.?
			return 0;
		}
		if (sentence[i] == 32) { //char is a space
			words++;
		}
	}
	return words;
}
/***********************************************
Function: to_upper
Description: Capitalizes all letters in a given 
string and leave all non-letter chracters unchanged
Parameters: string sentence
Pre-Conditions: take a string parameter
Post-Conditions: returns the string in all uppercase
***********************************************/
string to_upper(string sentence) {
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] < 123 && sentence[i] > 96) { //lowercase
			sentence[i] -= 32;
		}
	}
	return sentence;
}
/***********************************************
Function: to_lower
Description: Makes all letters lowercase in a 
given string and leave all non-letter chracters 
unchanged
Parameters: string sentence
Pre-Conditions: take a string parameter
Post-Conditions: returns the string in all lowercase
***********************************************/
string to_lower(string sentence) {
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] < 91 & sentence[i] > 64) { //uppercase
			sentence[i] += 32;
		}
	}
	return sentence;
}
/***********************************************
Function: get_int()
Description: Takes a prompt from the user as a 
string literal, checks if input is a valid integer,
returns the provided integer
Parameters: string prompt
Pre-Conditions: take a string parameter
Post-Conditions: return a value to tell if the string
is an int
***********************************************/
int get_int(string prompt) {
	int final = 0;
	for (int i = 0; i < prompt.size(); i++) {
		if ((prompt[i] > 57 || prompt[i] < 48)) { //numbers
			return -1;
		}
		final += int(prompt[i] - 48) * pow(10, (prompt.size() - 1 - i));
	}
	return final;
}
