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
bool LSA(uint16_t *, uint16_t );

#define MAX_DATA 255

int main(void)
{
  system("COLOR 0D");

  uint16_t DATA_BASE[MAX_DATA] = {0};
  uint16_t SEARCH_SAMPLE = 0;

  // Input random data for testing purposes
  ARR_DATA_IN(DATA_BASE);

  //TESTING PURPOSE:
  //printf("\n DATA STORED: \n");
  //ARR_DATA_OUT(DATA_BASE);

  printf("\n \nEnter number to search: ");
  scanf("%d", (uint32_t *) &SEARCH_SAMPLE);

  printf("\n\n");

  printf("\n Searching...\n");
  if(LSA(DATA_BASE, SEARCH_SAMPLE))
  {
    printf("\n Data found successfully!\n");
  }
  else
  {
    printf("\n Data cannot be found!\n");
  }


  printf("\n");
  return 0;
}


// Function to input random numbers using rand() function:
void ARR_DATA_IN(uint16_t *ptr)
{
  for(uint16_t i = 0; (i < MAX_DATA); i++)
  {
    ptr[i] = rand()%255;
  }
}

// Function to output the data stored.
void ARR_DATA_OUT(uint16_t *ptr)
{
  for(uint16_t i = 0; (i < MAX_DATA); i++)
  {
    printf("%d ", ptr[i]);
  }
}

bool LSA(uint16_t *ptr, uint16_t sample)
{
  uint8_t state = 0;

  for(uint8_t i = 0; (i < MAX_DATA); i++)
  {
    if(sample == ptr[i])
    {
      printf("\n (%d) Found at index (%d)! \n", sample, i);
      state = 0;
      break;
    }
    else if(i == (MAX_DATA-1))
    {
      state = 1;
      break;
    }
  }

  if(state == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
