/*
 * Tokenizer.h
 *
 *  Created on: Jul 12, 2015
 *      Author: amirmohammad
 */
#include <string>
#include <set>
#include <sstream>






#ifndef TOKENIZER_H_
#define TOKENIZER_H_

class Tokenizer {
public:
	Tokenizer();
	virtual ~Tokenizer();

	void tokenize(std::string text)
	{


			char ign[] = {' ','\n','\t','!','\'','\"','?','(',')','.'};
			//const int ign_size = 10;

			std::stringbuf string_buf;


/*
			for (int x =0 ; x < text.size() ; x++)
			{
					bool is_ign = 0;

					for (int y = 0 ; y < ign_size ; y++)
					{
						if (ign[y] == text[x])
						{
							is_ign = 1;
							break;
						}
					}


					if (!is_ign)
					{
					}

			}
*/





	}
private :
	std::set<std::string> stopWords;



};

#endif /* TOKENIZER_H_ */
