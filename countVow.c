#include<stdio.h>
void main(){
    char data[100],ch;
    int vCount=0;
    FILE*fp=NULL;
    fp=fopen("file1.txt","w");
    printf("Enter the data to be written in file1.txt: ");
    fgets(data,sizeof(data),stdin);
    fputs(data,fp);
    fclose(fp);

    fp = fopen("file1.txt","r");
    while((ch=fgetc(fp)) != EOF){
        switch(ch){
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
            vCount++;
            break;
        }
    }
    printf("The file contains %d vowels\n",vCount);
    fclose(fp);
 }