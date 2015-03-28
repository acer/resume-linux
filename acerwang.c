#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main (int argc, char **argv)
{
	
	int c;
	if (argc > 0)
	{
		while(1)
		{
			static struct option long_options[] =
			{
				{"all", no_argument, 0, 'a'},
				{"contact", no_argument, 0, 'c'},
				{"education", optional_argument, 0, 'e'},
				{"getpdf", no_argument, 0, 'g'},
				{"help", no_argument, 0, 'h'},
				{"me", no_argument, 0, 'm'},
				{"other", no_argument, 0, 'o'},
				{"projects", optional_argument, 'p'},
				{"skill", no_argument, 's'},
				{"volunteer", no_argument, 'v'},
				{"work", optional_argument, 'w'},
				{0,0,0,0}
			};
				exit(0);
		}
	} else {
		printf("Tell me what you want to know, okay?\n");
		exit(0);
	}
;

}