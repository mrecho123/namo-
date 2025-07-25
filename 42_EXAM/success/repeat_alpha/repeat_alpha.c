int main(int argc, char **argv){
	int i ; 
	i=0;
	if (argc ==2){
		while (argv[1][i] !='\0'){
			while (argv[1][i] >= 'a' && argv[1][i] <= 'z'){
				int cout;
				cout = argv[1][i] - 'a' +1 ; 
		   		stuff(argv[1][i],cout);    		
				i++;
			}
		
			while (argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
				int cout;
				cout = argv[1][i] - 'A' +1 ; 
		   		stuff(argv[1][i],cout);    		
				i++;
			}
		if (argv[1][i] !='\0'){
			if (!((argv[1][i] >='a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))){
				write(1, &argv[1][i],1);
				i++;
				}
			}
		}
	}
	
	write(1,"\n",1);
	
}

void stuff(char **alpha,int cout){
	int i=0;
	while (i < cout){
		write(1,&alpha,1);
		i++;

	}
}
