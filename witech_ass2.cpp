#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

class FHSS{
	int a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2, g1, g2, h1, h2, i1, i2, j1, j2;
	int a, b, c, d, e, f, g, h, i, j;
public:
	void fhss_getdata();
	void fhss_graph();
	void fhss_showdata();
};

void FHSS :: fhss_getdata(){
	cout<<endl<<"----Enter 20 patterns of 2-bits (PN)----"<<endl;
	cout<<"01) ";
	cin>>a1;
	cout<<"02) ";
	cin>>a2;
	cout<<"03) ";
	cin>>b1;
	cout<<"04) ";
	cin>>b2;
	cout<<"05) ";
	cin>>c1;
	cout<<"06) ";
	cin>>c2;
	cout<<"07) ";
	cin>>d1;
	cout<<"08) ";
	cin>>d2;
	cout<<"09) ";
	cin>>e1;
	cout<<"10) ";
	cin>>e2;
	cout<<"11) ";
	cin>>f1;
	cout<<"12) ";
	cin>>f2;
	cout<<"13) ";
	cin>>g1;
	cout<<"14) ";
	cin>>g2;
	cout<<"15) ";
	cin>>h1;
	cout<<"16) ";
	cin>>h2;
	cout<<"17) ";
	cin>>i1;
	cout<<"18) ";
	cin>>i2;
	cout<<"19) ";
	cin>>j1;
	cout<<"20) ";
	cin>>j2;
	
	cout<<endl<<"----Enter 10 patterns of 2-bits (Binary data)----"<<endl;
	cout<<"01) ";
	cin>>a;
	cout<<"02) ";
	cin>>b;
	cout<<"03) ";
	cin>>c;
	cout<<"04) ";
	cin>>d;
	cout<<"05) ";
	cin>>e;
	cout<<"06) ";
	cin>>f;
	cout<<"07) ";
	cin>>g;
	cout<<"08) ";
	cin>>h;
	cout<<"09) ";
	cin>>i;
	cout<<"10) ";
	cin>>j;

}

void FHSS :: fhss_graph(){
	
	line(635, 190, 635, 590);
	line(585, 190, 585, 590);
	line(535, 190, 535, 590);
	line(485, 190, 485, 590);
	line(435, 190, 435, 590);
	line(385, 190, 385, 590);
	line(335, 190, 335, 590);
	line(285, 190, 285, 590);
	line(235, 190, 235, 590);
	line(185, 190, 185, 590);
	line(135, 190, 135, 590);  // vertical lines
	
	line(135, 590, 635, 590); // horizontal lines
	line(135, 490, 635, 490);
	line(135, 390, 635, 390);
	line(135, 290, 635, 290);
	line(135, 190, 635, 190);

	
	// values of frequencies in each horizontal axis
	outtextxy(90, 573, "   00");
	outtextxy(90, 548, "   01");
	outtextxy(90, 523, "   10");
	outtextxy(90, 498, "00:11");
	outtextxy(90, 473, "   00");
	outtextxy(90, 448, "   01");
	outtextxy(90, 423, "   10");
	outtextxy(90, 398, "01:11");
	outtextxy(90, 373, "   00");
	outtextxy(90, 348, "   01");
	outtextxy(90, 323, "   10");
	outtextxy(90, 298, "10:11");
	outtextxy(90, 273, "   00");
	outtextxy(90, 248, "   01");
	outtextxy(90, 223, "   10");
	outtextxy(90, 198, "11:11");
	
	// values of frequencies in horizontal axis
	setcolor(GREEN);
	line(135, 565, 635, 565);
	line(135, 540, 635, 540);
	line(135, 515, 635, 515);
	// white line
	line(135, 465, 635, 465);
	line(135, 440, 635, 440);
	line(135, 415, 635, 415);
	// white line
	line(135, 365, 635, 365);
	line(135, 340, 635, 340);
	line(135, 315, 635, 315);
	// white line
	line(135, 265, 635, 265);
	line(135, 240, 635, 240);
	line(135, 215, 635, 215);
	// white line
	
	// values of hop periods through vertical lines
	line(160, 190, 160, 590);
	// white line
	line(210, 190, 210, 590);
	// white line
	line(260, 190, 260, 590);
	// white line
	line(310, 190, 310, 590);
	// white line
	line(360, 190, 360, 590);
	// white line
	line(410, 190, 410, 590);
	// white line
	line(460, 190, 460, 590);
	// white line
	line(510, 190, 510, 590);
	// white line
	line(560, 190, 560, 590);
	// white line
	line(610, 190, 610, 590);
	
	
	setcolor(WHITE);
	outtextxy(650, 150, "PN SEQUENCE");
	outtextxy(650, 170, "INPUT BINARY DATA");
	
	
	
}

