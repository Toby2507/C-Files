/*
 * Program to get acquainted with strings and string functions in C
 */
#include <stdio.h>
#include <string.h>

char trackList[][80] = {
    "I left my heart in Harvard med school",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
    "My heart is here"};

void find_track(char *userTrack)
{
  for (int i = 0; i < 6; i++)
  {
    if (strstr(trackList[i], userTrack))
      printf("Track %d: '%s'\n", i, trackList[i]);
  };
}

int main()
{
  char userTrack[80];
  printf("What track are you looking for: ");
  // fgets(userTrack, 80, stdin);
  scanf("%79s", userTrack);
  find_track(userTrack);

  return 0;
}