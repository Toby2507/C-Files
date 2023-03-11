#include <stdio.h>

int main()
{
  // WRITE AND APPEND FILES
  // FILE *pF = fopen("C:\\Users\\HP\\Desktop\\indomie.html", "a");
  // fprintf(pF, "\nHe is the best software engineer ever");
  // fclose(pF);

  // DELETE FILES
  // if (!remove("C:\\Users\\HP\\Desktop\\indomie.html"))
  // {
  //   puts("That file was deleted successfully!");
  // }
  // else
  // {
  //   puts("That file was not deleted successfully!");
  // }

  // READ FILES
  FILE *pF = fopen("poem.txt", "r");
  char buffer[255];

  if (!pF)
  {
    puts("Unable to open file!\n");
  }
  else
  {
    while (fgets(buffer, 255, pF))
    {
      printf("%s", buffer);
    }
  }

  fclose(pF);

  return 0;
};