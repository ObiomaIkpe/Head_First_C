/*program to evaluate face values
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts ("enter the card name:\n");
	scanf("%s", card_name);
	int val = 0;
	if (card_name[0] = 'k'){
		val = 10;
	}
	else if (card_name[0] = 'q'){
		val = 10;
	}
	else if (card_name[0] = 'j'){
		val = 10;
	}
	else if (card_name[0] = 'a'){
		val = 11;
	}
	else {
		val = atoi(card_name);
	}
	printf("the card value is: %i\n", val);

	return 0;
}

