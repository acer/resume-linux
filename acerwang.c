#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <getopt.h>

void print_all();
void print_contact();
void print_edu(char * option);
void print_getpdf();
void print_help();
void print_asciiart();
void print_other();
void print_projects(char * option);
void print_skill();
void print_volun();
void print_work(char * option);


int main (int argc, char *argv[])
{
	
	if (argc > 1)
	{
		int opt; 
		int long_index = 0;
		extern char *optarg;
		extern int optopt, opterr, optind;

		static struct option longopt[] =
		{
			{"all",       no_argument,       NULL, 'a'},
			{"contact",   no_argument,       NULL, 'c'},
			{"education", optional_argument, NULL, 'e'},
			{"getpdf",    no_argument,       NULL, 'g'},
			{"help",      no_argument,       NULL, 'h'},
			{"me",        no_argument,       NULL, 'm'},
			{"other",     no_argument,       NULL, 'o'},
			{"projects",  optional_argument, NULL, 'p'},
			{"skill",     no_argument,       NULL, 's'},
			{"volunteer", no_argument,       NULL, 'v'},
			{"work",      optional_argument, NULL, 'w'},
			{0,           0,                 0,      0}
		}; //end long_options

		while((opt = getopt_long(argc, argv, "ace::ghop::svw::", longopt, &long_index)) != -1)
		{
			printf("opt=%d, optind = %d, opterr=%d, optopt=%d\n", opt, optind, opterr, optopt);
			switch (opt) {
				case 'a':
					print_all();
					break;

				case 'c':
					print_contact();
					break;

				case 'e':
					print_edu(optarg);
					break;

				case 'g':
					print_getpdf();
					break;

				case 'h':
					print_help();
					break;

				case 'm':
					print_asciiart();
					break;

				case 'o':
					print_other();
					break;

				case 'p':
					print_projects(optarg);
					break;

				case 's':
					print_skill();
					break;

				case 'v':
					print_volun();
					break;

				case 'w':
					print_work(optarg);
					break;

				case '?':
					fprintf(stderr, "-%c is not a valid option.\n", opt);

			}//end switch

		}//while(c != 1)
		exit(0);
	} else {
		printf("Tell me what you want to know, okay?\n");
		exit(0);
	} //end else

}//main 

void print_all(){

}

void print_contact(){

}

void print_edu(char * option){

}

void print_getpdf(){

}

void print_help(){
	printf("-a\t--all\t//tell me all about you\n-s\t--skill\t//skill set summary\n-w\t--work\t//work experience\n-p\t--project\t//projects\n-e\t--education\t//education\n-o\t--other\t//other experiences\n-v\t--volunteer\t//volunteer experience\n-c\t--contact\t//contact information\n-m\t--me\t//ascii art self \n");
}

void print_asciiart(){

}

void print_other(){

}

void print_projects(char * option){

}

void print_skill(){

}

void print_volun(){

}

void print_work(char * option){

}
