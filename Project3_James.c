/*
Program Name: Project3.c
Programmer: John James
Class: CS 3335
Project: 03
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct Point{
  int x, y;
}Point;

typedef struct Line{
 Point a, b;
 float Length;
}Line;

struct Line * readFile(char file_name[], int *n);
void computeLengths(struct Line *lines, int n);
void saveLengths(struct Line *lines, int n);
void printStats(struct Line *lines, int n);

int main(int argc, char *argv[]){

    int n;
    Line *l = readFile("Lines.txt", &n);
    computeLengths(l, n);
    saveLengths(l, n);
    printStats(l, n);
    free(l);
    
    return 0;
}

//reads the file and assigns each line a point
struct Line * readFile(char file_name[], int *n){
    FILE *fp = fopen(file_name, "r");
    
    if ((fp) == NULL) {
    fprintf(stderr, "File not found!\n");
    exit(EXIT_FAILURE);
  }
    fscanf(fp, "%d", n);
    Line *l = calloc(*n, sizeof(Line));
    printf("Array of size %ls created.", n);
    int one, two, three, four;
    for(int i = 0; i < *n; i++){
        fscanf(fp, "%d %d %d %d", &l[i].a.x, &l[i].a.y, &l[i].b.x, &l[i].b.y);
    }
    
    fclose(fp);
    printf("Data read\n");
    return l;
}

//computes the length of each line and assigns it to Length
void computeLengths(struct Line *lines, int n){
    printf("Computing lengths...\n");
    for(int i = 0; i < n; i++){
        lines[i].Length = sqrt(pow((lines[i].b.y - lines[i].a.y),2) + pow((lines[i].b.x - lines[i].a.x),2));
    }
    
    printf("Length computation completed\n");
}

//writes the length of each line into a file
void saveLengths(struct Line *lines, int n){
    FILE *fp = fopen("lengths_James_John.txt", "w+");
    if ((fp) == NULL) {
        fprintf(stderr, "Can't open file\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Saving Lengths...\n");
    for(int i = 0; i < n; i++){
        fprintf(fp,"%.1f", lines[i].Length);
    }
    
    fclose(fp);
}

//prints the max, min, and average lengths.
void printStats(struct Line *lines, int n){
    float max_Line = 0;
    float min_Line = 10000000;
    float avg_Line = 0;
    for(int i = 0; i < n; i++){
       if(lines[i].Length > max_Line){
            max_Line = lines[i].Length;
       }
       
       if(lines[i].Length < min_Line) {
            min_Line = lines[i].Length;
        }
        
        avg_Line += lines[i].Length; 
    }  
    
    printf("Line of max length: %.1f\nLine of min length: %.1f\nAverage line Length: %.1f\n", max_Line, min_Line, avg_Line);
}