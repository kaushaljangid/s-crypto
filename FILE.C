	  #include<conio.h>
	  #include<stdio.h>
	  #include<string.h>
	  #include<graphics.h>
	  #include<dos.h>
	  
	  void main()
	  {
	  char userid[]="kaush",password[]="kaush",pass[15],u[15],ch1,ch2,ch3,cnt;
	  int n=1,a,b,i,j,k,count,ii,i1;
	  int driver=DETECT,mode;
	  char plain_text[100],plain_text1[100],p3[2][50],d[100];
	  int p1=0,p2=0;
	  char part1[100],part2[100],combo[200];
	  char key='1';
	  char *msg,cip[100];
	  const char AtoZ[]="QWERTYUIOPASDFGHJKLZXCVBNM";///adbash subsitution
	  const char atoz[]="qwertyuiopasdfghjklzxcvbnm";
	  clrscr();
	  while(n<=3)
	  {
		clrscr();
		printf("\n\t----------------------------------------------------------------\n");
		printf("\n\t ENTER USERID AND PASSWORD (you have three chance only).");
		printf("\n\t-----------------------------------------------------------------\n");
		gotoxy(10,8);
		printf("---------{S-CRYPTO}--------");
		gotoxy(10,9);
		printf("---------------------------");
		gotoxy(10,13);
		printf("---------------------------");
		gotoxy(10,10);
		printf("USERID:");
		gotoxy(10,12);
		printf("PASSWORD:");
		gotoxy(20,10);
		scanf("%s",&u);
		gotoxy(20,12);
		scanf("%s",&pass);
		a=strcmp(u,userid);
		b=strcmp(pass,password);
		if(a==0&&b==0)
		{
			{ ///////////////////////////////////////////graphic start
				fflush(stdin);
				clrscr();
				initgraph(&driver,&mode,"C:\\TurboC3\\BGI");
				textcolor(BLACK);//background process
				moveto(200,180);//loading process
				outtext("loading,please wait...");
				for(ii=0;ii<600;ii+=15)
				{
					setcolor(3);
					line(20,380,ii+39,380);
					delay(150);//slow down loop delay
				}
				setcolor(RED);
				moveto(210,200);
				outtext("loading completed !");
				delay(1000);
				clrscr();
				///////////////////////////////////////close
				
			}
			gotoxy(10,14);
			do
					{
						fflush(stdin);
						clrscr();
						printf("\n\t---------{S-CRYPTO}--------");
						printf("\n\t----------------------------\n");
						printf("\n\t*****Menu*****\n");
						printf("\n\t 1 encryption message");
						printf("\n\t 2 decryption message");
						printf("\n\t 3 exit\n\t");
						printf("\n\t----------------------------\n");
						printf("\n\t press key between 1 and 3 : ");
						scanf("%d",&ch1);
						switch(ch1)
						{
						case 1:
								{
									do
									{
										fflush(stdin);
										clrscr();
										printf("\n\t---------{S-CRYPTO}------------");
										printf("\n\t-------------------------------\n");
										printf("\n\t*****Menu*****\n");
										printf("\n\t 1 caesar cipher");
										printf("\n\t 2 atbash substitusion cipher");
										printf("\n\t 3 railfence ");
										printf("\n\t 4 XOR encryption");
										printf("\n\t 5 Go Back");
										printf("\n\t 6 exit\n\t");
										printf("\n\t--------------------------------\n");
										printf("\n\t press key between 1 and 6 : ");
										scanf("%d",&ch2);
										switch(ch2)
										{
										 case 1:
											{
													fflush(stdin);
													clrscr();
													i1='\0';
													printf("\n\t-----------------------------------------\n");
													printf("\n\t enter your word:");
													scanf("%s",msg);
													printf("%s",msg);
													printf("\n\t before cipher :%s",msg);
													for(i1=0;i1<strlen(msg);i1++)
													{
														*(msg+i1)=*(msg+i1)+3;
													}

													printf("\n\t After cipher :%s",msg);
													getch();
													clrscr();

											}
												///////////////////////////////////////////////////////////////////////////////
												break;
										 case 2:
											{
												fflush(stdin);
											clrscr();
											printf("\n\t-----------------------------------------\n");
											printf("\n\t enter plan text :");
											scanf("%s",&plain_text);
											for(j=0;j<strlen(plain_text);j++)
											{
												
													i=0;
													while(i<26)
													{
														if(plain_text[j]==AtoZ[i])
														{
															plain_text[j]=AtoZ[25-i];
															break;
														}
														if(plain_text[j]==atoz[i])
														{
															plain_text[j]=atoz[25-i];
															break;
														}
														i++;
													}
											}
											printf("\n\t after : %s ",plain_text);
											getch();

											}
											///////////////////////////////////////////////////////////////////////////////////
												break;

										 case 3:
												{
													fflush(stdin);
													plain_text[100]='\0';
													part1[100]='\0';
													part2[100]='\0';
													clrscr();
													printf("\n\t-----------------------------------------\n");
													printf("\n\tEnter your plain text : ");
													scanf("%s",plain_text);
													i=0;
													
													for(i=0;i<strlen(plain_text);i++)
													{
														if(i%2==0)part1[p1++]=plain_text[i];
														else part2[p2++]=plain_text[i];
													}
													part1[p1]='\0';
													part2[p2]='\0';
													printf("\n\tcipher text is : %s",strcat(part1,part2));
													getch();
												}
												////////////////////////////////////////////////////////////////////////////////
												break;
										 case 4:
												{
													fflush(stdin);
													clrscr();
													printf("\n\t-----------------------------------------\n");
													printf("\n\tEnter your plain text : \t ");
													scanf("%s",&plain_text);
													i=0;
													for(i=0;i<(strlen(plain_text));i++)
													{
														cip[i]=plain_text[i]^key;
													}
													cip[i]='\0';
													printf("\n\t cipher text : %s\t",cip);
													getch();
												}
												///////////////////////////////////////////////////////////////////////////////////
												break;

										 case 5:
												main();
												break;

										 case 6:
												exit(0);
												break;
										 default :
												printf("\n\t U ENTERED WRONG CHOICE ");
												getch();
												clrscr();
										}
										clrscr();
										printf("\n\tWANT TO CONT....?In Encryption/Cipher (y/n)");
										fflush(stdin);							//to clear memory buffer
										scanf("%c",&cnt);
									 }while(cnt=='y'||cnt=='Y');
								}
								/////////////////////////////////////////////////////////////////////////////////////////
								break;
						case 2:
								{
									do
									{
										fflush(stdin);
										clrscr();
										printf("\n\t---------{S-CRYPTO}--------");
										printf("\n\t---------------------------");
										printf("\n\t*****Menu*****\n");
										printf("\n\t 1 caesar cipher");
										printf("\n\t 2 atbash substitusion cipher");
										printf("\n\t 3 railfence ");
										printf("\n\t 4 XOR decryption");
										printf("\n\t 5 Go Back");
										printf("\n\t 6 exit\n\t");
										printf("\n\t press key between 1 and 6");
										scanf("%d",&ch3);
										switch(ch3)
										{
										 case 1:
												{
													fflush(stdin);
													i1=='\0';
													clrscr();
													printf("\n\t-----------------------------------------\n");
													printf("\n\t enter your cipher:");
													scanf("%s",msg);
													printf("\n\t before decipher :%s",msg);
													
													for(i1=0;i1<strlen(msg);i1++)
													{
														*(msg+i1)=*(msg+i1)-3;
													}
													printf("\n\t After decipher :%s",msg);	
													getch();
													clrscr();								

												
												}
												///////////////////////////////////////////////////////////////////////////////
												break;
										 case 2:
												{
													fflush(stdin);
												clrscr();
												printf("\n\t-----------------------------------------\n");
												printf("\n\t enter cipher : ");
												scanf("%s",&plain_text);
												for(j=0;j<strlen(plain_text);j++)
	
												{
													i=0;
													while(i<26)
													{
														if(plain_text[j]==AtoZ[i])
														{
															plain_text[j]=AtoZ[25-i];
															break;				
														}
														if(plain_text[j]==atoz[i])
														{
															plain_text[j]=atoz[25-i];
															break;				
														}
														i++;
													}
												}
												printf("\n\t after : %s \n",plain_text);
												getch();
												}
												//////////////////////////////////////////////////////////////////////////////////
												break;

										 case 3:

												{
													plain_text[100]='\0';
													part1[100]='\0';
													part2[100]='\0';
													fflush(stdin);
													clrscr();
													printf("\n\t-----------------------------------------\n");
													printf("\n\tEnter your cipher text  : ");
													scanf("%s",plain_text);
													count=0;
													i=0;
													for(i=0;i<2;i++)
													{printf("\n");
													 for(j=0;j<((strlen(plain_text))+1)/2;j++)
													 {if(plain_text[count]!='\0')
													  p3[i][j]=plain_text[count++];
													 }
													}
													count=0;
													for(j=0;j<((strlen(plain_text))+1)/2;j++)
													{
													  for(i=0;i<2;i++)
													  { if(p3[i][j]!='\0')
													   d[count++]=p3[i][j];
													  }
													}
													d[count]='\0';
													printf("\n\tDERYPTED TEXT: ");
													for(i=0;i<count;i++)
													printf("%c",d[i]);
													getch();
													
												}
												//////////////////////////////////////////////////////////////////////////////////////
												break;
										 case 4:
												{
													fflush(stdin);
												clrscr();
												printf("\n\t-----------------------------------------\n");
												printf("\n\tEnter your cipher text : \t ");
												scanf("%s",&cip);
												i=0;
												for(i=0;i<strlen(cip);i++)
												{
													cip[i]=cip[i]^key;
												}

												printf("\n\t your text is : %s",cip);
												getch();

												}
												///////////////////////////////////////////////////////////////////////////////////
												break;

										case 5:
												main();
												break;

										 case 6:
												exit(0);
												break;
										 default :
												printf("\n\t-----------------------------------------\n");
												printf("\n\t U ENTERED WRONG CHOICE :P");
												printf("\n\t-----------------------------------------\n");
												getch();
												clrscr();
										}
										clrscr();
										printf("\n\t------------------------------------------------\n");
										printf("\n\tWANT TO CONT....? In Decryption/Decipher (y/n)");
										fflush(stdin);							//to clear memory buffer
										scanf("%c",&cnt);
									}while(cnt=='y'||cnt=='Y');
								}
								///////////////////////////////////////////////////////////////////////////////////

								break;
						case 3:
								exit(0);
								break;
						default :
								printf("\n\t-----------------------------------\n");
								printf("\n\t U ENTERED WRONG CHOICE ");
								getch();
								clrscr();
						}
						printf("\n\t------------------------------------------------\n");
						printf("\n\tWANT TO CONT....? In Main Menu(y/n)");
						fflush(stdin);							//to clear memory buffer
						scanf("%c",&cnt);
					}
					while(cnt=='y'||cnt=='Y');
			getch();
			break;
		}
		else
		{
			gotoxy(10,14);{
			printf("\n\t-------------------------------------\n");
			printf("\n\tfail now you have %d chance left",3-n);
			printf("\n\t-------------------------------------\n");
			}
		}
		getch();
		n++;
		if(n==4)
		{
			clrscr();
			gotoxy(10,14);{
			printf("\n\t------------------------------------------------\n");
			printf("\n\tyou cant login");
			printf("\n\t------------------------------------------------\n");
			}
		}

	 closegraph();
	 getch();
	 }
	 }
	 
	 /////////////////////////////////////////////////////////////////////////////////////////
