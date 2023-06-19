#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256

char get_char(char *prompt, char *limit)
{
	char buffer[MAX];
	
	while(1)
	{
        printf("%s", prompt);
		fgets(buffer, sizeof(buffer), stdin);
		
        if(strlen(buffer) > 2)
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Character limit is: %d\n\n", 1);
            printf("\033[0m");
            continue;
            
        }
        
        if(strlen(buffer) < 2)
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Please enter a character.\n\n");
            printf("\033[0m");
            continue;
            
        }
        
		if(strspn(buffer, limit) != strlen(buffer))
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Prompt only accepts: %s\n", limit);
            printf("\033[0m");
            continue;
            
        }
		
        return buffer[0];
	}
}

int get_int(char *prompt, char *limit, int min, int max)
{
	char buffer[MAX];
	int user_input;
	
	while(1)
	{
        printf("%s", prompt);
		fgets(buffer, sizeof(buffer), stdin);
		
		if(strspn(buffer, limit) != strlen(buffer))
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Prompt only accepts %s\n", limit);
            printf("\033[0m");
            continue;
            
        }
        
        if(sscanf(buffer, "%d", &user_input) != 1)
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. It must be a number.\n\n");
            printf("\033[0m");
            continue;
            
        }
        
        if(user_input < min || user_input > max) 
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Please enter a number between %d and %d.\n", min, max);
            printf("\033[0m");
            continue;
            
        }
		
        return user_input;
	}
}

float get_float(char *prompt, char *limit, float min, float max)
{
	char buffer[MAX];
	float user_input;
	
	while(1)
	{
        printf("%s", prompt);
		fgets(buffer, sizeof(buffer), stdin);
		
		if(strspn(buffer, limit) != strlen(buffer))
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Prompt only accepts %s\n", limit);
            printf("\033[0m");
            continue;
            
        }
        
        if(sscanf(buffer, "%f", &user_input) != 1)
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. It must be a number.\n\n");
            printf("\033[0m");
            continue;
            
        }
        
        if(user_input < min || user_input > max) 
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Please enter a number between %.2f and %.2f.\n", min, max);
            printf("\033[0m");
            continue;
            
        }
		
        return user_input;
	}
}

double get_double(char *prompt, char *limit, double min, double max)
{
	char buffer[MAX];
	double user_input;
	
	while(1)
	{
        printf("%s", prompt);
		fgets(buffer, sizeof(buffer), stdin);
		
		if(strspn(buffer, limit) != strlen(buffer))
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Prompt only accepts %s\n", limit);
            printf("\033[0m");
            continue;
            
        }
        
        if(sscanf(buffer, "%lf", &user_input) != 1)
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. It must be a number.\n\n");
            printf("\033[0m");
            continue;
            
        }
        
        if(user_input < min || user_input > max) 
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Please enter a number between %.2f and %.2f.\n", min, max);
            printf("\033[0m");
            continue;
            
        }
		
        return user_input;
	}
}
int get_pin(char *prompt, char *limit, int min, int max)
{
	char buffer[MAX];
	int user_input;
	
	while(1)
	{
        printf("%s", prompt);
		fgets(buffer, sizeof(buffer), stdin);
		
		if(strspn(buffer, limit) != strlen(buffer))
        {
			strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Prompt only accepts %s\n", limit);
            printf("\033[0m");
            continue;
            
        }
        
        if(sscanf(buffer, "%d", &user_input) != 1)
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. It must be numbers.\n\n");
            printf("\033[0m");
            continue;
            
        }
        
        if(user_input < min || user_input > max) 
        {
            strcpy(buffer, "");
            printf("\033[0;31m");
            printf("\n* Invalid input. Please enter numbers between %d and %d.\n", min, max);
            printf("\033[0m");
            continue;
            
        }
		
        return user_input;
	}
}