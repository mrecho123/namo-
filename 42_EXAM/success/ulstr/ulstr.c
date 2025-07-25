void ft(char **c){
	write(1,&c,1);
}

int main(int argc ,char **argv){
	if (argc == 2){
		int i =0;
		while(argv[1][i] != '\0'){
			if(argv[1][i] >= 'a' && argv[1][i] <='z'){
				argv[1][i] -= 32;
				ft(argv[1][i]);
				i++;
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <='Z'){
				argv[1][i] += 32;
				ft(argv[1][i]);
				i++;
			}

			else if(!((argv[1][i] >= 'a' && argv[1][i] <='z') || (argv[1][i] >= 'a' && argv[1][i] <='z'))){
				ft(argv[1][i]);
				i++;
			}

		
		}
	}
	write(1, "\n",1);
	
}
