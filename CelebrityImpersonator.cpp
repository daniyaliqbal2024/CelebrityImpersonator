#include <iostream>
#include <string>
using namespace std;

string generateQuote(string quote, string generatorName)
{
   if (generatorName== "Canadian")
	{
		quote = "Four score and seven years ago, eh?";
	}
	else if (generatorName== "ValleyGirl")
		{
			quote = "like Four like score like and like seven like years like ago";
		}
	else if (generatorName== "Pirate")
			{
				quote = "FouRRRr scoRRRre and seven yeaRRRrs ago";
			}
	else if (generatorName== "Zatanna")
				{
					quote = "ruoF erocs dna neves sraey oga";
				}
	else if (generatorName== "Yoda")
					{
						quote = "score Four seven and ago years";
					}
	else if(generatorName== "Shatner")
	{
		quote= "Four...\nscore...\nand...\nseven...\nyears...\nago...\n";
	}


    return quote;
}

