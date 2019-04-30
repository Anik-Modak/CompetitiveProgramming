#include <stdio.h>
#include <string.h>

char *replace_str(char *str, char *orig, char *rep)
{
  static char word[4096];
  char *p;

  if(!(p = strstr(str, orig)))
    return str;

  strncpy(word, str, p-str);
  word[p-str] = '\0';

  sprintf(word+(p-str), "%s%s", rep, p+strlen(orig));

  return word;
}

int main(void)
{
  puts(replace_str("Hello world! you", "world", "bangladesh"));

  return 0;
}
