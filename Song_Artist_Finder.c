//
//  main.c
//  
//  WORKS WITH txt FILE!
//  Created by Hunter Spallas on 4/20/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct song_t{
    char title[100];
    char artist[100];
    char album[100];
    int year;
    int duration;
}song;

song readSong(FILE*inp){

    char title[100];
    char artist[100];
    char album[100];
    int year;
    int duration;
while(inp != NULL){
    fscanf(inp, "%s\n%s\n%s\n%d\n%d\n", title, artist, album, &year, &duration);

}

    return(readSong(inp));
}



void printSong(song *s){
    if(s == NULL){
        return;
    }
    printf("%s\n", s->title);
    printf("%s\n", s->artist);
    printf("%s\n", s->album);
    printf("%d\n", s->year);
    printf("%d\n", s->duration);


}

void searchSong(song x[], int size, char target[]){
   int i = 0;



    for(i=0;i<size;i++){
        if(strcmp(x[i].artist, target) == 0){
            printSong(x);
            break;
        }


    }
    if(i == size){

        printf("There are no songs from %s stored in the database\n", target);

    }

    }











int main(void) {
    song *song_ptr;
    FILE* inp = NULL;
    char str[100];
    int num = 0;
    char ans = 'y';
    int i = 0;

    inp = fopen("songs.txt", "r");

    if(inp == NULL){
        printf("File does not exist\n");

    }
    else{
        while((fscanf(inp, "%s\n%s\n%s\n%d\n%d\n", song_ptr->title,song_ptr->artist,song_ptr->album,&song_ptr->year,&song_ptr->duration)) != EOF){

            num = num+1;


            }
        num = num%15;

    }
    song_ptr = (song*)malloc(num*sizeof(song));
    
    
        while(ans != 'q' || ans != 'Q'){
    printf("Enter the name of the artist you would like to search for: ");
    scanf("%s", str);
            
            for(i=0;i<num;i++){
                fgets(str,100,inp);

                strcpy(song_ptr[i].title, str);
                strcpy(song_ptr[i].artist, str);
                strcpy(song_ptr[i].album, str);

            }

    searchSong(song_ptr, num, str);





    printf("Press any key to make another search or q to quit: ");
    scanf(" %c", &ans);
            
    if(ans == 'q' || ans == 'Q'){
        break;
    }


        }
    return 0;
}
