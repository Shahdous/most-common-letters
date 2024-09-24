#include <stdio.h>
#include <stdlib.h>

char mostCommon(char letters[], int size){
	int count[26] = {0};
	
	for (int i = 0; i < size; i++){
		count[letters[i] - 'a']++;
	}

	int mostCommonLetter = 'a';
	int mostCommonNum = count[0];


	for (int i = 1; i < size; i++){
		if(mostCommonNum < count[i]){
			mostCommonLetter = 'a' + i;
			mostCommonNum = count[i];
		} else if (count[i] == mostCommonNum) {
            
            if ('a' + i < mostCommonLetter) {
                mostCommonLetter = 'a' + i;
            }
        }
	}

	return mostCommonLetter;
}

int main(int argc, char ** argv){
	int count = 0;
    scanf("%d", &count);

    if (count <= 0) {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    char data[count];

    for (int i = 0; i < count; i++) {
        scanf(" %c", &data[i]);
    }
    
    printf("Most Common Letter is: %c\n", mostCommon(data, count));

    return EXIT_SUCCESS;
}
