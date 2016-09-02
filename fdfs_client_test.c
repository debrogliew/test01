#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/wait.h>

#include "make_log.h"

#define FDFS_TEST_MUDULE "test"
#define FDFS_TEST_PROC   "fdfs_test"

#define FILE_ID_LEN     (256)

int main(int argc, char * argv[])
{
  char *file_name = NULL;
  char *file_id[FLLE_FD_LEN] = {0};
  pid_t pid;
  

  if (argc < 2){
     printf("usage ./a.out file_name");
     exit(0);
}
   file_name =argv[1];
    
   pid = fork();
   if (pid == 0){
   
}
 


}
