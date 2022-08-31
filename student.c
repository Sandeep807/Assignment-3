#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int rno;
    char name[25];
    struct subject
    {
        int scode;
        char sname;
        int mark;
    }sub[3];
    int total;
    float per;

    
}student;

void create(){
    student *s;
    int n,i,j;
    FILE *fp;
    printf("Enter how many students you want : ");
    scanf("%d",&n);
    s=(student*)calloc(n,sizeof(student));
    fp = fopen("mystudent.txt","w");
    for ( i = 0; i < n; i++)
    {
        s[i].total=0;
        s[i].per=0;
        printf("Enter roll no : ");
        scanf("%d",&s[i]);
        fflush(stdin);
        printf("Enter name : \n");
        scanf("%[^\n]s",s[i].name);
        for ( j = 0; j < 3; j++)
        {
            printf("Enter maeks of subject %d :",j+1);
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per=s[i].total/3.0;

        fwrite(&s[i],sizeof(student),1,fp);
        
    }
    fclose(fp);
    
}

void display(){
    student s;
    FILE *fp;
    int i;
    fp = fopen("mystudent.txt","r");
    while(fread(&s,sizeof(student),1,fp)){
        printf("\n%-5d%-20s",s.rno,s.name);
        for ( i = 0; i < 3; i++)
        {
            printf("%4d",s.sub[i].mark);
        }
        printf("%5d%7.2f\n",s.total,s.per);
        
    }
    fclose(fp);
}

void noOfRec(){
    student s;
    FILE *fp;
    fp = fopen("mystudent.txt","r");
    fseek(fp,0,SEEK_END);
    int n = ftell(fp)/sizeof(student);
    printf("\n\nNo of Records = %d\n",n);
    fclose(fp);
}
void search(){
    student s;
    FILE *fp;
    int i,roll,found=0;
    fp = fopen("mystudent.txt","r");
    printf("Enter roll no : ");
    scanf("%d",&roll);
    while(fread(&s,sizeof(student),1,fp)){
        if(s.rno == roll)
        {
            found = 1;
            printf("\n%-5d%-20s",s.rno,s.name);
            for ( i = 0; i < 3; i++)
            {
                printf("%4d",s.sub[i].mark);
            }
            printf("%5d%7.2f",s.total,s.per);
        }
        
    }
    if(!found){
        printf("\nRecord not found\n");
        
    }
    fclose(fp); 
}

void update(){
    student s1;
    FILE *fp,*fp1;
    int i,j,roll,found=0;
    fp = fopen("mystudent.txt","r");
    fp1 = fopen("temp,txt","w");
    printf("Enter roll no : ");
    scanf("%d",&roll);
    while(fread(&s1,sizeof(student),1,fp)){
        if(s1.rno == roll)
        {
            found = 1;
            fflush(stdin);
            printf("Enter name : \n");
            scanf("%[^\n]s",s1.name);
            for ( j = 0; j < 3; j++)
            {
                printf("Enter maeks of subject %d :",j+1);
                scanf("%d",&s1.sub[j].mark);
                s1.total += s1.sub[j].mark;
            }
            s1.per=s1.total/3.0;
            
        }
        fwrite(&s1,sizeof(student),1,fp1);
        
    }
    fclose(fp);
    fclose(fp1);
    if(found){
        fp1 = fopen("temp.txt","r");
        fp = fopen("mystudent.txt","w");
        while (fread(&s1,sizeof(student),1,fp1))
        {
            fwrite(&s1,sizeof(student),1,fp);
        }
        fclose(fp);
        fclose(fp1);
    }
    else{
        printf("\nRecord not found:\n");
    }
}

void delete(){
    student s;
    FILE *fp,*fp1;
    int roll,j,found=0;
    fp = fopen("mystudent.txt","r");
    fp1 = fopen("temp.txt","w");
    printf("Enter roll no :");
    scanf("%d",&roll);
    while (fread(&s,sizeof(student),1,fp))
    {
        if(s.rno == roll){
            found = 1;
        }
        else{
            fwrite(&s,sizeof(student),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if(found){
        fp1 = fopen("temp.txt","r");
        fp = fopen("mystudent.txt","w");
        while (fread(&s,sizeof(student),1,fp1))
        {
            fwrite(&s,sizeof(student),1,fp);
        }  
        fclose(fp);
        fclose(fp1); 
    }
    else{
        printf("Record not found\n");
    }

    

}
int main(){
    int ch;
    do
    {
        printf("1.Create student\n");
        printf("2.Display Student\n");
        printf("3.Append Student\n");
        printf("4.No of records: \n");
        printf("5.Search \n");
        printf("6.Update\n");  
        printf("7.Delete\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        /*case 3:
            append();
            break;*/
        case 4:
            noOfRec();
            break;
        case 5:
            search();
            break;
        
        case 6:
            update();
            break;
         case 7:
            delete();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (ch=!0);
    
}