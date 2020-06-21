#include <stdio.h>
#include <math.h>
char lfarr[]={'5','F'};
char cache[2];
void first_screen()
{
    printf("\t\t\t\t********************************************************************");
    printf("\n");
    printf("\t\t\t\t**************WELCOME TO THE KBC GAME****************");
    printf("\n");
    printf("\t\t\t\t********************************************************************");
    int total_questions=12;
    int i=0;
    int b=0;
    int base_value=50000;
    printf("\n");
    printf("\n");
    while(i<total_questions)/*displays the total questions and the corresponding amount winnable*/
    {   
        int num_of_questions=i+1;/*question starts from one,indexing has been done from 0*/
        printf("\n");
        b=base_value*num_of_questions;/*the base amount multiplies by the number of questions*/
        if(num_of_questions!=4 && num_of_questions!=8 && num_of_questions!=12)
            printf("QUESTION NUMBER %d valued at  %d" ,num_of_questions,b);
        else    /*checkpoints at 4th and 8th question, 12th is last question*/
        {
            printf("QUESTION NUMBER %d valued at  %d" ,num_of_questions,b);
            printf("\n");
            printf("————————————————————");
        }
        i+=1;
    }
    printf("\nYou have the following life lines available:-\n");
    printf("1) 50/50 which means two wrong options will be removed from the list of options on the screen");
    printf("2) Flip the question which will allow you to change the current question with a new one");
    printf("\n\t\t\t\t**************GENERAL GUIDLINES**************\n");
    printf("1)All lifelines can be used only once\n");
    printf("2)If your answer of a question is incorrect then you will be entitled to the amount of money agreed upon on the last checkpoint\n");
    printf("3)You cannot quit the game after choosing to take a lifeline\n");
    printf("4)To answer a particular question,press the number corresponding to the option of your choice and then enter key\n\n");
    printf("Press Y to begin the game. . ."); 
    
}
void alt_question_bank(int num)
{
    switch(num)
    {
        case 1:
        printf("1> A person described as 'Goth' usually wears what color of clothes?\n");
        printf("(1)Black\t\t\t\t (2)Khaki \n");
        break;
        case 2:
        printf("2> On Thanksgiving, which of these items is traditionally stuffed and then carved?\n");
        printf("(2)Turkey\t\t\t\t(3)Punpkin \n");
        break;
        case 3:
        printf("3> Which of the following is not a roman numeral?\n");
        printf("(2)L\t\t\t\t(3)G \n");
        break;
        case 4:
        printf("4> A cranky person is said to have gotten up 'on the wrong side of the' what?\n");
        printf("(1)Bed\t\t\t\t (2)Bam \n");
        break;
        case 5:
        printf("5> What would you measure on the beaufort scale?\n");
        printf("(2)Wind Speed\t\t\t\t(3)Precipitation \n");
        break;
        case 6:
        printf("6> Which of the following men does not have a chemical element named for him?\n");
        printf("(1)Albert Einstein\t\t\t\t (2)Issac Newton \n");
        break;
        case 7:
        printf("7> Which of the following is not among the four fundamental forces of nature?\n");
        printf("(1)Gravity\t\t\t\t (2)Friction \n");
        break;
        case 8:
        printf("8> Which of the following was a literary movement in the U.S. during the 1920s\n");
        printf("(2)Romanticism\t\t\t\t (3)Harlem Renaissance \n");
        break;
        case 9:
        printf("9> According to Hindu mythology, who is the charioteer of the sun?\n");
        printf("(3)Jalandhar\t\t\t\t (4)Arun \n");
        break;
        case 10:
        printf("10> 'do no evil' is tagline of which company?\n");
        printf("(1)Google\t\t\t\t (4)Apple \n");
        break;
        case 11:
        printf("11> After nearly 70 days underground,33 men were dramatically rescued in 2010 from a mine in what country?\n");
        printf("(1)Chile\t\t\t\t (2)India \n");        
        case 12:
        printf("12> Aristotle wrote that what animal, though immune from other illnesses, is occasionally subject to “flatulency”?\n");
        printf("(1)Elephant\t\t\t\t (3)Kangaroo \n");
        break;
        case 13:
        printf("Which author’s first and only novel was awarded the Pulitzer Prize in fiction?\n");
        printf("(1)Harper Lee\t\t\t\t(3)Emily Bronte \n");
        break;
    }
}
void question_bank(int num,int lf)/*another method required to print options according to lifeline*/
{
    /*if (num%2==0&& lf==0) even cases are for the 50-50 lifeline
        num+=1;
    else if(num%2!=0 && lf==1)
        num+=1;*/
    if ( lf==1)
        alt_question_bank(num);
    else{
    switch (num)
    {
        case 1:
        printf("1> A person described as 'Goth' usually wears what color of clothes?\n");
        printf("(1)Black\t\t\t\t (2)Khaki\n(3)fluorescent\t\t\t\t (4)White \n");
        break;
        case 2:
        printf("2> On Thanksgiving, which of these items is traditionally stuffed and then carved?\n");
        printf("(1)Potato\t\t\t\t (2)Turkey\n(3)Pumpkin\t\t\t\t (4)Chicken \n");
        break;
        case 3:
        printf("3> Which of the following is not a roman numeral?\n");
        printf("(1)M\t\t\t\t (2)L\n(3)G\t\t\t\t (4)D \n");
        break;
        case 4:
        printf("4> A cranky person is said to have gotten up 'on the wrong side of the' what?\n");
        printf("(1)Bed\t\t\t\t (2)Bam\n(3)Law\t\t\t\t (4)Fence \n");
        break;
        case 5:
        printf("5> What would you measure on the Beaufort scale?\n");
        printf("(1)Atmospheric Pressure\t\t\t (2)Wind Speed\n(3)Precipitation\t\t\t (4)Earthquake Intensity \n");
        break;
        case 6:
        printf("6> Which of the following men does not have a chemical element named for him?\n");
        printf("(1)Albert Einstein\t\t\t (2)Issac Newton\n(3)Neils Bohr\t\t\t\t (4)Enrico Fermi \n");
        break;
        case 7:
        printf("7> Which of the following is not among the four fundamental forces of nature?\n");
        printf("(1)Gravity\t\t\t\t (2)Friction\n(3)Electromagnetic\t\t\t (4)Weak \n");
        break;
        case 8:
        printf("8> Which of the following was a literary movement in the U.S. during the 1920s \n");
        printf("(1)Gothic Revival\t\t\t (2)Romanticism\n(3)Harlem Renaissance\t\t\t (4)Magic Realism \n");
        break;
        case 9:
        printf("9> According to Hindu mythology, who is the charioteer of the sun?\n");
        printf("(1)Chitragupt\t\t\t\t (2)Matli\n(3)Jalandhar\t\t\t\t (4)Arun \n");
        break;
        case 10:
        printf("10> 'do no evil' is tagline of which company?\n");
        printf("(1)Google\t\t\t\t (2)Facebook\n(3)Microsoft\t\t\t\t (4)Apple \n");
        break;
        case 11:
        printf("11> After nearly 70 days underground,33 men were dramatically rescued in 2010 from a mine in what country?\n");
        printf("(1)Chile\t\t\t\t (2)India\n(3)China\t\t\t\t (4)Brazil \n");
        break;
        case 12:
        printf("12> Aristotle wrote that what animal, though immune from other illnesses, is occasionally subject to “flatulency”?\n");
        printf("(1)Elephant\t\t\t\t (2)Dog\n(3)Kangaroo\t\t\t\t (4)Duck \n");
        break;
        case 13:
        printf("13> Which author’s first and only novel was awarded the Pulitzer Prize in fiction?\n");
        printf("(1)Harper Lee\t\t\t\t (2)Ralph Elison\n(3)Emily Bronte\t\t\t\t (4)J.D.Salinger \n");
        break;
    }}
}
void check_availablity(int count)
{
    printf("The lifelines available to you are:-\n");
    int len=0;
    int size=sizeof(lfarr)/sizeof(lfarr[0]);
    while(len<size)
        {
            if (lfarr[len]=='5' && cache[len]!='5')
                printf("1>50/50 \n");
            if (lfarr[len]=='F' && cache[len]!='F')
                printf("2>Flip Your Question \n");
            len++;
        }   
    if(count>0)
        printf("Press the number by the lifeline to use it \n");
    else
        printf("SorryYou have consumed all your lifelines");
    
}
int update_lifelines(int temp1,int n)
{
    if(temp1==1)
        cache[0]='5';
    if(temp1==2)
        cache[1]='F';
    n=n-1;
    return n;
}
int leave()
{
    int quit;
    scanf("%d",&quit);
    return quit;
}
void lifeline(int lfline,int q,int *j)/*handling lifelines*/
{/*integer is to count the number of lifelines left*/
    if (lfline==1 && *(j+1)!=2)
    {
        printf("We shall remove two of the wrong options %d \n\n\n\n",*(j+1));
        question_bank(q,lfline);
    }
    
    else if (lfline==1 && *(j+1)==2)
    {
        printf("We shall remove two of the wrong options %d\n\n\n\n",*(j+1));
        question_bank(13,lfline);
    }
    
    else 
    {
        printf("The question will be flipped\n\n\n\n");
        question_bank(13,lfline);
    }
}
int check_ans(int ch,int n,int *temp)
{/*checking answer,printing formal msgs*/
    int ans[]={1,2,3,1,2,2,2,3,4,1,1,1,1};
    if(*(temp+1)==2){
    if(ch!=ans[12])
        n=n+13;
    else
        n=n+1;
    }
    else
    {
        if(ch!=ans[n-1])
            n=n+13;
        else
            n=n+1;
    }
    return n;
        
}
void prize_money(int qtn)
{
    int breakpoints[]={0,4,8,12};
    int prize;
    int orig_no;
    int prize_arr[]={0,5000,20000,80000,320000,640000,1250000,2500000,5000000,10000000,25000000,50000000,70000000};
    if(qtn<=12)
        prize=prize_arr[qtn];
    else{
        orig_no=qtn-13;
    for(int i=0;i<=3;i++)
    {
        if(orig_no>=breakpoints[i])
            prize=prize_arr[breakpoints[i]];
    }
    }
    printf("Rs. %d",prize);
        
}

