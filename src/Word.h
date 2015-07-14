/*
 * Word.h
 *
 *  Created on: Jul 14, 2015
 *      Author: amirmohammad
 */
#include <vector>
#include <map>


#ifndef WORD_H_
#define WORD_H_

class Word {
public:
	Word();
	virtual ~Word();

	//Get the number of repeations  of this word in all of the docs.
	long get_num_of_rep();

	//Increases the number of repeations  of this word in all of the docs/.
	void inc_num_of_rep();

	/*
	 * Add this document to the posting list of this word,
	 *If doc exists in the posting list then increases the number of rep of this word in that doc.
	*/
	void add_to_posting_list(unsigned long long docID)
	{
		std::iterator itr = postingList.find(docID);
		if (itr != postingList.end())
		{

		}
		else
		{

		}
	}

	//Returns the number of docs that contain this word.
	int get_num_of_doc();
	

private:
	std::string word;
	long num_of_rep;
	//num of docs that contain this word
	int num_of_doc;
	//a set of docs that contain this word with num of repeations of the word in each doc
	std::map<long long,int> postingList;


};
#endif /* WORD_H_ */
