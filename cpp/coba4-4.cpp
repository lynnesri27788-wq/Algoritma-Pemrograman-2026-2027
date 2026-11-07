# include <studio.h>
# include <conio.h>

main()
{
  char nm1[20];
  char nm2[20];

  clrscr();
  puts("Masukan nama ke -1 = ");
    gets(nm1);
    printf("Masukan nama ke - 2 = ");
    scanf("%s",&nm2);

    printf("\n\n");

    puts("Senang berkenalan dengan anda  ");
    puts(nm1);
    printf("Senang berkenalan dengan anda  %s", nm1);
    puts("Senang berkenalan dengan anda  ");
    puts(nm1);
    printf("\n\n");

    puts("Senang berkenalan dengan anda  ");
    puts(nm2);
    printf("Senang berkenalan dengan anda %s", nm2);
}


