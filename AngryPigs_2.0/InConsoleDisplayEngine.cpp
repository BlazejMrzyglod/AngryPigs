#include "InConsoleDisplayEngine.h"



int InConsoleDisplayEngine::DisplayMap(int current)
{
	cout << "1  2  3  4  5  6  7  8  9  10" << endl;

	switch (current)
	{
	case 1:
		cout << "^" << endl;
		cout << "|" << endl;
		break;
	case 2:
		cout << "   ^" << endl;
		cout << "   |" << endl;
		break;
	case 3:
		cout << "      ^" << endl;
		cout << "      |" << endl;
		break;
	case 4:
		cout << "         ^" << endl;
		cout << "         |" << endl;
		break;
	case 5:
		cout << "            ^" << endl;
		cout << "            |" << endl;
		break;
	case 6:
		cout << "               ^" << endl;
		cout << "               |" << endl;
		break;
	case 7:
		cout << "                  ^" << endl;
		cout << "                  |" << endl;
		break;
	case 8:
		cout << "                     ^" << endl;
		cout << "                     |" << endl;
		break;
	case 9:
		cout << "                        ^" << endl;
		cout << "                        |" << endl;
		break;
	case 10:
		cout << "                            ^" << endl;
		cout << "                            |" << endl;
		break;
	default: break;
	}
		int decision;
		cout << "1. Rozpocznij nastepny poziom" << endl;
		cout << "2. Zakoncz rozgrywke" << endl;
		cin >> decision;
		
		if (decision == 1 || decision == 2)
		{
			system("CLS");
			return decision;
		}
			else
			{
				system("CLS");
				cout << "Nie ma takiej opcji" << endl;
			}
				
			
			
		
	
}


void InConsoleDisplayEngine::DisplayLevel(Level level, vector<Friendly*> friendlies)
{ 
	cout<<                     
                  
          
      
  
  
    
         

"	 (&&/&                                                                                                       " <<endl<<      
"            @&&&&                                                                                       @%      " << endl <<
"            @,,, ,&                                                                               (*/*,..,.,    " << endl <<
"          (,,,,,,,.,&                                                                          ***********,,.   " << endl <<
"    & *& ,,,##,,,,,,,,&                                                                      .*/(*(,,,,,,** *,  " << endl <<
"     &&&,,,,,#  ,*,(   (                                                                     &/   ,,&%/&,(  (*, " << endl <<
"      %,,,,,,,,.%%#&/*,#,                                                                     ******(*/******&  " << endl <<
"     #*,,,,,,,.        ,,#                                                                      */********&     " << "\n\n";   

cout << "          Zdrowie: " << friendlies[0]->GetHealth() <<"                                                                        "<<"Pozostala liczba: "<< level.GetSmall().size() <<endl;
cout << "          Armor: " << friendlies[0]->GetArmor() << "                                                                          " << "Zdrowie: "; if (level.GetSmall().size() != 0) cout << level.GetSmallHealth(); else cout << "0";cout << endl;
cout << "          Moc Ataku: " << friendlies[0]->GetAttackStrenght() <<"                                                                      "<<"Armor: "; if(level.GetSmall().size() != 0)  cout<<level.GetSmall().begin()->GetArmor(); else cout<< "0"; cout << endl;
cout << "          Mana: " << friendlies[0]->GetMana() << endl;
cout << "          Poziom: " << friendlies[0]->GetLevel() << "\n\n\n\n";

cout <<
"           ##(%.                                                                                      ***%, @"            << endl <<
"        %####%##(%                                                                               (*//#.,,,.....&"         << endl <<
"         %###########%                                                                           .*************,,,.%"     << endl <<
"       @#######@%######&*                                                                       ******************%%.@"   << endl <<
"    ( &%#######% &@@@@*###                                                                    .*//((**/,,,,,,,.**/  (*,"  << endl <<
"  &@@@%#######%%&@/,,&%%##                                                                    &*  @  ,,,&&/,&&,,,    /*&" << endl <<
"   . %%####%###%,,,,,,&#&                                                                    @*/, .//,,,*,,,,,,*(//(**% " << endl <<
"       %%###,,,,,,#&,,,#&                                                                      @********/(**(*********&"  << endl <<
"         &*,,,,,,,,,#@                                                                           &********//********&"    << endl <<
"                                                                                                     .@@%(//(%@%"         << "\n\n";

cout << "          Zdrowie: " << friendlies[1]->GetHealth() << "                                                                         " << "Pozostala liczba: " << level.GetMedium().size() << endl;
cout << "          Armor: " << friendlies[1]->GetArmor() << "                                                                           " << "Zdrowie: "; if (level.GetMedium().size() != 0) cout << level.GetMedium().begin()->GetHealth(); else cout << "0";cout << endl;
cout << "          Moc Ataku: " << friendlies[1]->GetAttackStrenght() << "                                                                       " << "Armor: "; if (level.GetMedium().size() != 0)  cout << level.GetMedium().begin()->GetArmor(); else cout << "0"; cout << endl;
cout << "          Mana: " << friendlies[1]->GetMana() << endl;
cout << "          Poziom: " << friendlies[1]->GetLevel() << "\n\n\n\n";
 
cout<< "                                                                                                       .@@%"               <<endl<<
"                                                                                                  #**@       .*/%./"              <<endl<<
"             .,,@                                                                                (**#//*.,,....,..,,%"            << endl << 
"             %@@                                                                                  %**************,...,.,%"        << endl <<
"             *@                                                                                 %**********************,.,(."     << endl <<
"       @@@@@#@@@@@ &  .                                                                       .**#%%*********************/%,%"    << endl <<
"     @@@@@@@%@ **%@# @                                                                       .***/((/**(,,,,,,,,,,.,(***  /**,,"  << endl <<
"    @@@@@@@@&%%%%@,,,,/@*                                                                    @**  (@  /,,,*&&,,,&&,,.*      /*&"  << endl <<
"   @@@@@@@@@@@@@@@%@@@@@@@/.                                                                 &*/      (,,,&&&%,/&&,,,((    (**#," << endl <<
"   @@@@@@@@@@@@@@@******#                                                                    (**//////*/,,,,,,,,,,,*/**///****&"  << endl <<
"    @@@@@@@@%%%%%%@@@@@%                                                                      #***********((/**/(************&"   << endl <<
"     @@@@%%%%%%%%%%%%@#                                                                         &**********//////**********&"     << endl <<
"         @@%%%%%%%@%                                                                               *@/*****************&#"        << endl<<
"                                                                                                          *(%%%#(,"<<"\n\n";
cout << "          Zdrowie: " << friendlies[2]->GetHealth() << "                                                                         " << "Pozostala liczba: " << level.GetBig().size() << endl;
cout << "          Armor: " << friendlies[2]->GetArmor() << "                                                                           " << "Zdrowie: "; if (level.GetBig().size() != 0) cout << level.GetBig().begin()->GetHealth(); else cout << "0";cout << endl;
cout << "          Moc Ataku: " << friendlies[2]->GetAttackStrenght() << "                                                                        " << "Armor: "; if (level.GetBig().size() != 0)  cout << level.GetBig().begin()->GetArmor(); else cout << "0"; cout << endl;
cout << "          Mana: " << friendlies[2]->GetMana() << endl;
cout << "          Poziom: " << friendlies[2]->GetLevel() << "\n\n\n\n";

	
}


