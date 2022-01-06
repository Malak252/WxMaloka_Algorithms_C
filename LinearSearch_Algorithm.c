#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
//=====================================

// IMPORTANT KEYBOARD KEYS(ASCII):
// BACKSPACE:
#define BKSP 8
// ENTER:
#define ENTER 13
// ESCAPE:
#define ESC 27
// SPACE:
#define SPACE 32
// TAB:
#define TAB 9
//=====================================
void ARR_DATA_IN(uint16_t *);
void ARR_DATA_OUT(uint16_t *);

#define MAX_DATA 100

int main(void)
{
  system("COLOR 0D");

  uint16_t DATA_BASE[MAX_DATA] = {0};
  uint16_t SEARCH_SAMPLE = 0;

  // Input random data for testing purposes
  ARR_DATA_IN(DATA_BASE);

  // TESTING PURPOSE:
  //printf("\n DATA STORED: \n");
  //ARR_DATA_OUT(DATA_BASE);

  printf("\n");
  return 0;
}
// Function to input random numbers using rand() function:
void ARR_DATA_IN(uint16_t *ptr)
{
  for(uint8_t i = 0; (i < MAX_DATA); i++)
  {
    ptr[i] = rand()%150;
  }
}

// Function to output the data stored.
void ARR_DATA_OUT(uint16_t *ptr)
{
  for(uint8_t i = 0; (i < MAX_DATA); i++)
  {
    printf("%d ", ptr[i]);
  }
}
