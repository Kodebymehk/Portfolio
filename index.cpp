#include <iostream>
#include <iomanip>
using namespace std;
// i used function to make a class an also to seperate the subjects. you can also used a oop class if you are knowledge for that its like this but in different variety.
void comprog();
void artapp();
void fildis();  
void ethics();
void science();
void purcomm();
void nstp();
void pe();
void math();


void comprog(){
system("cls");
// used either int or char it dipends what is prefrence for so i used char to stored and aslo to use a letter choices
char ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
int score = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|------------ Computer Programming -----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;

cout<<"Q1: What is language use for the database? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans1;

// i used if else statement for the adding points. because it is to make it and less hassle for me.

if(ans1 == 'A' || ans1 == 'a'){
    cout<<"\t\t\tCorrect answer" <<endl;
    cout<<endl;
    score++;
}
else if(ans1 == '0'){
    cout<<"\t\t\tMySQL" <<endl;
    cout<<endl;
    
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q2: What is language use for the GameDev? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans2;

if (ans2 == 'D' || ans2 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  score++;
}
else if (ans2 == '0')
{
  cout<<"\t\t\tC++" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<"Q3: What is the structure of the Website? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer"<< endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans3;

if (ans3 == 'B' || ans3 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans3 == '0')
{
  cout<<"\t\t\tHTML"<<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q4: What is use for styling the Website? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl ;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans4;

if (ans4 == 'C' || ans4 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans4 == '0')
{
  cout<<"\t\t\tCSS" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q5: What is use for Machine and Computer Vision? "<<endl;
cout<<endl;
cout<<"a- Python" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans5;

if (ans5 == 'A' || ans5 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans5 == '0')
{
  cout<<"\t\t\tPython" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q6: What is the opposite language of C++? "<<endl;
cout<<endl;
cout<<"a- Java" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- C Language" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans6;

if (ans6 == 'C' || ans6 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans6 == '0')
{
  cout<<"\t\t\tC Language" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q7: What is the use of CSS? "<<endl;
cout<<endl;
cout<<"a- For database " <<endl;
cout<<"b- For Styling" <<endl;
cout<<"c- For Function" <<endl;
cout<<"d- For Object Oriented" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer"<< endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans7;

if (ans7 == 'B' || ans7 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans7 == '0')
{
  cout<<"\t\t\tFor Styling" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q8: HTML stands for? "<<endl;
cout<<endl;
cout<<"a- Hyper Text Market Language " <<endl;
cout<<"b- Hyper Text Markup Language" <<endl;
cout<<"c- Hyper Text Marketing Language" <<endl;
cout<<"d- Hyper Text Mark Language" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans8;

if (ans8 == 'A' || ans8 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans8 == '0')
{
  cout<<"\t\t\tHyper Text Markup Language" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q9: What is CSS stands for? "<<endl;
cout<<endl;
cout<<"a- Cascading Style Sheets " <<endl;
cout<<"b- Cascading Styling Sheets" <<endl;
cout<<"c- Cascading Styler Sheets" <<endl;
cout<<"d- Cascading Styling Sheet" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans9;

if (ans9 == 'A' || ans9 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans9 == '0')
{
  cout<<"\t\t\tCascading Style Sheets" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q10: What is the programming language among them? "<<endl;
cout<<endl;
cout<<"a- HTML " <<endl;
cout<<"b- Javascript" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- HTTP" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans10;

if (ans10 == 'B' || ans10 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans10 == '0')
{
  cout<<"\t\t\tJavascript" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q11: Who develop C++ language? "<<endl;
cout<<endl;
cout<<"a- Dennis Ritchie " <<endl;
cout<<"b- Sun Microsystemst" <<endl;
cout<<"c- Bjarne Stroustrup" <<endl;
cout<<"d- Brendan Eich" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans11;

if (ans11 == 'C' || ans11 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans11 == '0')
{
  cout<<"\t\t\tBjarne Stroustrup" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q12: What is the based language of Java? "<<endl;
cout<<endl;
cout<<"a- Python/Ruby " <<endl;
cout<<"b- Javascript/React" <<endl;
cout<<"c- C/C++" <<endl;
cout<<"d- HTML/CSS" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans12;

if (ans12 == 'C' || ans12 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans12 == '0')
{
  cout<<"\t\t\tC/C++" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q13: What is OOP stands for? "<<endl;
cout<<endl;
cout<<"a- Object Oriented Programming " <<endl;
cout<<"b- Obeject Oppo Program" <<endl;
cout<<"c- Object Orient Programming" <<endl;
cout<<"d- Objective Oriented Programming" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans13;

if (ans13 == 'A' || ans13 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans13 == '0')
{
  cout<<"\t\t\tObject Oriented Programming" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q14: Who develop C language? "<<endl;
cout<<endl;
cout<<"a- Dennis Ritchie " <<endl;
cout<<"b- Bjarne Stroustrup" <<endl;
cout<<"c- Brendan Eich" <<endl;
cout<<"d- Sun Microsystems" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans14;

if (ans14 == 'A' || ans14 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans14 == '0')
{
  cout<<"\t\t\tDennis Ritchie" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q15: What is endl or //n stands for in C++? "<<endl;
cout<<endl;
cout<<"a- New length " <<endl;
cout<<"b- New lengths" <<endl;
cout<<"c- New Line" <<endl;
cout<<"d- New League" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans15;

if (ans15 == 'C' || ans15 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans15 == '0')
{
  cout<<"\t\t\tNew Line" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


// total result for the sum of score and average
  cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<score;
	cout<<endl;
	
  total = (static_cast<float>(score) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(score <= 4 && score == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(score >= 7 && score == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(score >= 10 && score == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(score >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;
}

//Line break !-----------------------------------------------------------------------------------------------------------------------------------


void artapp(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|-------------- Art Appreciation -------------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;

cout<<endl;
cout<<"Q1: What is the focus of neoclassical art? "<<endl;
cout<<endl;
cout<<"a- Revolt and social change" <<endl;
cout<<"b- Individual Identity and subjectivity" <<endl;
cout<<"c- Extravagantness and liveliness" <<endl;
cout<<"d- Asysmmetry and decoration" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'A' || a1 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tAsysmmetry and decoration";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q2: Why is Impressionism tagged as the most important movement? "<<endl;
cout<<endl;
cout<<"a- Because the center of this movement is the struggles of the people under conquerors." <<endl;
cout<<"b- Because it portrays the revolution and evelution of different countries" <<endl;
cout<<"c- Because the artists decide to paint what they see, think, and feel" <<endl;
cout<<"d- Because the focus of impressionism is the historical " <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'C' || a2 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tBecause the artists decide to paint what they see, think, and feel";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q3: What is the focus of romanticism art? "<<endl;
cout<<endl;
cout<<"a- Revolt and social change" <<endl;
cout<<"b- Individual Identity and subjectivity" <<endl;
cout<<"c- Extravagantness and liveliness" <<endl;
cout<<"d- Asysmmetry and decoration" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'B'|| a3 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tIndividual Identity and subjectivity";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q4: Among the choices, which is an example of Medieval Artwork? "<<endl;
cout<<endl;
cout<<"a- Virgin Mary" <<endl;
cout<<"b- Perseus with the head of Medusa" <<endl;
cout<<"c- St. Peter`s Basilica" <<endl;
cout<<"d- Hagia Sophia" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'D' || a4 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tHagia Sophia";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q5: Which among the choices is an example of Chinese art?  "<<endl;
cout<<endl;
cout<<"a- Jeorgori" <<endl;
cout<<"b- Gongbi" <<endl;
cout<<"c- Ukiyo-e" <<endl;
cout<<"d- Sarong"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'B' || a5 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tGongbi";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q6:  Which of the following art movements focused on portraying religious images?"<<endl;
cout<<endl;
cout<<"a- Mannerism" <<endl;
cout<<"b- Greek Art" <<endl;
cout<<"c- Renaissance" <<endl;
cout<<"d- Barogue"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'C' || a6 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tRenaissance";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q7: Among the choices, which is an example of artwork completed during the Baroque era?"<<endl;
cout<<endl;
cout<<"a- Virgin Mary" <<endl;
cout<<"b- Perseus with the head of Medusa" <<endl;
cout<<"c- St. Peter`s Basilica" <<endl;
cout<<"d- Hagia Sophia"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'C' || a7 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0')
{
  cout<<"\t\t\tSt. Peter`s Basilica";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q8: Among the choices, which is an example of Greek Art? "<<endl;
cout<<endl;
cout<<"a- Parthenon" <<endl;
cout<<"b- Pantheon" <<endl;
cout<<"c- Angono Petroglyphs" <<endl;
cout<<"d- Hagia Sophia"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'A' || a8 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tParthenon";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<"Q9: Who painted Strarry Night?"<<endl;
cout<<endl;
cout<<"a- Michelangelo" <<endl;
cout<<"b- Leonardo de Vinci" <<endl;
cout<<"c- Angono Petroglyphs" <<endl;
cout<<"d- Pablo Picasso"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'C' || a9 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tVincent van Gogh";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q10:  Among the choices, which is an example of Japanese art?"<<endl;
cout<<endl;
cout<<"a- Jeorgori" <<endl;
cout<<"b- Gongbi" <<endl;
cout<<"c- Ukiyo-e" <<endl;
cout<<"d- Sarong"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'C' || a10 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tUkiyo-e";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q11: What art movement modernized the designs of the artworks?"<<endl;
cout<<endl;
cout<<"a- Expressionism" <<endl;
cout<<"b- Art Nouveau" <<endl;
cout<<"c- Fauvism" <<endl;
cout<<"d- Cubism"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'B' || a11 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tArt Nouveau";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q12: What is Ewa Partum`s means in creating her poetries"<<endl;
cout<<endl;
cout<<"a- Performance" <<endl;
cout<<"b- Art Nouveau" <<endl;
cout<<"c- Fauvism" <<endl;
cout<<"d- Cubism"<<endl;
cout<<endl;


cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'A' || a12 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tPerformance";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q13: Which of the following is an example of symbolism art?"<<endl;
cout<<endl;
cout<<"a- Casa Battlo" <<endl;
cout<<"b- Active Poetry" <<endl;
cout<<"c- Angel of Death" <<endl;
cout<<"d- Whaam!"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'C' || a13 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tAngel of Death";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q14: What art movement is widely use to characterize artworks found in 3D interior spaces?"<<endl;
cout<<endl;
cout<<"a- Conceptual Art" <<endl;
cout<<"b- De Stijl" <<endl;
cout<<"c- Photorealism" <<endl;
cout<<"d- Installation Art"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'D' || a14 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tInstallation Art";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q15: What art movement is widely use to characterize artworks found in 3D interior spaces?"<<endl;
cout<<endl;
cout<<"a- Leonora Carrington" <<endl;
cout<<"b- Karl Marx" <<endl;
cout<<"c- Carl Andre" <<endl;
cout<<"d- Ewa Partum"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'B' || a15 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tKarl Marx";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

  //total score and average

    cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}

//Line break----------------------------------------------------------------------------------------------------------------------------------- the purpose of this is to easily to identify each subject this will be the marks for me to easily find each subjects or container

void fildis(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|----- Filipino sa iba`t-ibang Disiplina -----|"<<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: Nag-expire noong Hunyo 31,2013 napatunayang peke at walang silbi. Noong i-extend ito ng Reforms(CARPER)."<<endl;
cout<<endl;
cout<<"a- TAMA" <<endl;
cout<<"b- MALI" <<endl;
cout<<"c- SIGURO" <<endl;
cout<<"d- WALA SA NABANGGIT" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'A' || a1 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tTama";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q2: Ang lupaing agrikultural o halos 42 porsyento ng kabuoang kalupaan ng bansa at 5.6 milyong ektarya nito ay sakahan ng cereal tulad ng palay. "<<endl;
cout<<endl;
cout<<"a- TAMA" <<endl;
cout<<"b- MALI" <<endl;
cout<<"c- SIGURO" <<endl;
cout<<"d- WALA SA NABANGGIT" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'A' || a2 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tTAMA";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q3: Ang sukat ng sakahan sa pagpapatupad ng CARPER ay kakaramot na average na 1.2 ektarya. "<<endl;
cout<<endl;
cout<<"a- TAMA" <<endl;
cout<<"b- MALI" <<endl;
cout<<"c- SIGURO" <<endl;
cout<<"d- WALA SA NABANGGIT" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'A' || a3 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tTAMA";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q4: Ang kahulugan ng PDP ay Philippine Development Phase. "<<endl;
cout<<endl;
cout<<"a- TAMA" <<endl;
cout<<"b- MALI" <<endl;
cout<<"c- SIGURO" <<endl;
cout<<"d- WALA SA NABANGGIT" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'B' || a4 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tMALI";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q5: 87 porsyento ang upa sa lupa, napipilitan ang mga magsasakang magpasailalim rito. "<<endl;
cout<<endl;
cout<<"a- TAMA" <<endl;
cout<<"b- MALI" <<endl;
cout<<"c- SIGURO" <<endl;
cout<<"d- WALA SA NABANGGIT" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'A' || a5 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tTAMA";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<"Q6: Sila ang nag momonopolyo ng Agrarian sa Pilipinas."<<endl;
cout<<endl;
cout<<"a- Kapitalista" <<endl;
cout<<"b- Magsasaka" <<endl;
cout<<"c- Federelista" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'A' || a6 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tKapitalista";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<"Q7: Ilan ang datos na lumabas sa gobyerno na urban papulasyon noong 2010"<<endl;
cout<<endl;
cout<<"a- 93.2 milyon" <<endl;
cout<<"b- 92.3 milyon" <<endl;
cout<<"c- 94.3 milyon" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'B' || a7 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0')
{
  cout<<"\t\t\t92.3 milyon";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q8: Ito ang isa sa pinamalaking pinagkukunan ng kabuhayan sa Pilipinas.  "<<endl;
cout<<endl;
cout<<"a- Pilak" <<endl;
cout<<"b- Agraryo" <<endl;
cout<<"c- Tatso" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'B' || a8 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tAgraryo";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q9: Sino ang mga pinapaalis ng mga ganid na kapitalista sa kanilang lupa na kabundukan"<<endl;
cout<<endl;
cout<<"a- Mangingisda" <<endl;
cout<<"b- Manggagawa" <<endl;
cout<<"c- Lumad" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'C' || a9 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tLumad";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q10: Gaano karaming kabang ng Pala yang Bayad ng mga Magsasaka sa upa sa Lupa"<<endl;
cout<<endl;
cout<<"a- 13 na kaban" <<endl;
cout<<"b- 12 na kaban" <<endl;
cout<<"c- 14 na kaban" <<endl;
cout<<"c- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'A' || a10 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\t13 na kaban";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q11: Sino ang aktibong grupo na patuloy na pinagalalaban ang karapatan ng mga magsasaka"<<endl;
cout<<endl;
cout<<"a- Anakdugo" <<endl;
cout<<"b- Anakpugad" <<endl;
cout<<"c- Anakpawis" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'C' || a11 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\t Anakpawis";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q12: Ang kahulugan ng CARP"<<endl;
cout<<endl;
cout<<"a- Comprehensive Agrarian Reform Picture" <<endl;
cout<<"b- Comprehensive Agrarian Reform Process" <<endl;
cout<<"c- Comprehensive Agrarian Reform Program" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'C' || a12 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tComprehensive Agrarian Reform Program";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;
  count--;

cout<<endl;
cout<<endl;
cout<<"Q13: Ano ang kahulugan ng PDP?"<<endl;
cout<<endl;
cout<<"a- Philippine Development Process" <<endl;
cout<<"b- Philippine Development Plan" <<endl;
cout<<"c- Philippine Development Place" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'B' || a13 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tPhilippine Development Plan";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;
  count--;

cout<<endl;
cout<<endl;
cout<<"Q14: Magkano ang kinikita ng magsasaka sa loob ng isang araw. 1-200 2-250 3-300.?"<<endl;
cout<<endl;
cout<<"a- 1-3 tama" <<endl;
cout<<"b- De 1 tama" <<endl;
cout<<"c- 3- tama" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'A' || a14 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\t1-3 tama";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q15: Ito ang mga naging malaking dagok ng mga magsasaka sa Pilipinas 1- kawalan ng Lupa 2- Malaking bayad sa Upa 3- Mabilisang pagbebenta."<<endl;
cout<<endl;
cout<<"a- 1 tama" <<endl;
cout<<"b- 1-2 tama" <<endl;
cout<<"c- 2- mali" <<endl;
cout<<"d- WALA SA NABANGGIT"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'B' || a15 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\t1-2 tama";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

  //total score and average

    cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}


//Line break-----------------------------------------------------------------------------------------------------------------------------------

void ethics(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;



    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|===============================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|------------ Ethics -----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|===============================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: Kristine a nurse decided to cancel her visa for the US."<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'A' || a1 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tMoral Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<endl;
cout<<endl;
cout<<"Q2: The familiy went on vacation yesterday after a very stressful week. "<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'A' || 2 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tMoral Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q3: Rodolfo is a senior member of TACRU, an organization providing immediate medical and emergency.. "<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'A' || a3 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tMoral Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q4: During the aftermath of supertyphoon yolanda . Ana worked as an NGO volunteer. "<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'A' || a4 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tMoral Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q5: Heroes regularly wakes up early in the morning  to meditate along the beach. "<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'B' || a5 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tEmotional Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<endl;
cout<<endl;
cout<<"Q6: My boyfriend always walks away wherever we are having an intense altercation."<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'B' || a6 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tEmotional Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q7: I am a member of the Gawad Kalinga Foundation since college."<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'A' || a7 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0')
{
  cout<<"\t\t\t92.3 milyon";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<endl;
cout<<endl;
cout<<"Q8: Suzi is writing her mood journal.  "<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'B' || a8 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tEmotional Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q9: She took a deep breath after her boss scolded her for mistake."<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'B' || a9 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tEmotional Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q10: My grandfather goes to church regularly despite his age."<<endl;
cout<<endl;
cout<<"a- Moral Obligation" <<endl;
cout<<"b- Emotional Obligation" <<endl;
cout<<"c- Physical Obligation" <<endl;
cout<<"d- Psychological Obligation" <<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'A' || a10 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tMoral Obligation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q11: Without intellectual deliberation we cannot be responsible for our emotions."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- True neither False" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'A' || a11 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q12: Emotional responses cannot be reshaped overtime."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- True neither False" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'A' || a12 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q13:  Emotions help us to survive, thrive and avoid danger."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- True neither False" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'A' || a13 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q14: Emotions play a significant role in our ethical decision-making."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- True neither False" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'A' || a14 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q15: Emotional responses can be lead to suboptimal moral decision."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- True neither False" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'A' || a15 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

  //total score and average

      cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}


//Line break-----------------------------------------------------------------------------------------------------------------------------------

void science(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;

    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|---- Science and Technology and Society -----|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: How can technology help in sharing information about human rights advocacy?"<<endl;
cout<<endl;
cout<<"a- Through online transactions" <<endl;
cout<<"b- Through the social media" <<endl;
cout<<"c- Through the online business" <<endl;
cout<<"d- Through the digital marketing" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'B' || a1 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tThrough the social media";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q2: This is considered to be one of the critical issues for the entertainment industry. "<<endl;
cout<<endl;
cout<<"a- Trademark" <<endl;
cout<<"b- Copyright" <<endl;
cout<<"c- Branding" <<endl;
cout<<"d- Patent" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'B' || a2 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tCopyright";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q3: This has contributed to humanity progress "<<endl;
cout<<endl;
cout<<"a- Confidentially" <<endl;
cout<<"b- GMOs" <<endl;
cout<<"c- Data Conspiracy" <<endl;
cout<<"d- Technological Advancement" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'D' || a3 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tTechnological Advancement";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<"Q4: How can our safety and security be jeopardized in online transactions?  "<<endl;
cout<<endl;
cout<<"a- None of the choices" <<endl;
cout<<"b- By sharing our personal information to their sites" <<endl;
cout<<"c- By allowing their sites to process our information for undisclosed purposes" <<endl;
cout<<"d- All of the choices" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'D' || a4 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tAll of the choices";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q5: The following may result from an adverse impact of technology execept for one. "<<endl;
cout<<endl;
cout<<"a- Social media and mobile devices may lead to psychological and physical issues" <<endl;
cout<<"b- Less time for play and loss of social skills" <<endl;
cout<<"c- It produces more pollution" <<endl;
cout<<"d- It motivates the learner to access open-source materials on the internet." <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'D' || a5 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tIt motivates the learner to access open-source materials on the internet.";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q6:Technology allows connecting and meeting new people while at work using what technology? "<<endl;
cout<<endl;
cout<<"a- Digital Connection" <<endl;
cout<<"b- Technological Network" <<endl;
cout<<"c- Communication Site" <<endl;
cout<<"d- Social Networking" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'C' || a6 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tCommunication site";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q7: There is a need to reflect on these, especially if machines adopt human`s nature. "<<endl;
cout<<endl;
cout<<"a- Intellectual Property rights" <<endl;
cout<<"b- Utillitarian view" <<endl;
cout<<"c- Global data challenges" <<endl;
cout<<"d- Ethical dilemma" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'D' || a7 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0') // View the Correct Answer
{
  cout<<"\t\t\tEthical dilemma";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q8: The following are primary purposes of technology to humanity except for one."<<endl;
cout<<endl;
cout<<"a- To alter economic standards in favor of the elites" <<endl;
cout<<"b- To create an opportunity to improve to traditional practices and processes" <<endl;
cout<<"c- To enable and environment for everyone" <<endl;
cout<<"d- To provide solutions to multiple problems in society" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'A' || a8 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tTo alter economic standards in favor of the elites";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q9: The following are impacts of technology towards education except for one."<<endl;
cout<<endl;
cout<<"a- Increase of plaglarism and cheating" <<endl;
cout<<"b- Increase social interaction" <<endl;
cout<<"c- Availability of online learning content" <<endl;
cout<<"d- Greater accessibility of learning resources " <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'B' || a9 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tIncrease social interaction";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q10: The following are impacts of technology on humanity except for one.."<<endl;
cout<<endl;
cout<<"a- Wide dependence on paper and pen" <<endl;
cout<<"b- Increased human to machine interactions" <<endl;
cout<<"c- Increased Isolation" <<endl;
cout<<"d- Reduced social interaction and social skills"<<endl;

cout<<"\t\t\tEnter 0 to view the answer"<<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'A' || a10 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tWide dependence on paper and pen";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q11: ___ has provided a wide range of opportunities for advancement."<<endl;
cout<<endl;
cout<<"a- Economic Disparties" <<endl;
cout<<"b- Technology" <<endl;
cout<<"c- Human Rights" <<endl;
cout<<"d- Safety and Security"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'B' || a11 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tTechnology";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q12: Fundamental rights in the digital era, such as ___ rights, should be maintained in digital spaces"<<endl;
cout<<endl;
cout<<"a- Safety and Security" <<endl;
cout<<"b- Technology" <<endl;
cout<<"c- Social Networking" <<endl;
cout<<"d- Ethical Dilemmas"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'A' || a12 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tSafety and Security";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q13: The risk has distinctive implications for the right privacy and ____."<<endl;
cout<<endl;
cout<<"a- Ethical Dilemmas" <<endl;
cout<<"b- Social Networking" <<endl;
cout<<"c- Data" <<endl;
cout<<"d- Confidentiallty"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'D' || a13 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tConfidentiallty";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q14: Digital spaces have made ____, or socializing online more convenient."<<endl;
cout<<endl;
cout<<"a- Ethical Dilemmas" <<endl;
cout<<"b- Social Networking" <<endl;
cout<<"c- Technology" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'C' || a14 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tTechnology";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q15: It also has brought ___ that make us confused on what is wrong or right."<<endl;
cout<<endl;
cout<<"a- Ethical Dilemmas" <<endl;
cout<<"b- Social Networking" <<endl;
cout<<"c- Data" <<endl;
cout<<"d- Confidentiallty"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'A' || a15 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tEthical Dilemmas";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}
  //total score and average

  cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;
}


//Line break-----------------------------------------------------------------------------------------------------------------------------------

void purcomm(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|---------- Purposive Communication ----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: A prensenter aims to present his ideas to a wider audience."<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Consideration about the tpe of audience" <<endl;
cout<<"c- Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'A' || a1 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tGoal of the presentation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q2: A lawyer presenting evidenc to the court about he innocence of her client. "<<endl;
cout<<endl;
cout<<"a- Informative speech" <<endl;
cout<<"b- Pursuasive speech" <<endl;
cout<<"c- Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'B' || a2 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tPursuasive speech";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q3: The man will be doing a presentation with musical accompaniment. "<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Consideration about the tpe of audience" <<endl;
cout<<"c- Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'C' || a3 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tConsideration of the type of presentation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;

cout<<"Q4: A historian presenting the contents of a historical chronicle "<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Pursuasive speech" <<endl;
cout<<"c-Informative speech" <<endl;
cout<<"d- All answer are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'C' || a4 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tInformative speech";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q5: The artist will be presenting her work to children in an orphanage. "<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Consideration about the tpe of audience" <<endl;
cout<<"c-Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'B' || a5 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tConsideration about the tpe of audience";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q6: The presenter wants to convince the audience that his research proves a scientific theory."<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Consideration about the tpe of audience" <<endl;
cout<<"c- Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'B' || a6 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tConsideration about the tpe of audience";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q7: A student trying to convince his professor to extend the deadline. "<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Pursuasive speech" <<endl;
cout<<"c- Informative speech" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'B' || a7 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0') // View the Correct Answer
{
  cout<<"\t\t\tPursuasive speech";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q8: A college presenting details about the physics of the Big Bang."<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Pursuasive speech" <<endl;
cout<<"c- Informative speech" <<endl;
cout<<"d- All answer are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'C' || a8 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tInformative speech";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q9: The woman will give her speech to high school students."<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Consideration about the tpe of audience" <<endl;
cout<<"c- Consideration of the type of presentation" <<endl;
cout<<"d- All answer are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'B' || a9 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tConsideration about the tpe of audience";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q10: A historian presenting his arguments about a historical event."<<endl;
cout<<endl;
cout<<"a- Goal of the presentation" <<endl;
cout<<"b- Pursuasive speech" <<endl;
cout<<"c- Informative speech" <<endl;
cout<<"d- All answer are incorrect"<<endl;

cout<<"\t\t\tEnter 0 to view the answer"<<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'B' || a10 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tPursuasive speech";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;

cout<<"Q11: This is the ability to adjust the resonance and the timbre of vocal tone."<<endl;
cout<<endl;
cout<<"a- None of the above" <<endl;
cout<<"b- Articulation" <<endl;
cout<<"c- Pitch" <<endl;
cout<<"d- Modulation"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'D' || a11 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tModulation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q12: This refers to the ability to write a speech that would appeal to the audience and connect with them at a deeper level."<<endl;
cout<<endl;
cout<<"a- Pursuasive speech" <<endl;
cout<<"b- None of the above" <<endl;
cout<<"c- Tools for effective delivery" <<endl;
cout<<"d- Audience rapport"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'D' || a12 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tAudience rapport";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q13: This refers to the topmost fear in the world of pulic speaking."<<endl;
cout<<endl;
cout<<"a- Stage fright" <<endl;
cout<<"b- Stage presence" <<endl;
cout<<"c- Articulation" <<endl;
cout<<"d- None of the above"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'A' || a13 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tStage fright";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q14: This refers to the loudness or softness of voice."<<endl;
cout<<endl;
cout<<"a- Pitch" <<endl;
cout<<"b- Vocal variety" <<endl;
cout<<"c- Volume" <<endl;
cout<<"d- All are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'C' || a14 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\t Volume";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q15: A good speaker can be considered effective without visual presentation"<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- None of the above" <<endl;
cout<<"d- All answer are incorrect"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'B' || a15 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

  //total score and average

  cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}

//Line break-----------------------------------------------------------------------------------------------------------------------------------

void nstp(){
system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|==========================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|---------- Nstp ----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|==========================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: Positive outcome has a capacity to adapt to local conditions and evolve over time."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'A' || a1 == 'a') // true if at least true one of the operands is true..
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;

cout<<"Q2: Dynamic learning communities are groups of people who form a learning community generally characterized by autonomous. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'A' || a2 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 = '0')
{
	cout<<"\t\t\tTrue";
	cout<<endl;
}
else
	cout<<"\t\t\tWrong answer";
	cout<<endl;



cout<<endl;
cout<<endl;
cout<<"Q3: Group become communities when they interact with each other and stay long enough to form a set of habits and conventions."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'A' || a3 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;

cout<<"Q4:  Negative outcome a short terms inefficiencies. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'A' || a4 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q5: A community member becomes aware that she or he lacks some skills and knowledges. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'A' || a5 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Q6: After new knowledge or skill is tried out and confirmed. the solution is shared with the group."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'A' || a6 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q7: Both instructional design. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'A' || a7 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0') // View the Correct Answer
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Q8: Dynamic learning is characterized by constant change and activity."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'A' || a8 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == 'a')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q9: The term dyanamic is added to distinguish the construct from traditional.centralied groups."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'A' || a9 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q10: Community members have a variety of tools to use in testing out."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;

cout<<"\t\t\tEnter 0 to view the answer"<<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'A' || a10 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;

cout<<"Q11: Advocacy with and and among leaders in this group."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'A' || a11 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q12: Traditional mass mobalization occurs within local."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'A' || a12 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q13: Social mobalization in total aims are a continuum of acvities."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'A' || a13 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q14: Mass mobalization is also known as social mobalization or popular mobalization."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'A' || a14 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q15: Individual action are the ultimate pay-off the health program."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<"c- All answera are incorrect" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'A' || a15 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


  //total score and average

    cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}
//Line break-----------------------------------------------------------------------------------------------------------------------------------



void pe(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=========================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|---------- P.E ----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=========================|" <<endl;
    cout<<endl
        <<endl
        <<endl;


cout<<"Q1: The moving the hand from the wrist either in clockwise or counterclockwise direction. "<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Kumintang" <<endl;
cout<<"c- Stamp" <<endl;
cout<<"d- Hayon hayon" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'B' || a1 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tKumintang";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Q2: The partners are facing each other or standing side by side."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'C' || a2 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tClosed arms";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q3: It is a dance formation like a quadrille or a unit compsed of two or more pairs. "<<endl;
cout<<endl;
cout<<"a- Set" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Stamp" <<endl;
cout<<"d- Hayon hayon" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'A' || a3 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tSet";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;

cout<<"Q4:  It is the hand away from one`s partner. "<<endl;
cout<<endl;
cout<<"a- Stamp" <<endl;
cout<<"b- Outside hand" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'A' || a4 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tStamp";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q5: It`s a spring from one foot landing on the same foot in place or any direction. "<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Hop" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'C' || a5 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tHop";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Q6:  It is a tap lighlty with the ball or tip of the toe, placing weight of the body on the foot."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'B' || a6 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tCounter Clockwise";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q7: It is the reverse direction of clockwise. "<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'B' || a7 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0') // View the Correct Answer
{
  cout<<"\t\t\tCounter Clockwise";
  cout<<endl;
}
else
  
  cout<<"\t\t\tWrong Answer";
  cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Q8: To bring down the foot forcibly and noisily on the floor."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'C' || a8 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tClosed arms";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q9: It`s a spring from one foot landing on the other foot in any direction."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Leap"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'D' || a9 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tLeap";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q10: To place a one forearm in front and the other at the back of the waist."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Counter Clockwise" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;

cout<<"\t\t\tEnter 0 to view the answer"<<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'D' || a10 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tHayon hayon";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;

cout<<"Q11: It is spring on one foot or both feet, landing on both in any direction."<<endl;
cout<<endl;
cout<<"a- Jump" <<endl;
cout<<"b- Stamp" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'A' || a11 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tJump";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q12: It is the foot nearest one`s partner,when partners stand side by side. "<<endl;
cout<<endl;
cout<<"a- Sideward foot" <<endl;
cout<<"b- Backward foot" <<endl;
cout<<"c- Foward foot" <<endl;
cout<<"d- Inside foot"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'D' || a12 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tInside foot";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q13: To turn hands up and sown alternately,hands at waist level in front, elbows close to waist."<<endl;
cout<<endl;
cout<<"a- Draw" <<endl;
cout<<"b- Hapay" <<endl;
cout<<"c- Bilao" <<endl;
cout<<"d- Set"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'C' || a13 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tBilao";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q14:  It is put the foot in a certain or desired position without putting weight on it.  "<<endl;
cout<<endl;
cout<<"a- Point" <<endl;
cout<<"b- Step" <<endl;
cout<<"c- Place" <<endl;
cout<<"d- Leap"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'C' || a14 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tPlace";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


cout<<endl;
cout<<endl;
cout<<"Q15: It is flourish or offer a handkerchef, hat or glass of wine to somebody as a sign of invitation."<<endl;
cout<<endl;
cout<<"a- Tap" <<endl;
cout<<"b- Hapay" <<endl;
cout<<"c- Closed arms" <<endl;
cout<<"d- Hayon hayon"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'B' || a15 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tHapay";
  cout<<endl;
}
else
  cout<<"\t\t\tWrong Answer";
  cout<<endl;


  //total score and average

  cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}


void math(){

system("cls");
char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
int count = 0;
float total;


    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|==========================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|---------- Discrete Mathematics ----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|==========================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;



cout<<"Q1: 10 is an odd integer. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a1;

if (a1 == 'B' || a1 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a1 == '0')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q2: 12 ÷ 4 = 3."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a2;

if (a2 == 'A' || a2 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a2 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q3: 15 + 2 = 13. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a3;

if (a3 == 'B' || a3 == 'b')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
  count++;
}
else if (a3 == '0')
{
  cout<<"\t\t\tSet";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;

cout<<"Q4:2 + 3 = 4:. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a4;

if (a4 == 'B' || a4 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a4 == '0')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q5:3 is an odd integer. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>a5;

if (a5 == 'A' || a5 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a5 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q6: February 29 is a date that usually occurs every 4 years."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a6;

if (a6 == 'A' || a6 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a6 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q7: January is a Chirismas month. "<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a7;

if (a7 == 'B' || a7 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a7 == '0') // View the Correct Answer
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<"Q8: Nine is an even integer."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a8;

if (a8 == 'B' || a8 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a8 == '0')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q9: Quezon City was once the capital of the Philippines."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a9;

if (a9 == 'A' || a9 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a9 == '0')
{
  cout<<"\t\t\tTrue";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q10: Violets are red."<<endl;
cout<<endl;
cout<<"a- True" <<endl;
cout<<"b- False" <<endl;

cout<<"\t\t\tEnter 0 to view the answer"<<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a10;

if (a10 == 'B' || a10 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a10 == '0')
{
  cout<<"\t\t\tFalse";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;

cout<<"Q11: The statement is false only when both input statements are false."<<endl;
cout<<endl;
cout<<"a- Implication" <<endl;
cout<<"b- Negation" <<endl;
cout<<"c- Disjunction" <<endl;
cout<<"d- Conjunction"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a11;

if (a11 == 'C' || a11 == 'c')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a11 == '0')
{
  cout<<"\t\t\tDisjunction";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}

cout<<endl;
cout<<endl;
cout<<"Q12: The statement is false only when the first input statement is true. "<<endl;
cout<<endl;
cout<<"a- Implication" <<endl;
cout<<"b- Negation" <<endl;
cout<<"c- Disjunction" <<endl;
cout<<"d- Conjunction"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a12;

if (a12 == 'A' || a12 == 'a')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a12 == '0')
{
  cout<<"\t\t\tImplication";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q13: The statement is true only when both input statements are true."<<endl;
cout<<endl;
cout<<"a- Implication" <<endl;
cout<<"b- Negation" <<endl;
cout<<"c- Disjunction" <<endl;
cout<<"d- Conjunction"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a13;

if (a13 == 'D' || a13 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a13 == '0')
{
  cout<<"\t\t\tConjunction";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q14: The statement is true only when both input statements are true. "<<endl;
cout<<endl;
cout<<"a- Implication" <<endl;
cout<<"b- Biconditional" <<endl;
cout<<"c- Disjunction" <<endl;
cout<<"d- Conjunction"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a14;

if (a14 == 'B' || a14 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a14 == '0')
{
  cout<<"\t\t\tBiconditional";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<"Q15: The statement is true when we the input statement is false."<<endl;
cout<<endl;
cout<<"a- Implication" <<endl;
cout<<"b- Negation" <<endl;
cout<<"c- Disjunction" <<endl;
cout<<"d- Conjunction"<<endl;
cout<<endl;

cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<"Enter your Answer: ";
cin>>a15;

if (a15 == 'B' || a15 == 'b')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  count++;
}
else if (a15 == '0')
{
  cout<<"\t\t\tNegation";
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


  //total score and average

    cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<count;
	cout<<endl;
	
  total = (static_cast<float>(count) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(count <= 4 && count == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(count >= 7 && count == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 10 && count == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(count >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;

}

int main(){
int pro;



do
{
    
    

    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t\t|===================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t\t|--------- MIDTERM PROJECT ---------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t\t|===================================|" <<endl;
    cout<<endl
        <<endl;


cout<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 1: For Computer Programming"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 2: For Ethics"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 3: For Art Appreciation"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 4: For P.E"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 5: For Nstp"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 6: For Purposive Communication"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 7: For Science and Technology and Society"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 8: For Filipino sa iba`t-ibang Disiplina"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 9: For Discrete Mathematics"<<endl;
cout<<"\t\t\t\t\t\t\t\tPress 0: For Exit"<<endl;


cout<<"\t\t\t\t\t\t\t\tEnter your choice: ";
cin>>pro;


switch(pro)
{
case 1:
    comprog();
    break;
case 2:
    ethics();
    break;
case 3:
    artapp();
    break;
case 4:
    pe();
    break;
case 5:
    nstp();
    break;
case 6:
    purcomm();
    break;
case 7:
    science();
    break;
case 8:
    fildis();
    break;
case 9:
    math();
    break;

case 0:
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tTHANK YOU FOR PARTICIPATING!!" <<endl;
    cout<<endl;
    break;

    default:
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tYOUR CHOICE CANNOT FOUND!!" <<endl;
    cout<<endl;
}


} while (pro !=0);
  
return 0;

}





