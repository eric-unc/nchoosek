#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t nchoosek(uint32_t n, uint32_t k);

int main(){
	while(1){
		int n;
		int k;

		//printf("n: ");
		scanf("%X", &n);
		//printf("k: ");
		scanf("%X", &k);

		if(n == 0/* || k == 0*/)
			return EXIT_SUCCESS;

		//printf("nCk: %i\n", nchoosek(n, k));
		printf("%i\n", nchoosek(n, k));
	}
}

uint32_t nchoosek(uint32_t n, uint32_t k){
	if(k == 0 || n == k) 
		return 1;

	return nchoosek(n - 1, k - 1) + nchoosek(n - 1, k);
}

