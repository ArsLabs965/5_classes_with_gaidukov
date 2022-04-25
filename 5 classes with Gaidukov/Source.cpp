#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
using namespace sf;
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	bool debug = 0;

	RenderWindow window(VideoMode(1000, 600), "5 classes with Gaidukov");
	window.setFramerateLimit(30);
	window.clear();
	Texture presents_t;
	presents_t.loadFromFile("img/presents.png");
	Sprite presents;
	presents.setTexture(presents_t);
	
	window.draw(presents);
	window.display();

	SoundBuffer main_b;
	main_b.loadFromFile("img/main.wav");
	Sound main;
	main.setBuffer(main_b);

	main.play();
	Clock loadtimer;
	Clock mainmusic;

	Font font;
	font.loadFromFile("img/font.ttf");
	Text text;
	text.setFont(font);
	
	Texture logo_t;
	logo_t.loadFromFile("img/logo.png");
	Sprite logo;
	logo.setTexture(logo_t);

	Texture button_t;
	button_t.loadFromFile("img/playbutton.png");
	Sprite button;
	button.setTexture(button_t);

	Texture gitar1_t;
	gitar1_t.loadFromFile("img/gitar1.png");
	Sprite gitar1;
	gitar1.setTexture(gitar1_t);

	Texture gitar2_t;
	gitar2_t.loadFromFile("img/gitar2.png");
	Sprite gitar2;
	gitar2.setTexture(gitar2_t);

	Texture gitar3_t;
	gitar3_t.loadFromFile("img/gitar3.png");
	Sprite gitar3;
	gitar3.setTexture(gitar3_t);

	Texture gai1_t;
	gai1_t.loadFromFile("img/gai1.png");
	Sprite gai1;
	gai1.setTexture(gai1_t);

	Texture gai2_t;
	gai2_t.loadFromFile("img/gai2.png");
	Sprite gai2;
	gai2.setTexture(gai2_t);

	Texture gai3_t;
	gai3_t.loadFromFile("img/gai3.png");
	Sprite gai3;
	gai3.setTexture(gai3_t);

	Texture bug_t;
	bug_t.loadFromFile("img/bug.png");
	Sprite bug;
	bug.setTexture(bug_t);

	Texture book_t;
	book_t.loadFromFile("img/book.png");
	Sprite book;
	book.setTexture(book_t);

	Texture ohrana1_t;
	ohrana1_t.loadFromFile("img/ohrana1.png");
	Sprite ohrana1;
	ohrana1.setTexture(ohrana1_t);

	Texture ohrana2_t;
	ohrana2_t.loadFromFile("img/ohrana2.png");
	Sprite ohrana2;
	ohrana2.setTexture(ohrana2_t);

	Texture ohrana3_t;
	ohrana3_t.loadFromFile("img/ohrana3.png");
	Sprite ohrana3;
	ohrana3.setTexture(ohrana3_t);

	Texture terminal_t;
	terminal_t.loadFromFile("img/terminal.png");
	Sprite terminal;
	terminal.setTexture(terminal_t);

	Texture map_t;
	map_t.loadFromFile("img/map.png");
	Sprite map;
	map.setTexture(map_t);

	SoundBuffer book_sound_b;
	book_sound_b.loadFromFile("img/book.wav");
	Sound book_sound;
	book_sound.setBuffer(book_sound_b);

	SoundBuffer office_b;
	office_b.loadFromFile("img/office.wav");
	Sound office;
	office.setBuffer(office_b);

	SoundBuffer camera_b;
	camera_b.loadFromFile("img/camera.wav");
	Sound camera;
	camera.setBuffer(camera_b);

	SoundBuffer pad_b;
	pad_b.loadFromFile("img/pad.wav");
	Sound pad;
	pad.setBuffer(pad_b);

	SoundBuffer noenergy_b;
	noenergy_b.loadFromFile("img/noenergy.wav");
	Sound noenergy;
	noenergy.setBuffer(noenergy_b);

	SoundBuffer clickcamera_b;
	clickcamera_b.loadFromFile("img/cameraclick.wav");
	Sound clickcamera;
	clickcamera.setBuffer(clickcamera_b);

	Texture cam1_t;
	cam1_t.loadFromFile("img/cam1.png");
	Sprite cam1;
	cam1.setTexture(cam1_t);

	Texture cam2_t;
	cam2_t.loadFromFile("img/cam2.png");
	Sprite cam2;
	cam2.setTexture(cam2_t);

	Texture cam3_t;
	cam3_t.loadFromFile("img/cam3.png");
	Sprite cam3;
	cam3.setTexture(cam3_t);

	Texture cam4_t;
	cam4_t.loadFromFile("img/cam4.png");
	Sprite cam4;
	cam4.setTexture(cam4_t);

	Texture cam5_t;
	cam5_t.loadFromFile("img/cam5.png");
	Sprite cam5;
	cam5.setTexture(cam5_t);

	Texture cam6_t;
	cam6_t.loadFromFile("img/cam6.png");
	Sprite cam6;
	cam6.setTexture(cam6_t);

	Texture cam7_t;
	cam7_t.loadFromFile("img/cam7.png");
	Sprite cam7;
	cam7.setTexture(cam7_t);

	Texture cam8_t;
	cam8_t.loadFromFile("img/cam8.png");
	Sprite cam8;
	cam8.setTexture(cam8_t);

	Texture cam9_t;
	cam9_t.loadFromFile("img/cam9.png");
	Sprite cam9;
	cam9.setTexture(cam9_t);

	Texture cam10_t;
	cam10_t.loadFromFile("img/cam10.png");
	Sprite cam10;
	cam10.setTexture(cam10_t);

	Texture cam11_t;
	cam11_t.loadFromFile("img/cam11.png");
	Sprite cam11;
	cam11.setTexture(cam11_t);

	Texture cam12_t;
	cam12_t.loadFromFile("img/cam12.png");
	Sprite cam12;
	cam12.setTexture(cam12_t);

	Texture cam13_t;
	cam13_t.loadFromFile("img/cam13.png");
	Sprite cam13;
	cam13.setTexture(cam13_t);

	Texture gaidukov_t;
	gaidukov_t.loadFromFile("img/gaidukov.png");
	Sprite gaidukov;
	gaidukov.setTexture(gaidukov_t);

	Texture anton_t;
	anton_t.loadFromFile("img/anton.png");
	Sprite anton;
	anton.setTexture(anton_t);

	Texture letter_t;
	letter_t.loadFromFile("img/letter.png");
	Sprite letter;
	letter.setTexture(letter_t);

	Texture olga_p_t;
	olga_p_t.loadFromFile("img/olga.png");
	Sprite olga_p;
	olga_p.setTexture(olga_p_t);

	Texture havebook_p_t;
	havebook_p_t.loadFromFile("img/havebook.png");
	Sprite havebook_p;
	havebook_p.setTexture(havebook_p_t);

	SoundBuffer olga_sound_b;
	olga_sound_b.loadFromFile("img/olga.wav");
	Sound olga_sound;
	olga_sound.setBuffer(olga_sound_b);

	SoundBuffer ventilation_b;
	ventilation_b.loadFromFile("img/ventilation.wav");
	Sound ventilation;
	ventilation.setBuffer(ventilation_b);

	SoundBuffer antonscreams_s_b;
	antonscreams_s_b.loadFromFile("img/antonscreams.wav");
	Sound antonscreams_s;
	antonscreams_s.setBuffer(antonscreams_s_b);

	SoundBuffer gaidukovscreams_s_b;
	gaidukovscreams_s_b.loadFromFile("img/gaidukovscreams.wav");
	Sound gaidukovscreams_s;
	gaidukovscreams_s.setBuffer(gaidukovscreams_s_b);

	SoundBuffer callanton_b;
	callanton_b.loadFromFile("img/callanton.wav");
	Sound callanton;
	callanton.setBuffer(callanton_b);

	SoundBuffer trevoga_b;
	trevoga_b.loadFromFile("img/trevoga.wav");
	Sound trevoga;
	trevoga.setBuffer(trevoga_b);

	SoundBuffer callgaidukov_b;
	callgaidukov_b.loadFromFile("img/callgaidukov.wav");
	Sound callgaidukov;
	callgaidukov.setBuffer(callgaidukov_b);

	SoundBuffer noEnergy_b;
	noEnergy_b.loadFromFile("img/noenergy.wav");
	Sound noEnergy;
	noEnergy.setBuffer(noEnergy_b);

	Texture error_t;
	error_t.loadFromFile("img/error.png");
	Sprite error;
	error.setTexture(error_t);

	Texture calling_t;
	calling_t.loadFromFile("img/calling.png");
	Sprite calling;
	calling.setTexture(calling_t);

	Texture antonscreams_t;
	antonscreams_t.loadFromFile("img/antonscreams.png");
	Sprite antonscreams;
	antonscreams.setTexture(antonscreams_t);

	Texture gaidukovscreams_t;
	gaidukovscreams_t.loadFromFile("img/gaidukovscreams.png");
	Sprite gaidukovscreams;
	gaidukovscreams.setTexture(gaidukovscreams_t);

	Texture call_t;
	call_t.loadFromFile("img/call.png");
	Sprite call;
	call.setTexture(call_t);

	Texture restarting_t;
	restarting_t.loadFromFile("img/restarting.png");
	Sprite restarting;
	restarting.setTexture(restarting_t);

	ofstream fout;
	ifstream fin;
	Clock gitar;
	Clock menuscreams;
	Clock incamera;
	
	int gitarpose = 0;
	int classes = 1;
	int massage = 0;
	fin.open("score.txt");
	fin >> classes;
	fin.close();
	
	long timego[5];
	timego[0] = 20000;
	timego[1] = 10000;
	timego[2] = 8000;
	timego[3] = 5000;
	timego[4] = 3000;
	long timeincamera[5];
	timeincamera[0] = 99999999999;
	timeincamera[1] = 120000;
	timeincamera[2] = 80000;
	timeincamera[3] = 35000;
	timeincamera[4] = 10000;
	long timesofbook[5];
	timesofbook[0] = 512000;
	timesofbook[1] = 100000;
	timesofbook[2] = 100000;
	timesofbook[3] = 100000;
	timesofbook[4] = 50000;

	while (window.isOpen())
	{
		Vector2i pixelPos = Mouse::getPosition(window);//забираем коорд курсора
		Vector2f pos = window.mapPixelToCoords(pixelPos);//переводим их в игровые (уходим от коорд окна)
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		if (mainmusic.getElapsedTime().asSeconds() > 241) {
			main.play();
		}
		
		int t_m = 26;
		if (debug) {
			t_m = 0;
		}
		if (loadtimer.getElapsedTime().asSeconds() > t_m) {
			window.clear();
			window.draw(logo);
			window.draw(button);
			if (menuscreams.getElapsedTime().asMilliseconds() > 20000) {

				menuscreams.restart();
			}
			if (menuscreams.getElapsedTime().asMilliseconds() < 10000) {
				window.draw(gai1);
			}
			else if (menuscreams.getElapsedTime().asMilliseconds() < 19900) {
				window.draw(gai2);
			}
			else{
				window.draw(gai3);
			}
			if (gitar.getElapsedTime().asMilliseconds() > 500) {
				gitarpose++;
				if (gitarpose == 4) {
					gitarpose = 0;
				}
				gitar.restart();
			}
			if (gitarpose == 0) {
				window.draw(gitar1);
			}
			if (gitarpose == 1) {
				window.draw(gitar2);
			}
			if (gitarpose == 2) {
				window.draw(gitar1);
			}
			if (gitarpose == 3) {
				window.draw(gitar3);
			}
			if (massage == 1) {
				text.setString("Great! Next class!");
				text.setPosition(150, 400);
				text.setCharacterSize(30);
				text.setFillColor(Color::Green);
				window.draw(text);
			}
			if (massage == 2) {
				text.setString("GAME OVER");
				text.setPosition(150, 400);
				text.setCharacterSize(30);
				text.setFillColor(Color::Red);
				window.draw(text);
			}
			if (classes == 1) {
				text.setString("First class");
			}
			if (classes == 2) {
				text.setString("Second class");
			}
			if (classes == 3) {
				text.setString("Third class");
			}
			if (classes == 4) {
				text.setString("Fourth class");
			}
			if (classes == 5) {
				text.setString("Fifth class");
			}
			
			text.setPosition(300, 250);
			text.setCharacterSize(17);
			text.setFillColor(Color::White);
			window.draw(text);
			if (rand() % 100 == 0) {
				window.draw(bug);
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				if (pos.x > 151 && pos.y > 280 && pos.x < 375 && pos.y < 352) {
					main.stop();
					int screen = 0;
					bool cam = 0;
					bool crack = 0;
					bool havebook = 0;
					bool olgascream = 0;
					bool antonscream = 0;
					bool gaidukovscream = 0;
					bool givetake = 0;
					bool tre = 1;
					
					int gaidukov_r = 13; //13
					int anton_r = 12; //12

					bool sys_audio = 0;
					bool sys_video = 0;
					bool sys_ventilation = 0;

					int make = 0;

					long nowtimes = timesofbook[classes - 1];

					Clock t_book;
					Clock office_sound;
					Clock cam_sound;
					Clock check;
					Clock olga;
					Clock olgais;
					Clock process;
					Clock haveb;
					Clock making;
					Clock move;
					Clock venttimer;
					Clock calls;
					Clock keepbook;
					office.play();
					if(classes == 1)
					book_sound.play();
					while (window.isOpen()) {
						Vector2i pixelPos = Mouse::getPosition(window);//забираем коорд курсора
						Vector2f pos = window.mapPixelToCoords(pixelPos);//переводим их в игровые (уходим от коорд окна)
						Event event;
						while (window.pollEvent(event))
						{
							if (event.type == Event::Closed)
								window.close();
						}
						window.clear();
						if (havebook == 0) {
							haveb.restart();
						}
						else if(haveb.getElapsedTime().asSeconds() > 40){
							screen = 0;
							check.restart();
							pad.play();
							if(givetake == 0)
							office.play();
							camera.stop();
							cam = 0;
							olgascream = 1;
							nowtimes -= keepbook.getElapsedTime().asMilliseconds();
							olgais.restart();
							olga_sound.play();
						}

						if (sys_ventilation == 0) {
							venttimer.restart();
						}
						

						if (move.getElapsedTime().asMilliseconds() > timego[classes - 1]) {
							move.restart();
							if (rand() % 10 == 0) {
								sys_audio = 1;
							}
							if (rand() % 15 == 0) {
								sys_video = 1;
							}
							if (anton_r == 12 || anton_r == 13) {
								int ttx = rand() % 3;
								if (ttx != 0) {
									anton_r = 11;
								}
								
							}else
							if (anton_r == 11) {
								int ttx = rand() % 6;
								if (ttx == 0) {
									anton_r = 11;
								}else
								if (ttx == 1) {
									anton_r = 13;
								}else
								if (ttx == 2) {
									anton_r = 12;
								}else
								if (ttx > 2) {
									anton_r = 10;
								}
								

							}
							else if (anton_r == 10) {
								int ttx = rand() % 8;
								if (ttx == 0) {
									anton_r = 10;
								}else
								if (ttx == 1) {
									anton_r = 9;
								}else
								if (ttx == 2) {
									anton_r = 9;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 3) {
									anton_r = 8;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 4) {
									anton_r = 3;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 5) {
									anton_r = 11;

								}else
								if (ttx > 5) {
									anton_r = 6;
								}
								

							}else if(anton_r == 9) {
								int ttx = rand() % 10;
								if (ttx == 0) {
									anton_r = 9;
								}else
								if (ttx == 1) {
									anton_r = 10;
								}else
								if (ttx == 2) {
									anton_r = 10;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 3) {
									anton_r = 8;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 4) {
									anton_r = 3;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx > 4) {
									anton_r = 6;
								}
								

							}else if(anton_r == 8) {
								int ttx = rand() % 6;
								if (ttx == 0) {
									anton_r = 8;
								}else
								if (ttx == 1) {
									anton_r = 9;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx == 2) {
									anton_r = 3;
									ventilation.play();
									sys_ventilation = 1;
								}else
									if (ttx == 3) {
									anton_r = 10;
									ventilation.play();
									sys_ventilation = 1;
								}else
								if (ttx > 3) {
									anton_r = 7;
								}
								

							}else if(anton_r == 7) {
								int ttx = rand() % 4;
								
								if (ttx == 0) {
									anton_r = 7;
								}else
								if (ttx == 1) {
									anton_r = 8;
								}
								else {
									anton_r = 6;
								}

							}
							else if (anton_r == 6) {
							int ttx = rand() % 8;

							if (ttx == 0) {
								anton_r = 6;
							}
							else
								if (ttx == 1) {
									anton_r = 10;
								}
								else if(ttx == 2){
									anton_r = 9;
								}
								else if (ttx == 3) {
									anton_r = 7;
								}
								else {
									anton_r = 4;
								}

							}
							else if (anton_r == 5) {
							int ttx = rand() % 3;

							if (ttx == 0) {
								anton_r = 5;
							}
							else
							{
								anton_r = 4;
							}

							}
							else if (anton_r == 4) {
							int ttx = rand() % 5;

							if (ttx == 0) {
								anton_r = 4;
							}
							else if (ttx == 1)
							{
								anton_r = 6;
							}
							else if (ttx == 2)
							{
								anton_r = 4;
							}
							else if (ttx == 3 || ttx == 4)
							{
								anton_r = 15;
							}

							}
							else if (anton_r == 3) {
							int ttx = rand() % 7;

							if (ttx == 0) {
								anton_r = 3;

							}
							else if (ttx == 1)
							{
								ventilation.play();
								sys_ventilation = 1;
								anton_r = 10;
							}
							else if (ttx == 2)
							{
								ventilation.play();
								sys_ventilation = 1;
								anton_r = 9;
							}
							else if (ttx == 3)
							{
								ventilation.play();
								sys_ventilation = 1;
								anton_r = 8;
							}
							else {
								anton_r = 2;
							}

							}
							else if (anton_r == 2) {
							int ttx = rand() % 4;

							if (ttx == 0) {
								anton_r = 2;

							}
							else if (ttx == 1)
							{
								
								anton_r = 1;
							}
							else if (ttx == 2)
							{
								
								anton_r = 3;
							}
							else if (ttx == 3)
							{
								
								anton_r = 1;
							}
							

							}
							else if (anton_r == 1) {
							int ttx = rand() % 4;

							if (ttx == 0) {
								anton_r = 1;

							}
							else if (ttx == 1)
							{

								anton_r = 14;
							}
							else if (ttx == 2)
							{

								anton_r = 2;
							}
							else if (ttx == 3)
							{

								anton_r = 14;
							}


							}
							else if (anton_r == 14) {
							if (havebook) {
								anton_r = 4;
							}
							else {
								antonscream = 1;
								antonscreams_s.play();
								screen = 0;
								trevoga.stop();
								olgais.restart();
							}
							}
							else if (anton_r == 15) {
							if (havebook) {
								anton_r = 1;
							}
							else {
								antonscream = 1;
								antonscreams_s.play();
								screen = 0;
								trevoga.stop();
								olgais.restart();
							}
							}








							if (gaidukov_r == 12 || gaidukov_r == 13) {
								int ttx = rand() % 3;
								if (ttx != 0) {
									gaidukov_r = 11;
								}

							}
							else
								if (gaidukov_r == 11) {
									int ttx = rand() % 6;
									if (ttx == 0) {
										gaidukov_r = 11;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 13;
										}
										else
											if (ttx == 2) {
												gaidukov_r = 12;
											}
											else
												if (ttx > 2) {
													gaidukov_r = 10;
												}


								}
								else if (gaidukov_r == 10) {
									int ttx = rand() % 8;
									if (ttx == 0) {
										gaidukov_r = 10;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 9;
										}
										else
											if (ttx == 2) {
												gaidukov_r = 9;
												ventilation.play();
												sys_ventilation = 1;
											}
											else
												if (ttx == 3) {
													gaidukov_r = 8;
													ventilation.play();
													sys_ventilation = 1;
												}
												else
													if (ttx == 4) {
														gaidukov_r = 3;
														ventilation.play();
														sys_ventilation = 1;
													}
													else
														if (ttx == 5) {
															gaidukov_r = 11;

														}
														else
															if (ttx > 5) {
																gaidukov_r = 6;
															}


								}
								else if (gaidukov_r == 9) {
									int ttx = rand() % 10;
									if (ttx == 0) {
										gaidukov_r = 9;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 10;
										}
										else
											if (ttx == 2) {
												gaidukov_r = 10;
												ventilation.play();
												sys_ventilation = 1;
											}
											else
												if (ttx == 3) {
													gaidukov_r = 8;
													ventilation.play();
													sys_ventilation = 1;
												}
												else
													if (ttx == 4) {
														gaidukov_r = 3;
														ventilation.play();
														sys_ventilation = 1;
													}
													else
														if (ttx > 4) {
															gaidukov_r = 6;
														}


								}
								else if (gaidukov_r == 8) {
									int ttx = rand() % 6;
									if (ttx == 0) {
										gaidukov_r = 8;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 9;
											ventilation.play();
											sys_ventilation = 1;
										}
										else
											if (ttx == 2) {
												gaidukov_r = 3;
												ventilation.play();
												sys_ventilation = 1;
											}
											else
												if (ttx == 3) {
													gaidukov_r = 10;
													ventilation.play();
													sys_ventilation = 1;
												}
												else
													if (ttx > 3) {
														gaidukov_r = 7;
													}


								}
								else if (gaidukov_r == 7) {
									int ttx = rand() % 4;

									if (ttx == 0) {
										gaidukov_r = 7;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 8;
										}
										else {
											gaidukov_r = 6;
										}

								}
								else if (gaidukov_r == 6) {
									int ttx = rand() % 8;

									if (ttx == 0) {
										gaidukov_r = 6;
									}
									else
										if (ttx == 1) {
											gaidukov_r = 10;
										}
										else if (ttx == 2) {
											gaidukov_r = 9;
										}
										else if (ttx == 3) {
											gaidukov_r = 7;
										}
										else {
											gaidukov_r = 4;
										}

								}
								else if (gaidukov_r == 5) {
									int ttx = rand() % 3;

									if (ttx == 0) {
										gaidukov_r = 5;
									}
									else
									{
										gaidukov_r = 4;
									}

								}
								else if (gaidukov_r == 4) {
									int ttx = rand() % 5;

									if (ttx == 0) {
										gaidukov_r = 4;
									}
									else if (ttx == 1)
									{
										gaidukov_r = 6;
									}
									else if (ttx == 2)
									{
										gaidukov_r = 4;
									}
									else if (ttx == 3 || ttx == 4)
									{
										gaidukov_r = 15;
									}

								}
								else if (gaidukov_r == 3) {
									int ttx = rand() % 7;

									if (ttx == 0) {
										gaidukov_r = 3;

									}
									else if (ttx == 1)
									{
										sys_ventilation = 1;
										ventilation.play();
										gaidukov_r = 10;
									}
									else if (ttx == 2)
									{
										sys_ventilation = 1;
										gaidukov_r = 9;
										ventilation.play();
									}
									else if (ttx == 3)
									{
										ventilation.play();
										sys_ventilation = 1;
										gaidukov_r = 8;
									}
									else {
										gaidukov_r = 2;
									}

								}
								else if (gaidukov_r == 2) {
									int ttx = rand() % 4;

									if (ttx == 0) {
										gaidukov_r = 2;

									}
									else if (ttx == 1)
									{

										gaidukov_r = 1;
									}
									else if (ttx == 2)
									{

										gaidukov_r = 3;
									}
									else if (ttx == 3)
									{

										gaidukov_r = 1;
									}


								}
								else if (gaidukov_r == 1) {
									int ttx = rand() % 4;

									if (ttx == 0) {
										gaidukov_r = 1;

									}
									else if (ttx == 1)
									{

										gaidukov_r = 14;
									}
									else if (ttx == 2)
									{

										gaidukov_r = 2;
									}
									else if (ttx == 3)
									{

										gaidukov_r = 14;
									}


								}
								else if (gaidukov_r == 14) {
									if (havebook) {
										gaidukov_r = 4;
									}
									else {
										gaidukovscream = 1;
										gaidukovscreams_s.play();
										screen = 0;
										olgais.restart();
										trevoga.stop();
									}
								}
								else if (gaidukov_r == 15) {
									if (havebook) {
										gaidukov_r = 1;
									}
									else {
										gaidukovscream = 1;
										gaidukovscreams_s.play();
										screen = 0;
										olgais.restart();
										trevoga.stop();
									}
								}
						}
						
						if (screen == 0) {
							window.draw(ohrana1);
							if (havebook == 1) {
								window.draw(havebook_p);
							}
							if (check.getElapsedTime().asMilliseconds() > 500) {
								if (pos.x < 100) {
									screen = 2;
									check.restart();
								}
								if (pos.x > 900) {
									screen = 1;
									check.restart();
								}
								if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
									if (pos.x > 210 && pos.y > 401 && pos.x < 456 && pos.y < 578) {
										screen = 3;
										check.restart();
										pad.play();
									}
									if (pos.x > 533 && pos.y > 435 && pos.x < 779 && pos.y < 591) {
										screen = 4;
										olga.restart();
										pad.play();
										incamera.restart();
										office.stop();
										camera.play();
										cam = 1;
										crack = 0;
									}
								}
							}
							
						}
						if (screen == 1) {
							window.draw(ohrana2);
							
							if (anton_r == 15) {
								anton.setPosition(400, 200);
								window.draw(anton);
							}
							if (gaidukov_r == 15) {
								gaidukov.setPosition(400, 300);
								window.draw(gaidukov);
							}
							if (havebook == 1) {
								window.draw(havebook_p);
							}
							if (check.getElapsedTime().asMilliseconds() > 500) {
								if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
									if (pos.x > 214 && pos.y > 217 && pos.x < 302 && pos.y < 357) {
										havebook = !havebook;
										if (givetake == 1) {
											havebook = 0;
										}
										if (havebook == 1) {
											keepbook.restart();
										}
										else {
											nowtimes -= keepbook.getElapsedTime().asMilliseconds();
										}
										check.restart();
									}
								}
								if (pos.x < 100) {
									screen = 0;
									check.restart();
								}
							}
						}
						if (screen == 2) {
							window.draw(ohrana3);
							
							if (anton_r == 14) {
								anton.setPosition(100, 200);
								window.draw(anton);
							}
							if (gaidukov_r == 14) {
								gaidukov.setPosition(200, 300);
								window.draw(gaidukov);
							}
							if (havebook == 1) {
								window.draw(havebook_p);
							}
							if (check.getElapsedTime().asMilliseconds() > 500) {
								if (pos.x > 900) {
									screen = 0;
									check.restart();
								}
							}
						}
						if (screen == 3) {
							window.draw(terminal);
							if (check.getElapsedTime().asMilliseconds() > 500) {
								if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
									
									if (make == 0) {
										if (pos.x > 213 && pos.y > 247 && pos.x < 360 && pos.y < 284) {
											make = 1;
											making.restart();
											check.restart();
										}
										if (pos.x > 214 && pos.y > 306 && pos.x < 366 && pos.y < 344) {
											make = 2;
											making.restart();
											check.restart();
										}
										if (pos.x > 215 && pos.y > 359 && pos.x < 460 && pos.y < 394) {
											make = 3;
											making.restart();
											check.restart();
										}
										if (pos.x > 213 && pos.y > 413 && pos.x < 542 && pos.y < 447) {
											make = 4;
											making.restart();
											check.restart();
										}
									}
								}
								if (pos.y > 550) {
									screen = 0;
									check.restart();
									pad.play();
								}
							}
							if (make == 1) {
								restarting.setPosition(500, 242);
								window.draw(restarting);

							}
							if (make == 2) {
								restarting.setPosition(500, 301);
								window.draw(restarting);

							}
							if (make == 3) {
								restarting.setPosition(500, 354);
								window.draw(restarting);

							}
							if (make == 4) {
								restarting.setPosition(600, 408);
								window.draw(restarting);

							}


							if (sys_video == 1) {
								error.setPosition(700, 242);
								window.draw(error);

							}

							if (sys_audio == 1) {
								error.setPosition(700, 301);
								window.draw(error);

							}
							
							if (sys_ventilation == 1) {
								error.setPosition(700, 354);
								window.draw(error);

							}
							
							
						}
						if (make == 1) {
							if (making.getElapsedTime().asMilliseconds() > 8000) {
								make = 0;
								sys_video = 0;
							}
						}
						if (make == 2) {
							if (making.getElapsedTime().asMilliseconds() > 8000) {
								make = 0;
								sys_audio = 0;
							}
						}
						if (make == 3) {
							if (making.getElapsedTime().asMilliseconds() > 10000) {
								make = 0;
								sys_ventilation = 0;
							}
						}
						if (make == 4) {
							if (making.getElapsedTime().asMilliseconds() > 15000) {
								make = 0;
								sys_ventilation = 0;
								sys_audio = 0;
								sys_video = 0;
							}
						}
						if (screen > 3) {
								
							text.setPosition(10, 10);
							text.setCharacterSize(20);
							text.setFillColor(Color::White);
							
							if (screen == 4) {
								window.draw(cam1);
								text.setString("cam " + to_string(screen - 3));
								if (anton_r == screen - 3) {

									anton.setPosition(-50, 200);
									window.draw(anton);
								}
								if (gaidukov_r == screen - 3) {
									gaidukov.setPosition(500, 300);
									window.draw(gaidukov);
								}
								
							}
								if (screen == 5) {
									window.draw(cam2);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										
										anton.setPosition(-50, 300);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(500, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 6) {
									window.draw(cam3);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setScale(Vector2f(0.5, 0.5));
										anton.setPosition(460, 125);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(500, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 7) {
									window.draw(cam4);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(100, 200);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(500, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 8) {
									window.draw(cam5);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(25, 200);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(100, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 9) {
									window.draw(cam6);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(0, 300);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(500, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 10) {
									window.draw(cam7);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(-50, 50);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(500, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 11) {
									window.draw(cam8);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setScale(Vector2f(0.7, 0.7));
										anton.setPosition(700, 150);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(0, 450);
										window.draw(gaidukov);
									}
								}

								if (screen == 12) {
									window.draw(cam9);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(200, 150);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(300, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 13) {
									window.draw(cam10);
									text.setString("cam " + to_string(screen - 3));
									if (anton_r == screen - 3) {
										anton.setPosition(400, 150);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(300, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 14) {
									window.draw(cam11);
									text.setString("cam " + to_string(screen - 3));
									
									if (anton_r == screen - 3) {
										anton.setPosition(200, 150);
										window.draw(anton);
									}
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(300, 300);
										window.draw(gaidukov);
									}
								}

								if (screen == 15) {
									window.draw(cam12);
									text.setString("cam " + to_string(screen - 3));
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(600, 300);
										window.draw(gaidukov);
									}
									if (anton_r == screen - 3) {
										anton.setPosition(400, 150);
										window.draw(anton);
									}
								}
								if (screen == 16) {
									window.draw(cam13);
									text.setString("cam " + to_string(screen - 3));
									if (gaidukov_r == screen - 3) {
										gaidukov.setPosition(0,300);
										window.draw(gaidukov);
									}
									if (anton_r == screen - 3) {
										anton.setPosition(530, 30);
										window.draw(anton);
									}
								}


								
								if (olga.getElapsedTime().asMilliseconds() > timeincamera[classes - 1]) {
									window.draw(letter);
									if (crack == 0) {
										olgais.restart();
										crack = 1;
									}
									
								}
								if (sys_video) {
									window.draw(bug);
								}
								if (!sys_audio) {
									window.draw(call);
								}
								if (calls.getElapsedTime().asMilliseconds() < 5000) {
									window.draw(calling);
								}
								else if(!sys_audio){
									if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
										if (pos.x > 19 && pos.y > 482 && pos.x < 131 && pos.y < 577) {
											if (rand() % 6 > 6 - classes) {
												sys_audio = 1;
											}
											else {
												calls.restart();
												callanton.play();
												if (rand() % 3 != 1) {
													if (screen - 3 == 11) {
														if (anton_r == 12 || anton_r == 13) {
															anton_r = 11;
														}
													}
													else if (screen - 3 == 12 || screen - 3 == 13) {
														if (anton_r == 11) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 10) {
														if (anton_r == 11 || anton_r == 9 || anton_r == 6) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 9) {
														if (anton_r == 10 || anton_r == 6) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 8) {
														if (anton_r == 7) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 7) {
														if (anton_r == 8 || anton_r == 6) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 6) {
														if (anton_r == 7 || anton_r == 9 || anton_r == 10) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 5) {
														if (anton_r == 4) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 4) {
														if (anton_r == 5 || anton_r == 6) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 3) {
														if (anton_r == 2) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 2) {
														if (anton_r == 1 || anton_r == 3) {
															anton_r = screen - 3;
														}
													}
													else if (screen - 3 == 1) {
														if (anton_r == 2) {
															anton_r = screen - 3;
														}
													}
												}
											}
											
										}
										if (pos.x > 151 && pos.y > 482 && pos.x < 268 && pos.y < 579) {
											if (rand() % 6 > 6 - classes) {
												sys_audio = 1;
											}
											else {
												calls.restart();
												callgaidukov.play();
												if (rand() % 3 != 1) {
													if (screen - 3 == 11) {
														if (gaidukov_r == 12 || gaidukov_r == 13) {
															gaidukov_r = 11;
														}
													}
													else if (screen - 3 == 12 || screen - 3 == 13) {
														if (gaidukov_r == 11) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 10) {
														if (gaidukov_r == 11 || gaidukov_r == 9 || gaidukov_r == 6) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 9) {
														if (gaidukov_r == 10 || gaidukov_r == 6) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 8) {
														if (gaidukov_r == 7) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 7) {
														if (gaidukov_r == 8 || gaidukov_r == 6) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 6) {
														if (gaidukov_r == 7 || gaidukov_r == 9 || gaidukov_r == 10) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 5) {
														if (gaidukov_r == 4) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 4) {
														if (gaidukov_r == 5 || gaidukov_r == 6) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 3) {
														if (gaidukov_r == 2) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 2) {
														if (gaidukov_r == 1 || gaidukov_r == 3) {
															gaidukov_r = screen - 3;
														}
													}
													else if (screen - 3 == 1) {
														if (gaidukov_r == 2) {
															gaidukov_r = screen - 3;
														}
													}
												}
											}
										}
									}
								}
								if (crack == 1 && olgais.getElapsedTime().asMilliseconds() > 2000) {
									screen = 0;
									check.restart();
									pad.play();
									if(givetake == 0)
									office.play();
									camera.stop();
									cam = 0;
									olgascream = 1;
									olgais.restart();
									olga_sound.play();
								}
								window.draw(text);
							window.draw(map);
							
								if (pos.y > 580) {
									screen = 0;
									check.restart();
									pad.play();
									if (givetake == 0)
									office.play();
									camera.stop();
									cam = 0;
								}
								if (rand() % 50 == 0) {
									window.draw(bug);
								}
								if (check.getElapsedTime().asMilliseconds() > 500) {
									if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
										if (pos.x > 644 && pos.y > 466 && pos.x < 710 && pos.y < 507) {
											
											screen = 4;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											crack = 0;
											check.restart();
											clickcamera.play();
										}
										if (pos.x > 642 && pos.y > 520 && pos.x < 708 && pos.y < 560) {
											
											screen = 5;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 719 && pos.y > 522 && pos.x < 786 && pos.y < 562) {
											
											screen = 6;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 884 && pos.y > 466 && pos.x < 951 && pos.y < 506) {
											
											screen = 7;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 885 && pos.y > 522 && pos.x < 953 && pos.y < 561) {
											
											screen = 8;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 885 && pos.y > 391 && pos.x < 951 && pos.y < 433) {
											
											screen = 9;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 807 && pos.y > 390 && pos.x < 873 && pos.y < 432) {
											
											screen = 10;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 724 && pos.y > 391 && pos.x < 791 && pos.y < 432) {
											
											screen = 11;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 725 && pos.y > 332 && pos.x < 792 && pos.y < 372) {
											
											screen = 12;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 689 && pos.y > 269 && pos.x < 755 && pos.y < 311) {
											
											screen = 13;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 608 && pos.y > 269 && pos.x < 673 && pos.y < 310) {
											
											screen = 14;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 606 && pos.y > 211 && pos.x < 675 && pos.y < 252) {
											
											screen = 15;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
										if (pos.x > 606 && pos.y > 329 && pos.x < 674 && pos.y < 371) {
											
											screen = 16;
											if (crack == 1) {
												if (rand() % 5 == 0) {
													screen = 0;
													check.restart();
													pad.play();
													if (givetake == 0)
													office.play();
													camera.stop();
													cam = 0;
													olgascream = 1;
													olgais.restart();
													olga_sound.play();
												}
											}
											check.restart();
											clickcamera.play();
											crack = 0;
										}
									}
								}
						}
						if (havebook) {
							int ttt = (nowtimes / 1000) - keepbook.getElapsedTime().asSeconds();
							text.setString("Student book: " + to_string(ttt));
							text.setPosition(700, 35);
							text.setCharacterSize(30);
							text.setFillColor(Color::Red);
							if (screen == 1 || screen == 2 || screen == 3 || screen == 0)
							window.draw(text);
							if (ttt < 0) {
								noEnergy.play();
								havebook = 0;
								givetake = 1;
								office.stop();
							}
						}
						int ttt = process.getElapsedTime().asSeconds();
						text.setString(to_string(ttt / 60) + "/8.5");
						text.setPosition(850, 0);
						text.setCharacterSize(30);
						text.setFillColor(Color::White);
						if (screen == 1 || screen == 2 || screen == 3 || screen == 0) 
						window.draw(text);


						if (olgascream == 1) {
							havebook = 0;
							sys_audio = 1;
							sys_video = 1;
							sys_ventilation = 1;
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 5) {
								window.clear();
							}
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 1) {
								window.draw(olga_p);
							}
							if (olgais.getElapsedTime().asMilliseconds() > 1800) {
								olgascream = 0;
							}

						}
						if (antonscream == 1) {
							havebook = 0;
							sys_audio = 1;
							sys_video = 1;
							sys_ventilation = 1;
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 5) {
								window.clear();
							}
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 1) {
								window.draw(antonscreams);
							}
							if (olgais.getElapsedTime().asMilliseconds() > 1800) {
								olgascream = 0;
								office.stop();
								camera.stop();
								massage = 2;
								main.play();
								break;
							}
							
						}
						
						if (gaidukovscream == 1) {
							havebook = 0;
							sys_audio = 1;
							sys_video = 1;
							sys_ventilation = 1;
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 5) {
								window.clear();
							}
							if (olgais.getElapsedTime().asMilliseconds() % 10 > 1) {
								window.draw(gaidukovscreams);
							}
							if (olgais.getElapsedTime().asMilliseconds() > 1800) {
								olgascream = 0;
								office.stop();
								camera.stop();
								massage = 2;
								main.play();
								break;
							}

						}
						if (t_book.getElapsedTime().asMilliseconds() < 7000 && classes == 1) {
							window.draw(book);
						}

						if (process.getElapsedTime().asSeconds() > 512) {
							office.stop();
							camera.stop();
							massage = 1;
							main.play();
							trevoga.stop();
							classes++;
							if (classes == 6) {
								classes = 5;
							}
							fout.open("score.txt");
							fout << classes;
							fout.close();
							break;
						}
						if (venttimer.getElapsedTime().asSeconds() > 30) {
							office.stop();
							camera.stop();
							massage = 2;
							main.play();
							trevoga.stop();
							break;
						}
						if (venttimer.getElapsedTime().asSeconds() > 15) {
							if (tre) {
								if (givetake == 0) {
									trevoga.play();
									tre = 0;
								}
							}
							
						}
						else {
							tre = 1;
							trevoga.stop();
						}
						if (office_sound.getElapsedTime().asSeconds() > 8 && cam == 0) {
							if (givetake == 0) {
								office.play();
							}
							
							office_sound.restart();
						}
						if (cam_sound.getElapsedTime().asSeconds() > 15 && cam == 1) {
							camera.play();
							cam_sound.restart();
						}
						


						window.display();
					}
					main.play();
				}
				
			}
			window.display();
		}
		
	}
	
	return 0;
}