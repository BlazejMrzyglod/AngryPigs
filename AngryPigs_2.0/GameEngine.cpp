#include "GameEngine.h"

GameEngine::GameEngine()
{
	GameOver = false;
	LevelOver = false;
	currentLevel = 1;
}

void GameEngine::RunGame()
{
	
	InConsoleDisplayEngine display_engine;
	displayEngine = &display_engine;
	RedBird redBird;
	Friendly* bird_ptr;
	bird_ptr = &redBird;
	friendlies.push_back(bird_ptr);

	YellowBird yellowBird;
	bird_ptr = &yellowBird;
	friendlies.push_back(bird_ptr);

	BlackBird blackBird;
	bird_ptr = &blackBird;
	friendlies.push_back(bird_ptr);

	Level level1("1", "Pierwszy", true, 1, 1, 1, 1);
	levels.push_back(level1);

	Level level2("2", "Drugi", true, 2, 3, 2, 1);
	levels.push_back(level2);

	Level level3("3", "Trzeci", true, 3, 5, 3, 2);
	levels.push_back(level3);

	Level level4("4", "Czwarty", true, 4, 5, 5, 2);
	levels.push_back(level4);

	Level level5("5", "Piaty", true, 5, 6, 5, 3);
	levels.push_back(level5);

	Level level6("6", "Szosty", true, 6, 5, 5, 5);
	levels.push_back(level6);

	Level level7("7", "Siodmy", true, 7, 8, 5, 5);
	levels.push_back(level7);

	Level level8("8", "Osmy", true, 8, 9, 6, 6);
	levels.push_back(level8);

	Level level9("9", "Dziewiaty", true, 9, 9, 7, 7);
	levels.push_back(level9);

	Level level10("10", "Dziesiaty", true, 10, 10, 10, 10);
	levels.push_back(level10);


	
	
	
	int decision;
	int ptak;
	int swinia;
	char czar;
	int cel;
	int upgrade;
	

	vector <Friendly*>::iterator it_friendlies = friendlies.begin();

	ArmorSet BasicArmor;
	Shield BasicShield;
	Sword BasicSword;
	Axe BasicAxe;
	Knife BasicKnife;
	Robe BasicRobe;
	Staff BasicStaff;
	for (; it_friendlies != friendlies.end(); it_friendlies++)
	{
		(*it_friendlies)->AddArmor(BasicArmor);
		(*it_friendlies)->AddWeapon(BasicSword);
		(*it_friendlies)->AddMagicItem(BasicStaff);
	}

	it_friendlies = friendlies.begin();


	vector <Level>::iterator it_levels = levels.begin();
	while(GameOver!=true)
	{
		decision = displayEngine->DisplayMap(currentLevel);
		
		
		if (decision == 1)
		{
			
			while (LevelOver != true)
			{
				displayEngine->DisplayLevel((*it_levels), friendlies);
				cout << "Wybierz postac atakujaca:" << endl;
				cout << "1. Gorny ptak" << endl;
				cout << "2. Srodkowy ptak" << endl;
				cout << "3. Dolny ptak" << endl;
				cin >> ptak;
				if (ptak == 1 || ptak == 2 || ptak == 3)
				{
					switch (ptak)
					{
					case 1:
						if (friendlies[0]->GetHealth() <= 0)
						{
							cout << "Ten ptak nie ¿yje!";
							break;
						}
						else
						{
							cout << "Wybierz cel: " << endl;
							cout << "1. Mala swinia" << endl;
							cout << "2. Srednia swinia" << endl;
							cout << "3. Duza swinia" << endl;
							cin >> swinia;
							if (swinia == 1 || swinia == 2 || swinia == 3)
							{
								switch (swinia)
								{
								case 1:
									if (it_levels->GetSmall().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[0]->Cast(*it_levels->GetSmall().begin());
										}
										friendlies[0]->Attack(*it_levels->GetSmall().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 2:
									if (it_levels->GetMedium().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[0]->Cast(*it_levels->GetMedium().begin());
										}
										friendlies[0]->Attack(*it_levels->GetMedium().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 3:
									if (it_levels->GetBig().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[0]->Cast(*it_levels->GetBig().begin());
										}
										friendlies[0]->Attack(*it_levels->GetBig().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}

								default:
									break;
								}
							}
							else
								cout << "Nie ma takiej swini";
							break;
						}

					case 2:
						if (friendlies[1]->GetHealth() <= 0)
						{
							cout << "Ten ptak nie ¿yje!";
							break;
						}
						else
						{
							cout << "Wybierz cel: " << endl;
							cout << "1. Mala swinia" << endl;
							cout << "2. Srednia swinia" << endl;
							cout << "3. Duza swinia" << endl;
							cin >> swinia;
							if (swinia == 1 || swinia == 2 || swinia == 3)
							{
								switch (swinia)
								{
								case 1:
									if (it_levels->GetSmall().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[1]->Cast(*it_levels->GetSmall().begin());
										}
										friendlies[1]->Attack(*it_levels->GetSmall().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 2:
									if (it_levels->GetMedium().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[1]->Cast(*it_levels->GetMedium().begin());
										}
										friendlies[1]->Attack(*it_levels->GetMedium().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 3:
									if (it_levels->GetBig().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[1]->Cast(*it_levels->GetBig().begin());
										}
										friendlies[1]->Attack(*it_levels->GetBig().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}

								default:
									break;
								}
							}
							else
								cout << "Nie ma takiej swini";
							break;
						}
					case 3:
						if (friendlies[0]->GetHealth() <= 0)
						{
							cout << "Ten ptak nie ¿yje!";
							break;
						}
						else
						{
							cout << "Wybierz cel: " << endl;
							cout << "1. Mala swinia" << endl;
							cout << "2. Srednia swinia" << endl;
							cout << "3. Duza swinia" << endl;
							cin >> swinia;
							if (swinia == 1 || swinia == 2 || swinia == 3)
							{
								switch (swinia)
								{
								case 1:
									if (it_levels->GetSmall().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[2]->Cast(*it_levels->GetSmall().begin());
										}
										friendlies[2]->Attack(*it_levels->GetSmall().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 2:
									if (it_levels->GetMedium().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[2]->Cast(*it_levels->GetMedium().begin());
										}
										friendlies[2]->Attack(*it_levels->GetMedium().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}
								case 3:
									if (it_levels->GetBig().size() > 0)
									{
										cout << "Rzucic czar?(T/N)";
										cin >> czar;
										if (czar == 'T' || czar == 't')
										{
											friendlies[2]->Cast(*it_levels->GetBig().begin());
										}
										friendlies[2]->Attack(*it_levels->GetBig().begin());
										break;
									}
									else
									{
										cout << "Nie ma juz wiecej tych swin";
										break;
									}

								default:
									break;
								}
							}
							else
								cout << "Nie ma takiej swini";
							break;
						}
					default:
						break;
					}

				}


				else
					cout << "Nie ma takiego ptaka";


				srand(time(NULL));
				cel = (rand() % 3);
				friendlies[cel]->TakeDmg(10);
				if (it_levels->GetSmall().size() != 0 && it_levels->GetSmall().begin()->GetHealth() <= 0)
				{
					it_levels->GetSmall().begin()->SetHealth(10);
					it_levels->GetSmall().pop_back();
					
				}

				if (it_levels->GetMedium().size() != 0 && it_levels->GetMedium().begin()->GetHealth() <= 0)
				{
					it_levels->GetMedium().begin()->SetHealth(20);
					it_levels->GetMedium().begin()->SetArmor(10);

					it_levels->GetMedium().pop_back();
				}

				if (it_levels->GetBig().size() != 0 && it_levels->GetBig().begin()->GetHealth() <= 0)
				{
					it_levels->GetBig().begin()->SetHealth(40);
					it_levels->GetBig().begin()->SetArmor(20);
					it_levels->GetBig().pop_back();
				}

				
				

				if (it_levels->GetSmall().size() == 0 && it_levels->GetMedium().size() == 0 && it_levels->GetBig().size() == 0)
					LevelOver = true;

				if (yellowBird.GetHealth() <= 0 && redBird.GetHealth() <= 0 && blackBird.GetHealth() <= 0)
					LevelOver = true;
			}
			if (yellowBird.GetHealth() <= 0 && redBird.GetHealth() <= 0 && blackBird.GetHealth() <= 0)
				GameOver = true;
			
			for (; it_friendlies != friendlies.end(); it_friendlies++)
			{
				(*it_friendlies)->LevelUp();
				srand(time(NULL));
				upgrade = (rand() % 3)+1;

				switch (upgrade)
				{
				case 1:
					srand(time(NULL));
					upgrade = (rand() % 2)+1;
					switch (upgrade)
					{
					case 1:

						(*it_friendlies)->AddArmor(BasicArmor);
						break;
					case 2:

						(*it_friendlies)->AddArmor(BasicShield);
						break;
					default:
						break;

					}break;

				case 2:
					srand(time(NULL));
					upgrade = (rand() % 3)+1;
					switch (upgrade)
					{
					case 1:

						(*it_friendlies)->AddWeapon(BasicSword);
						break;
					case 2:

						(*it_friendlies)->AddWeapon(BasicAxe);
						break;
					case 3:
						(*it_friendlies)->AddWeapon(BasicKnife);
						break;
					default:
						break;
					}

					break;
				case 3:
					srand(time(NULL));
					upgrade = (rand() % 3);
					switch (upgrade)
					{
					case 1:

						(*it_friendlies)->AddMagicItem(BasicStaff);
						break;
					case 2:

						(*it_friendlies)->AddMagicItem(BasicRobe);
						break;
					default:
						break;

					}break;

				}
			}


			it_levels++;
			currentLevel++;
			it_friendlies = friendlies.begin();
			LevelOver = false;

		}
		else if (decision == 2)
			GameOver = true;
		if (currentLevel == 11)
			GameOver = true;
	}
	
}

vector<Friendly*> GameEngine::GetFriendlies()
{
	return friendlies;
}