void clear_arr(int *arr)/*resets the cache array handling the lifelines used during each question for using in the next question*/
{
    for(int i=0;i<2;i++)
        *(arr+i)=0;
}
void game_mech()
{
    int quit=0;
    int check_point=0;
    int count_lifeline=2;
    int i=1;
    for(;i<=12;)
    {
        int count=0;
        int ch,temp1,temp;
        int life[2];

        clear_arr(&life[0]);/*for clearing the flip the question bug*/
        question_bank(i,0);
        if(i!=1){
        printf("Do you want to quit and take the amount accrued or play on? Press 0 or 1 to choose the respective option: ");
        if(leave()==0){
            quit=1;
            break;}}
        /*printf("Do you want to leave??Press 1 to stay in the game and 0 to leave.");*/
        /*if(leave()==0)
            break;*/
        printf("Do you want to take a life line-0 for NO and 1 for YES ");
        scanf("%d",&temp);
        /*if(temp==0) 
        {
            printf("Enter your answer: ");
            scanf("%d",&ch);
            printf("%d",ch);
            i=check_ans(ch,i);   updating i,checking answer,allocating prize
        }
        */while(count_lifeline>0 && temp==1)
            {
                check_availablity(count_lifeline);/*checks for lifelines,handles user input for */
                scanf("%d",&temp1);      /*which lifeline to use,option of multiple*/
                life[temp1-1]=temp1;
                count_lifeline=update_lifelines(temp1,count_lifeline);/*lifelines provided*/
                lifeline(temp1,i,&life[0]);
                if (count_lifeline==1)
                {
                    printf("Do you want another lifeline?? Press 0 for NO 1 for YES\n");
                    scanf("%d",&temp);
                }
            }
            int check=0;
        printf("Enter your answer: ");
            scanf("%d",&ch);
            printf("%d",ch);
            if(i==12)
                {i=check_ans(ch,i,&life[0]);
                 if(i==13)
                    {check=1;
                     i=i-1;
                    }
                }
            else
                i=check_ans(ch,i,&life[0]);
            if(check==1)
                break;
        if(i<=12)
            printf("\nCorrect answer!!! \n");
    }
    if(i>13)
        printf("\nSorry. You inputted a wrong answer. You will be awarded a sum of  \t");
    else{
        printf("Congratulations on winning a sum of \t");
        
    }if(quit==1)
        prize_money(i-1);
    else if(i>=12)
        prize_money(i);
}
void main()
{
    int x=1;
    first_screen();
    char ch;
    scanf("%c",&ch);
    while (x)
    {
        if (ch=='Y' || ch== 'y')
            {
                printf("\nThe game begins in ");
                for(int i=3;i>0;i--)
                    printf("%d . . .",i);
                x=x-1;
            }
            else
            {
                printf("Invalid Option. Re-enter");
                scanf("%c",&ch);
            }
    }
    printf("\n\n\n\n\n");
    game_mech();
    
}
            



