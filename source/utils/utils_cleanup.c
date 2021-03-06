/*
** cleanup.c for creepy in /home/grange_c/creepy/source/utils/
**
** Made by Benjamin Grange
** Login   <grange_c@epitech.net>
**
** Started on  Sun Apr 17 18:24:32 2016 Benjamin Grange
** Last update Sun Apr 24 18:20:32 2016 Benjamin Grange
*/

#include <stdlib.h>
#include "creepy.h"

void			cleanup(t_creepy *creepy)
{
  t_repository		*repo;

  while (creepy->repo)
    {
      repo = creepy->repo->next;
      free(creepy->repo->name);
      free(creepy->repo->url);
      free(creepy->repo);
      creepy->repo = repo;
    }
  curl_global_cleanup();
}
