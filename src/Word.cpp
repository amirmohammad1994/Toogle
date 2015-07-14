/*
 * Word.cpp
 *
 *  Created on: Jul 14, 2015
 *      Author: amirmohammad
 */

#include "Word.h"

Word::Word() {
	num_of_rep = 0;
	num_of_doc = 0;

}

Word::~Word() {
	// TODO Auto-generated destructor stub
}


long Word::get_num_of_rep() {
	return num_of_rep;
}

void Word::inc_num_of_rep() {
	num_of_rep++;
}

int Word::get_num_of_doc() {
	return num_of_doc;
}
