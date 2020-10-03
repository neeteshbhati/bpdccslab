  #include <stdio.h>
  #include <string.h>
  #include <sys/ipc.h>
  #include <sys/types.h>
  #include <sys/shm.h>
  
  int main()
  {
          int val, shmid;
          void *memory = NULL;
          char *P;
 
          shmid = shmget((key_t)12345, 6, IPC_CREAT|0666);
 
          if(shmid < 0) {
          printf("Error");
 
          shmid = shmget((key_t)12345, 6, 0666);
          }
 
          printf("\n ShmID = %d", shmid);
 
          memory = shmat(shmid, NULL, 0);
 
          if(P == NULL)
          {
          printf("Attach failed");
          return 0;
          }
 
          P = (char*) memory;
         
	  printf("The Message is %s", P);

          val = shmdt(P);
          if(val<0){
          printf("Error");
          }
 
  }
