P1.
 #include<stdio.h>
   struct student
   {
           int roll;
           char name[20];
           float marks;
   }s1 = {10,"aaa",99.5};//,s2 = {20,"bbb",65.6};
   int main()
   {
          printf("s1 data...\n");
          printf("roll - %d   %d\n",s1.roll,(&s1)->roll);
          printf("name - %s  %s\n",s1.name,(&s1)->name);
          printf("marks - %f  %f\n",s1.marks,(&s1)->marks);
  /*
          printf("s2 data...\n");
          printf("roll - %d   %d\n",s2.roll,(&s2)->roll);
          printf("name - %s  %s\n",s2.name,(&s2)->name);
          printf("marks - %f  %f\n",s2.marks,(&s2)->marks);*/
       }
P2.c
#include<stdio.h>
int main()
{
        struct st
        {
                int x;
                char ch;
                float f;
        };

        struct st s;
        printf("Enter the structure data 1)int 2)char 3)float\n");
        scanf("%d %c%f",&s.x,&s.ch,&s.f);

        printf("x - %d  ch - %c  f - %f\n",s.x,s.ch,s.f);
}