void FHSS :: fhss_showdata(){
	
	
	      ///
	    //  //
	  //==a==//
	 //       //
	//        //
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (a == 00 && a1 == 00){
		bar(135, 565, 160, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "00");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a1 == 01){
		bar(135, 465, 160, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "01");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a1 == 10){
		bar(135, 365, 160, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "10");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a1 == 11){
		bar(135, 265, 160, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "11");
		outtextxy(152, 170, "00");
	}
	
	
	if (a == 00 && a2 == 00){
		bar(160, 565, 185, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "00");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a2 == 01){
		bar(160, 465, 185, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "01");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a2 == 10){
		bar(160, 365, 185, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "10");
		outtextxy(152, 170, "00");
	}
	else if (a == 00 && a2 == 11){
		bar(160, 265, 185, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "11");
		outtextxy(152, 170, "00");
	}
	
	
	if (a == 01 && a1 == 00){
		bar(135, 540, 160, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "00");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a1 == 01){
		bar(135, 440, 160, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "01");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a1 == 10){
		bar(135, 340, 160, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "10");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a1 == 11){
		bar(135, 240, 160, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "11");
		outtextxy(152, 170, "01");
	}
	
	
	if (a == 01 && a2 == 00){
		bar(160, 540, 185, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "00");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a2 == 01){
		bar(160, 440, 185, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "01");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a2 == 10){
		bar(160, 340, 185, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "10");
		outtextxy(152, 170, "01");
	}
	else if (a == 01 && a2 == 11){
		bar(160, 240, 185, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "11");
		outtextxy(152, 170, "01");
	}
	
	
	if (a == 10 && a1 == 00){
		bar(135, 515, 160, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "00");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a1 == 01){
		bar(135, 415, 160, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "01");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a1 == 10){
		bar(135, 315, 160, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "10");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a1 == 11){
		bar(135, 215, 160, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "11");
		outtextxy(152, 170, "10");
	}
	
	
	if (a == 10 && a2 == 00){
		bar(160, 515, 185, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "00");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a2 == 01){
		bar(160, 415, 185, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "01");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a2 == 10){
		bar(160, 315, 185, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "10");
		outtextxy(152, 170, "10");
	}
	else if (a == 10 && a2 == 11){
		bar(160, 215, 185, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "11");
		outtextxy(152, 170, "10");
	}
	
	
	if (a == 11 && a1 == 00){
		bar(135, 490, 160, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "00");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a1 == 01){
		bar(135, 390, 160, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "01");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a1 == 10){
		bar(135, 290, 160, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "10");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a1 == 11){
		bar(135, 190, 160, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(140, 150, "11");
		outtextxy(152, 170, "11");
	}
	
	
	if (a == 11 && a2 == 00){
		bar(160, 490, 185, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "00");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a2 == 01){
		bar(160, 390, 185, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "01");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a2 == 10){
		bar(160, 290, 185, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "10");
		outtextxy(152, 170, "11");
	}
	else if (a == 11 && a2 == 11){
		bar(160, 190, 185, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(165, 150, "11");
		outtextxy(152, 170, "11");
	}
	
	
	/////////
	//     //
	//==b=//
	//     //
	//     //
	//    //
	//////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (b == 00 && b1 == 00){
		bar(185, 565, 210, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "00");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b1 == 01){
		bar(185, 465, 210, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "01");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b1 == 10){
		bar(185, 365, 210, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "10");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b1 == 11){
		bar(185, 265, 210, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "11");
		outtextxy(202, 170, "00");
	}
	
	
	if (b == 00 && b2 == 00){
		bar(210, 565, 235, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "00");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b2 == 01){
		bar(210, 465, 235, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "01");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b2 == 10){
		bar(210, 365, 235, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "10");
		outtextxy(202, 170, "00");
	}
	else if (b == 00 && b2 == 11){
		bar(210, 265, 235, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "11");
		outtextxy(202, 170, "00");
	}
	
	
	if (b == 01 && b1 == 00){
		bar(185, 540, 210, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "00");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b1 == 01){
		bar(185, 440, 210, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "01");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b1 == 10){
		bar(185, 340, 210, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "10");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b1 == 11){
		bar(185, 240, 210, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "11");
		outtextxy(202, 170, "01");
	}
	
	
	if (b == 01 && b2 == 00){
		bar(210, 540, 235, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "00");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b2 == 01){
		bar(210, 440, 235, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "01");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b2 == 10){
		bar(210, 340, 235, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "10");
		outtextxy(202, 170, "01");
	}
	else if (b == 01 && b2 == 11){
		bar(210, 240, 235, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "11");
		outtextxy(202, 170, "01");
	}
	
	
	if (b == 10 && b1 == 00){
		bar(185, 515, 210, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "00");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b1 == 01){
		bar(185, 415, 210, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "01");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b1 == 10){
		bar(185, 315, 210, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "10");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b1 == 11){
		bar(185, 215, 210, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "11");
		outtextxy(202, 170, "10");
	}
	
	
	if (b == 10 && b2 == 00){
		bar(210, 515, 235, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "00");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b2 == 01){
		bar(210, 415, 235, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "01");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b2 == 10){
		bar(210, 315, 235, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "10");
		outtextxy(202, 170, "10");
	}
	else if (b == 10 && b2 == 11){
		bar(210, 215, 235, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "11");
		outtextxy(202, 170, "10");
	}
	
	
	if (b == 11 && b1 == 00){
		bar(185, 490, 210, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "00");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b1 == 01){
		bar(185, 390, 210, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "01");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b1 == 10){
		bar(185, 290, 210, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "10");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b1 == 11){
		bar(185, 190, 210, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(190, 150, "11");
		outtextxy(202, 170, "11");
	}
	
	
	if (b == 11 && b2 == 00){
		bar(210, 490, 235, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "00");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b2 == 01){
		bar(210, 390, 235, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "01");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b2 == 10){
		bar(210, 290, 235, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "10");
		outtextxy(202, 170, "11");
	}
	else if (b == 11 && b2 == 11){
		bar(210, 190, 235, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(215, 150, "11");
		outtextxy(202, 170, "11");
	}
	
	
	  ///////
	 ///    //
	//c
	///       
	 //    //
	  /////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (c == 00 && c1 == 00){
		bar(235, 565, 260, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "00");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c1 == 01){
		bar(235, 465, 260, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "01");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c1 == 10){
		bar(235, 365, 260, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "10");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c1 == 11){
		bar(235, 265, 260, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "11");
		outtextxy(252, 170, "00");
	}
	
	
	if (c == 00 && c2 == 00){
		bar(260, 565, 285, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "00");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c2 == 01){
		bar(260, 465, 285, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "01");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c2 == 10){
		bar(260, 365, 285, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "10");
		outtextxy(252, 170, "00");
	}
	else if (c == 00 && c2 == 11){
		bar(260, 265, 285, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "11");
		outtextxy(252, 170, "00");
	}
	
	
	if (c == 01 && c1 == 00){
		bar(235, 540, 260, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "00");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c1 == 01){
		bar(235, 440, 260, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "01");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c1 == 10){
		bar(235, 340, 260, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "10");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c1 == 11){
		bar(235, 240, 260, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "11");
		outtextxy(252, 170, "01");
	}
	
	
	if (c == 01 && c2 == 00){
		bar(260, 540, 285, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "00");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c2 == 01){
		bar(260, 440, 285, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "01");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c2 == 10){
		bar(260, 340, 285, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "10");
		outtextxy(252, 170, "01");
	}
	else if (c == 01 && c2 == 11){
		bar(260, 240, 285, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "11");
		outtextxy(252, 170, "01");
	}
	
	
	if (c == 10 && c1 == 00){
		bar(235, 515, 260, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "00");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c1 == 01){
		bar(235, 415, 260, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "01");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c1 == 10){
		bar(235, 315, 260, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "10");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c1 == 11){
		bar(235, 215, 260, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "11");
		outtextxy(252, 170, "10");
	}
	
	
	if (c == 10 && c2 == 00){
		bar(260, 515, 285, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "00");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c2 == 01){
		bar(260, 415, 285, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "01");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c2 == 10){
		bar(260, 315, 285, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "10");
		outtextxy(252, 170, "10");
	}
	else if (c == 10 && c2 == 11){
		bar(260, 215, 285, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "11");
		outtextxy(252, 170, "10");
	}
	
	
	if (c == 11 && c1 == 00){
		bar(235, 490, 260, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "00");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c1 == 01){
		bar(235, 390, 260, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "01");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c1 == 10){
		bar(235, 290, 260, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "10");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c1 == 11){
		bar(235, 190, 260, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(240, 150, "11");
		outtextxy(252, 170, "11");
	}
	
	
	if (c == 11 && c2 == 00){
		bar(260, 490, 285, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "00");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c2 == 01){
		bar(260, 390, 285, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "01");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c2 == 10){
		bar(260, 290, 285, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "10");
		outtextxy(252, 170, "11");
	}
	else if (c == 11 && c2 == 11){
		bar(260, 190, 285, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(265, 150, "11");
		outtextxy(252, 170, "11");
	}
	
	
	////////
	///    //
	//d    //
	///    //   
	///   //
	///////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (d == 00 && d1 == 00){
		bar(285, 565, 310, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "00");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d1 == 01){
		bar(285, 465, 310, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "01");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d1 == 10){
		bar(285, 365, 310, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "10");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d1 == 11){
		bar(285, 265, 310, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "11");
		outtextxy(302, 170, "00");
	}
	
	
	if (d == 00 && d2 == 00){
		bar(310, 565, 335, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "00");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d2 == 01){
		bar(310, 465, 335, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "01");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d2 == 10){
		bar(310, 365, 335, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "10");
		outtextxy(302, 170, "00");
	}
	else if (d == 00 && d2 == 11){
		bar(310, 265, 335, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "11");
		outtextxy(302, 170, "00");
	}
	
	
	if (d == 01 && d1 == 00){
		bar(285, 540, 310, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "00");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d1 == 01){
		bar(285, 440, 310, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "01");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d1 == 10){
		bar(285, 340, 310, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "10");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d1 == 11){
		bar(285, 240, 310, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "11");
		outtextxy(302, 170, "01");
	}
	
	
	if (d == 01 && d2 == 00){
		bar(310, 540, 335, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "00");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d2 == 01){
		bar(310, 440, 335, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "01");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d2 == 10){
		bar(310, 340, 335, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "10");
		outtextxy(302, 170, "01");
	}
	else if (d == 01 && d2 == 11){
		bar(310, 240, 335, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "11");
		outtextxy(302, 170, "01");
	}
	
	
	if (d == 10 && d1 == 00){
		bar(285, 515, 310, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "00");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d1 == 01){
		bar(285, 415, 310, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "01");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d1 == 10){
		bar(285, 315, 310, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "10");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d1 == 11){
		bar(285, 215, 310, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "11");
		outtextxy(302, 170, "10");
	}
	
	
	if (d == 10 && d2 == 00){
		bar(310, 515, 335, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "00");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d2 == 01){
		bar(310, 415, 335, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "01");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d2 == 10){
		bar(310, 315, 335, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "10");
		outtextxy(302, 170, "10");
	}
	else if (d == 10 && d2 == 11){
		bar(310, 215, 335, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "11");
		outtextxy(302, 170, "10");
	}
	
	
	if (d == 11 && d1 == 00){
		bar(285, 490, 310, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "00");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d1 == 01){
		bar(285, 390, 310, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "01");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d1 == 10){
		bar(285, 290, 310, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "10");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d1 == 11){
		bar(285, 190, 310, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(290, 150, "11");
		outtextxy(302, 170, "11");
	}
	
	
	if (d == 11 && d2 == 00){
		bar(310, 490, 335, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "00");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d2 == 01){
		bar(310, 390, 335, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "01");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d2 == 10){
		bar(310, 290, 335, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "10");
		outtextxy(302, 170, "11");
	}
	else if (d == 11 && d2 == 11){
		bar(310, 190, 335, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(315, 150, "11");
		outtextxy(302, 170, "11");
	}
	
	
	////////
	////////
	///    
	///==e=/   
	////////
	///
	////////
	////////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (e == 00 && e1 == 00){
		bar(335, 565, 360, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "00");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e1 == 01){
		bar(335, 465, 360, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "01");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e1 == 10){
		bar(335, 365, 360, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "10");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e1 == 11){
		bar(335, 265, 360, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "11");
		outtextxy(352, 170, "00");
	}
	
	
	if (e == 00 && e2 == 00){
		bar(360, 565, 385, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "00");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e2 == 01){
		bar(360, 465, 385, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "01");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e2 == 10){
		bar(360, 365, 385, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "10");
		outtextxy(352, 170, "00");
	}
	else if (e == 00 && e2 == 11){
		bar(360, 265, 385, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "11");
		outtextxy(352, 170, "00");
	}
	
	
	if (e == 01 && e1 == 00){
		bar(335, 540, 360, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "00");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e1 == 01){
		bar(335, 440, 360, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "01");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e1 == 10){
		bar(335, 340, 360, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "10");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e1 == 11){
		bar(335, 240, 360, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "11");
		outtextxy(352, 170, "01");
	}
	
	
	if (e == 01 && e2 == 00){
		bar(360, 540, 385, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "00");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e2 == 01){
		bar(360, 440, 385, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "01");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e2 == 10){
		bar(360, 340, 385, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "10");
		outtextxy(352, 170, "01");
	}
	else if (e == 01 && e2 == 11){
		bar(360, 240, 385, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "11");
		outtextxy(352, 170, "01");
	}
	
	
	if (e == 10 && e1 == 00){
		bar(335, 515, 360, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "00");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e1 == 01){
		bar(335, 415, 360, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "01");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e1 == 10){
		bar(335, 315, 360, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "10");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e1 == 11){
		bar(335, 215, 360, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "11");
		outtextxy(352, 170, "10");
	}
	
	
	if (e == 10 && e2 == 00){
		bar(360, 515, 385, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "00");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e2 == 01){
		bar(360, 415, 385, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "01");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e2 == 10){
		bar(360, 315, 385, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "10");
		outtextxy(352, 170, "10");
	}
	else if (e == 10 && e2 == 11){
		bar(360, 215, 385, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "11");
		outtextxy(352, 170, "10");
	}
	
	
	if (e == 11 && e1 == 00){
		bar(335, 490, 360, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "00");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e1 == 01){
		bar(335, 390, 360, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "01");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e1 == 10){
		bar(335, 290, 360, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "10");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e1 == 11){
		bar(335, 190, 360, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(340, 150, "11");
		outtextxy(352, 170, "11");
	}
	
	
	if (e == 11 && e2 == 00){
		bar(360, 490, 385, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "00");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e2 == 01){
		bar(360, 390, 385, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "01");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e2 == 10){
		bar(360, 290, 385, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "10");
		outtextxy(352, 170, "11");
	}
	else if (e == 11 && e2 == 11){
		bar(360, 190, 385, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(365, 150, "11");
		outtextxy(352, 170, "11");
	}
	
	
	////////
	////////
	///    
	///==e=/   
	////////
	///
	///
	///
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (f == 00 && f1 == 00){
		bar(385, 565, 410, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "00");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f1 == 01){
		bar(385, 465, 410, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "01");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f1 == 10){
		bar(385, 365, 410, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "10");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f1 == 11){
		bar(385, 265, 410, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "11");
		outtextxy(402, 170, "00");
	}
	
	
	if (f == 00 && f2 == 00){
		bar(410, 565, 435, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "00");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f2 == 01){
		bar(410, 465, 435, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "01");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f2 == 10){
		bar(410, 365, 435, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "10");
		outtextxy(402, 170, "00");
	}
	else if (f == 00 && f2 == 11){
		bar(410, 265, 435, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "11");
		outtextxy(402, 170, "00");
	}
	
	
	if (f == 01 && f1 == 00){
		bar(385, 540, 410, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "00");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f1 == 01){
		bar(385, 440, 410, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "01");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f1 == 10){
		bar(385, 340, 410, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "10");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f1 == 11){
		bar(385, 240, 410, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "11");
		outtextxy(402, 170, "01");
	}
	
	
	if (f == 01 && f2 == 00){
		bar(410, 540, 435, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "00");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f2 == 01){
		bar(410, 440, 435, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "01");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f2 == 10){
		bar(410, 340, 435, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "10");
		outtextxy(402, 170, "01");
	}
	else if (f == 01 && f2 == 11){
		bar(410, 240, 435, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "11");
		outtextxy(402, 170, "01");
	}
	
	
	if (f == 10 && f1 == 00){
		bar(385, 515, 410, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "00");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f1 == 01){
		bar(385, 415, 410, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "01");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f1 == 10){
		bar(385, 315, 410, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "10");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f1 == 11){
		bar(385, 215, 410, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "11");
		outtextxy(402, 170, "10");
	}
	
	
	if (f == 10 && f2 == 00){
		bar(410, 515, 435, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "00");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f2 == 01){
		bar(410, 415, 435, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "01");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f2 == 10){
		bar(410, 315, 435, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "10");
		outtextxy(402, 170, "10");
	}
	else if (f == 10 && f2 == 11){
		bar(410, 215, 435, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "11");
		outtextxy(402, 170, "10");
	}
	
	
	if (f == 11 && f1 == 00){
		bar(385, 490, 410, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "00");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f1 == 01){
		bar(385, 390, 410, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "01");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f1 == 10){
		bar(385, 290, 410, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "10");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f1 == 11){
		bar(385, 190, 410, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(390, 150, "11");
		outtextxy(402, 170, "11");
	}
	
	
	if (f == 11 && f2 == 00){
		bar(410, 490, 435, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "00");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f2 == 01){
		bar(410, 390, 435, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "01");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f2 == 10){
		bar(410, 290, 435, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "10");
		outtextxy(402, 170, "11");
	}
	else if (f == 11 && f2 == 11){
		bar(410, 190, 435, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(415, 150, "11");
		outtextxy(402, 170, "11");
	}
	
	
	/////////////
	/////////////
	///      ///
	///    
	////////==g==
	//////////
	   ////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (g == 00 && g1 == 00){
		bar(435, 565, 460, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "00");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g1 == 01){
		bar(435, 465, 460, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "01");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g1 == 10){
		bar(435, 365, 460, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "10");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g1 == 11){
		bar(435, 265, 460, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "11");
		outtextxy(452, 170, "00");
	}
	
	
	if (g == 00 && g2 == 00){
		bar(460, 565, 485, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "00");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g2 == 01){
		bar(460, 465, 485, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "01");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g2 == 10){
		bar(460, 365, 485, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "10");
		outtextxy(452, 170, "00");
	}
	else if (g == 00 && g2 == 11){
		bar(460, 265, 485, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "11");
		outtextxy(452, 170, "00");
	}
	
	
	if (g == 01 && g1 == 00){
		bar(435, 540, 460, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "00");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g1 == 01){
		bar(435, 440, 460, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "01");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g1 == 10){
		bar(435, 340, 460, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "10");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g1 == 11){
		bar(435, 240, 460, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "11");
		outtextxy(452, 170, "01");
	}
	
	
	if (g == 01 && g2 == 00){
		bar(460, 540, 485, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "00");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g2 == 01){
		bar(460, 440, 485, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "01");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g2 == 10){
		bar(460, 340, 485, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "10");
		outtextxy(452, 170, "01");
	}
	else if (g == 01 && g2 == 11){
		bar(460, 240, 485, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "11");
		outtextxy(452, 170, "01");
	}
	
	
	if (g == 10 && g1 == 00){
		bar(435, 515, 460, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "00");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g1 == 01){
		bar(435, 415, 460, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "01");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g1 == 10){
		bar(435, 315, 460, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "10");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g1 == 11){
		bar(435, 215, 460, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "11");
		outtextxy(452, 170, "10");
	}
	
	
	if (g == 10 && g2 == 00){
		bar(460, 515, 485, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "00");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g2 == 01){
		bar(460, 415, 485, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "01");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g2 == 10){
		bar(460, 315, 485, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "10");
		outtextxy(452, 170, "10");
	}
	else if (g == 10 && g2 == 11){
		bar(460, 215, 485, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "11");
		outtextxy(452, 170, "10");
	}
	
	
	if (g == 11 && g1 == 00){
		bar(435, 490, 460, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "00");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g1 == 01){
		bar(435, 390, 460, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "01");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g1 == 10){
		bar(435, 290, 460, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "10");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g1 == 11){
		bar(435, 190, 460, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(440, 150, "11");
		outtextxy(452, 170, "11");
	}
	
	
	if (g == 11 && g2 == 00){
		bar(460, 490, 485, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "00");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g2 == 01){
		bar(460, 390, 485, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "01");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g2 == 10){
		bar(460, 290, 485, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "10");
		outtextxy(452, 170, "11");
	}
	else if (g == 11 && g2 == 11){
		bar(460, 190, 485, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(465, 150, "11");
		outtextxy(452, 170, "11");
	}
	
	
	///     ///
	///     ///
	///     ///
	///==h==///   
	///////////
	///     ///
	///     ///
	///     ///
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (h == 00 && h1 == 00){
		bar(485, 565, 510, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "00");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h1 == 01){
		bar(485, 465, 510, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "01");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h1 == 10){
		bar(485, 365, 510, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "10");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h1 == 11){
		bar(485, 265, 510, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "11");
		outtextxy(502, 170, "00");
	}
	
	
	if (h == 00 && h2 == 00){
		bar(510, 565, 535, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "00");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h2 == 01){
		bar(510, 465, 535, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "01");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h2 == 10){
		bar(510, 365, 535, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "10");
		outtextxy(502, 170, "00");
	}
	else if (h == 00 && h2 == 11){
		bar(510, 265, 535, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "11");
		outtextxy(502, 170, "00");
	}
	
	
	if (h == 01 && h1 == 00){
		bar(485, 540, 510, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "00");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h1 == 01){
		bar(485, 440, 510, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "01");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h1 == 10){
		bar(485, 340, 510, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "10");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h1 == 11){
		bar(485, 240, 510, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "11");
		outtextxy(502, 170, "01");
	}
	
	
	if (h == 01 && h2 == 00){
		bar(510, 540, 535, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "00");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h2 == 01){
		bar(510, 440, 535, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "01");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h2 == 10){
		bar(510, 340, 535, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "10");
		outtextxy(502, 170, "01");
	}
	else if (h == 01 && h2 == 11){
		bar(510, 240, 535, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "11");
		outtextxy(502, 170, "01");
	}
	
	
	if (h == 10 && h1 == 00){
		bar(485, 515, 510, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "00");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h1 == 01){
		bar(485, 415, 510, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "01");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h1 == 10){
		bar(485, 315, 510, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "10");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h1 == 11){
		bar(485, 215, 510, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "11");
		outtextxy(502, 170, "10");
	}
	
	
	if (h == 10 && h2 == 00){
		bar(510, 515, 535, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "00");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h2 == 01){
		bar(510, 415, 535, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "01");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h2 == 10){
		bar(510, 315, 535, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "10");
		outtextxy(502, 170, "10");
	}
	else if (h == 10 && h2 == 11){
		bar(510, 215, 535, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "11");
		outtextxy(502, 170, "10");
	}
	
	
	if (h == 11 && h1 == 00){
		bar(485, 490, 510, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "00");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h1 == 01){
		bar(485, 390, 510, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "01");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h1 == 10){
		bar(485, 290, 510, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "10");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h1 == 11){
		bar(485, 190, 510, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(490, 150, "11");
		outtextxy(502, 170, "11");
	}
	
	
	if (h == 11 && h2 == 00){
		bar(510, 490, 535, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "00");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h2 == 01){
		bar(510, 390, 535, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "01");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h2 == 10){
		bar(510, 290, 535, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "10");
		outtextxy(502, 170, "11");
	}
	else if (h == 11 && h2 == 11){
		bar(510, 190, 535, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(515, 150, "11");
		outtextxy(502, 170, "11");
	}
	
	
	///////////////
	/////==g==/////
	     ////
	     ////
	     ////
	     ////
	     ////
	//////////////
	//////////////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (i == 00 && i1 == 00){
		bar(535, 565, 560, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "00");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i1 == 01){
		bar(535, 465, 560, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "01");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i1 == 10){
		bar(535, 365, 560, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "10");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i1 == 11){
		bar(535, 265, 560, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "11");
		outtextxy(552, 170, "00");
	}
	
	
	if (i == 00 && i2 == 00){
		bar(560, 565, 585, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "00");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i2 == 01){
		bar(560, 465, 585, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "01");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i2 == 10){
		bar(560, 365, 585, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "10");
		outtextxy(552, 170, "00");
	}
	else if (i == 00 && i2 == 11){
		bar(560, 265, 585, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "11");
		outtextxy(552, 170, "00");
	}
	
	
	if (i == 01 && i1 == 00){
		bar(535, 540, 560, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "00");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i1 == 01){
		bar(535, 440, 560, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "01");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i1 == 10){
		bar(535, 340, 560, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "10");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i1 == 11){
		bar(535, 240, 560, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "11");
		outtextxy(552, 170, "01");
	}
	
	
	if (i == 01 && i2 == 00){
		bar(560, 540, 585, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "00");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i2 == 01){
		bar(560, 440, 585, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "01");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i2 == 10){
		bar(560, 340, 585, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "10");
		outtextxy(552, 170, "01");
	}
	else if (i == 01 && i2 == 11){
		bar(560, 240, 585, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "11");
		outtextxy(552, 170, "01");
	}
	
	
	if (i == 10 && i1 == 00){
		bar(535, 515, 560, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "00");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i1 == 01){
		bar(535, 415, 560, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "01");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i1 == 10){
		bar(535, 315, 560, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "10");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i1 == 11){
		bar(535, 215, 560, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "11");
		outtextxy(552, 170, "10");
	}
	
	
	if (i == 10 && i2 == 00){
		bar(560, 515, 585, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "00");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i2 == 01){
		bar(560, 415, 585, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "01");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i2 == 10){
		bar(560, 315, 585, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "10");
		outtextxy(552, 170, "10");
	}
	else if (i == 10 && i2 == 11){
		bar(560, 215, 585, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "11");
		outtextxy(552, 170, "10");
	}
	
	
	if (i == 11 && i1 == 00){
		bar(535, 490, 560, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "00");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i1 == 01){
		bar(535, 390, 560, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "01");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i1 == 10){
		bar(535, 290, 560, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "10");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i1 == 11){
		bar(535, 190, 560, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(540, 150, "11");
		outtextxy(552, 170, "11");
	}
	
	
	if (i == 11 && i2 == 00){
		bar(560, 490, 585, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "00");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i2 == 01){
		bar(560, 390, 585, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "01");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i2 == 10){
		bar(560, 290, 585, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "10");
		outtextxy(552, 170, "11");
	}
	else if (i == 11 && i2 == 11){
		bar(560, 190, 585, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(565, 150, "11");
		outtextxy(552, 170, "11");
	}
	
	
	     ///////////////
	     /////==j==/////
	          /////
	          /////  
	         /////
	         /////
    ////    /////
	 ///////////
	 /////////
	
	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	
	if (j == 00 && j1 == 00){
		bar(585, 565, 610, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "00");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j1 == 01){
		bar(585, 465, 610, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "01");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j1 == 10){
		bar(585, 365, 610, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "10");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j1 == 11){
		bar(585, 265, 610, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "11");
		outtextxy(602, 170, "00");
	}
	
	
	if (j == 00 && j2 == 00){
		bar(610, 565, 635, 590);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "00");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j2 == 01){
		bar(610, 465, 635, 490);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "01");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j2 == 10){
		bar(610, 365, 635, 390);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "10");
		outtextxy(602, 170, "00");
	}
	else if (j == 00 && j2 == 11){
		bar(610, 265, 635, 290);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "11");
		outtextxy(602, 170, "00");
	}
	
	
	if (j == 01 && j1 == 00){
		bar(585, 540, 610, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "00");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j1 == 01){
		bar(585, 440, 610, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "01");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j1 == 10){
		bar(585, 340, 610, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "10");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j1 == 11){
		bar(585, 240, 610, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "11");
		outtextxy(602, 170, "01");
	}
	
	
	if (j == 01 && j2 == 00){
		bar(610, 540, 635, 565);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "00");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j2 == 01){
		bar(610, 440, 635, 465);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "01");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j2 == 10){
		bar(610, 340, 635, 365);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "10");
		outtextxy(602, 170, "01");
	}
	else if (j == 01 && j2 == 11){
		bar(610, 240, 635, 265);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "11");
		outtextxy(602, 170, "01");
	}
	
	
	if (j == 10 && j1 == 00){
		bar(585, 515, 610, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "00");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j1 == 01){
		bar(585, 415, 610, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "01");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j1 == 10){
		bar(585, 315, 610, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "10");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j1 == 11){
		bar(585, 215, 610, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "11");
		outtextxy(602, 170, "10");
	}
	
	
	if (j == 10 && j2 == 00){
		bar(610, 515, 635, 540);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "00");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j2 == 01){
		bar(610, 415, 635, 440);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "01");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j2 == 10){
		bar(610, 315, 635, 340);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "10");
		outtextxy(602, 170, "10");
	}
	else if (j == 10 && j2 == 11){
		bar(610, 215, 635, 240);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "11");
		outtextxy(602, 170, "10");
	}
	
	
	if (j == 11 && j1 == 00){
		bar(585, 490, 610, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "00");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j1 == 01){
		bar(585, 390, 610, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "01");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j1 == 10){
		bar(585, 290, 610, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "10");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j1 == 11){
		bar(585, 190, 610, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(590, 150, "11");
		outtextxy(602, 170, "11");
	}
	
	
	if (j == 11 && j2 == 00){
		bar(610, 490, 635, 515);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "00");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j2 == 01){
		bar(610, 390, 635, 415);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "01");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j2 == 10){
		bar(610, 290, 635, 315);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "10");
		outtextxy(602, 170, "11");
	}
	else if (j == 11 && j2 == 11){
		bar(610, 190, 635, 215);
		setfillstyle(SOLID_FILL, MAGENTA);
		outtextxy(615, 150, "11");
		outtextxy(602, 170, "11");
	}
	
}


int main(){
	initwindow(1000,1000);
	cout<<"FREQUENCY HOPPING SPREAD SPECTRUM"<<endl;
	
	FHSS f;
	f.fhss_getdata();
	
	f.fhss_graph();
	f.fhss_showdata();
	getch();
	closegraph();
	return 0;
	
}
