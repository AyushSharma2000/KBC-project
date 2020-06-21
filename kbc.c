#include <stdio.h>
char lfarr[]={'5','F'};
char cache[2];
void first_screen()/*displays the number of questions,prize for each question,checkpoints and other guidelines*/
{
    printf("\t\t\t\t********************************************************************");
    printf("\n");
    printf("\t\t\t\t\t**************WELCOME TO THE KBC GAME****************");
    printf("\n");
    printf("\t\t\t\t********************************************************************");
    int total_questions=12;
    int i=0;
    int b=0;
    int base_value=50000;
    int prize_arr[]={0,5000,20000,80000,320000,640000,1250000,2500000,5000000,10000000,25000000,50000000,70000000};
    printf("\n");
    printf("\n");
    while(i<total_questions)/*displays the total questions and the corresponding amount winnable*/
    {   int question_no=i+1;
        if(question_no!=4 && question_no!=8 && question_no!=12)/*checkpoints at Question number 4 and 8.12th question is the last one*/
            printf("QUESTION NUMBER %d valued at Rs. %d\n" ,question_no,prize_arr[question_no]);
        else    /*checkpoints at 4th and 8th question, 12th is last question*/
        {
            printf("QUESTION NUMBER %d valued at Rs. %d" ,question_no,prize_arr[question_no]);
            printf("\n");
            if(question_no!=12)
            printf("——————————CHECKPOINT——————————\n");
            else
            printf("——————————GAME END————————————\n");
        }
        i+=1;
    }
    printf("\nYou have the following life lines available:-\n");
    printf("1) 50/50 which means two wrong options will be removed from the list of options on the screen \n");
    printf("2) Flip the question which will allow you to change the current question with a new one");
    printf("\n\t\t\t\t**************GENERAL GUIDLINES**************\n");
    printf("1)All lifelines can be used only once\n");
    printf("2)If your answer of a question is incorrect then you will be entitled to the amount of money agreed upon on the last checkpoint\n");
    printf("3)You cannot quit the game after choosing to take a lifeline\n");
    printf("4)To answer a particular question,press the number corresponding to the option of your choice and then enter key\n\n");
    printf("Press Y to begin the game. . ."); 
    
}

void question_bank(int num,int lf)/*main question bank for accessing questions and displaying options*/
{/*num represents the present question number,lf represents the lifeline chosen(if any)*/
    if ( lf==1)/*redirecting to the other question bank for 50/50 lifeline*/
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
        case 13:/*dedicated question for flip the question lifeline*/
        printf("13> Which author’s first and only novel was awarded the Pulitzer Prize in fiction?\n");
        printf("(1)Harper Lee\t\t\t\t (2)Ralph Elison\n(3)Emily Bronte\t\t\t\t (4)J.D.Salinger \n");
        break;
    }}
}

void alt_question_bank(int num)/*for implementing the 50/50 lifeline*/
{/*num is the question number for which the lifeline is invoked*/
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

void check_availablity(int count)/*keeps track of lifelines used and the one left*/
{
    printf("The lifelines available to you are:-\n");
    int len=0;
    int size=sizeof(lfarr)/sizeof(lfarr[0]);
    while(len<size)
        {
            if (lfarr[len]=='5' && cache[len]!='5')/*if a particular lifeline is in the array containing lifelines and the */
                printf("1>50/50 \n");              /*cache defined for storing already used lifeline doesn't contain it*/ 
            if (lfarr[len]=='F' && cache[len]!='F')/*then the user is informed that that lifeline is available*/
                printf("2>Flip Your Question \n");
            len++;
        }   
    if(count>0)/*count represents the number of lifeline left*/
        printf("Press the number by the lifeline to use it \n");
    else
        printf("SorryYou have consumed all your lifelines");
    
}
int update_lifelines(int temp1,int n)
{/*stores the used lifeline in the cache to prevent further usage*/
    if(temp1==1)
        cache[0]='5';
    if(temp1==2)
        cache[1]='F';
    n=n-1;
    return n;
}
int leave()
{/*asking the user if he/she wishes to leave the game with accrued earnings*/
    int quit;
    scanf("%d",&quit);
    return quit;
}
void lifeline(int lfline,int q,int *j)/*mechanism to implement lifelines and direct the flow of args into the question_bank function*/
{/*lfline is the lifeline chosen*/
    /*q is the present question number*/
    /*j is the pointer to the base address of array,used for keeping track of lifeline(s) engaged for a particular question*/
    if (lfline==1 && *(j+1)!=2)/*the present lifeline engaged is 50/50 and array doesn't contain the other lifelines*/
    {
        printf("We shall remove two of the wrong options %d \n\n\n\n",*(j+1));
        question_bank(q,lfline);
    }
    
    else if (lfline==1 && *(j+1)==2)
    {
        printf("We shall remove two of the wrong options %d\n\n\n\n",*(j+1));
        question_bank(13,lfline);/*13 is passed as arg instead of q as we are over-riding the normal mechanism by flipping the question*/
    }
    
    else 
    {
        printf("The question will be flipped\n\n\n\n");
        question_bank(13,lfline);
    }
}
int check_ans(int ch,int n,int *temp)/*function for checking the answer given and returning the next question number or*/
{/*incrementing the given question number by 13 to throw the control out of the game*/
    /*ch-chosen option,n-question number, temp-pointer to the base address of array containing lifelines used for the given question*/
    int ans[]={1,2,3,1,2,2,2,3,4,1,1,1,1};/*answer key*/
    if(*(temp+1)==2){/*checking for the 13th question's answer if flip the question has been invoked*/
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
    int breakpoints[]={0,4,8,12};/*checkpoints*/
    int prize;
    int orig_no;
    int prize_arr[]={0,5000,20000,80000,320000,640000,1250000,2500000,5000000,10000000,25000000,50000000,70000000};/*prize money for each question*/
    if(qtn<=12)
        prize=prize_arr[qtn];/*prize money corresponding to the last question if player leaves voluntarily or wins*/
    else{
        orig_no=qtn-13;
    for(int i=0;i<=3;i++)
    {
        if(orig_no>=breakpoints[i])/*highest breakpoint below the question number,if wrong answer inputted*/
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
    int quit=0;/* for checking if user wishes to quit or not*/
    int check_point=0;
    int count_lifeline=2;
    int i=1;
    for(;i<=12;)
    {
        int count=0;
        int ch,temp1,temp;
        int life[2];/*cache for lifelines invoked for a given question,cleared after every iteration*/

        clear_arr(&life[0]);/*for clearing the array*/
        question_bank(i,0);
        if(i!=1){
        printf("Do you want to quit and take the amount accrued or play on? Press 0 or 1 to choose the respective option: ");
        if(leave()==0){
            quit=1;
            break;}}
        if(count_lifeline>0)
        {printf("Do you want to take a life line-0 for NO and 1 for YES ");
            scanf("%d",&temp);}
        while(count_lifeline>0 && temp==1)
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
            if(i==12)/*handling special case scenario of player winning the game*/
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
        
    }if(quit==1)/*quitting causes incrementation of 1,handling this*/
        prize_money(i-1);
    else if(i>=12)/*wrong answer increments the question number by 13,winning the game leads to no change in control variable*/
        prize_money(i);
}
void main()/*MAIN method*/
{
    int x=1;
    first_screen();
    char ch;
    scanf("%c",&ch);
    while (x)
    {
        if (ch=='Y' || ch== 'y')/*keeping it case insensitive but character sensitive*/
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
            



