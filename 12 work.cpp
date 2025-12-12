#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	string PlayerName = "user";
	int PlayerLives = 3;
	int PlayerScore = 0;
	int QuestionsCount = 8;
	string InterfaceColor = "белый";
	
	int MenuChoice;
	bool GameRun = true;
	
	string q1 = "Системный язык программирования?";
	string q1a = "Python";
	string q1b = "C#";
	string q1c = "Ruby";
	string q1d = "C++";
	char q1Answer = 'D';

	string q2 = "Какой язык используется для веб-страниц?";
	string q2a = "Java";
	string q2b = "HTML";
	string q2c = "C++";
	string q2d = "Python";
	char q2Answer = 'B';

	string q3 = "Что такое переменная?";
	string q3a = "Константа";
	string q3b = "Имя для хранения данных";
	string q3c = "Функция";
	string q3d = "Цикл";
	char q3Answer = 'B';

	string q4 = "Какой оператор проверяет условие?";
	string q4a = "for";
	string q4b = "while";
	string q4c = "if";
	string q4d = "print";
	char q4Answer = 'C';

	string q5 = "Что выводит информацию на экран";
	string q5a = "input()";
	string q5b = "scan()";
	string q5c = "cout";
	string q5d = "read()";
	char q5Answer = 'C';

	string q6 = "Сколько бит в байте?";
	string q6a = "4";
	string q6b = "8";
	string q6c = "16";
	string q6d = "32";
	char q6Answer = 'B';

	string q7 = "Что такое API?";
	string q7a = "Язык программирования";
	string q7b = "Интерфейс программирования";
	string q7c = "База данных";
	string q7d = "Операционная система";
	char q7Answer = 'B';

	string q8 = "Какой тип данных для целых чисел?";
	string q8a = "float";
	string q8b = "string";
	string q8c = "bool";
	string q8d = "int";
	char q8Answer = 'D';

	string q9 = "Что такое цикл?";
	string q9a = "Условие";
	string q9b = "Повторение действие";
	string q9c = "Функция";
	string q9d = "Переменная";
	char q9Answer = 'B';

	string q10 = "Как объявить переменную в С++?";
	string q10a = "var";
	string q10b = "let";
	string q10c = "int";
	string q10d = "variable";
	char q10Answer = 'C';

	string q11 = "Что такое компилятор?";
	string q11a = "Текст";
	string q11b = "Программа для перевода кода";
	string q11c = "Цикл";
	string q11d = "База";
	char q11Answer = 'B';

	string q12 = "Какой язык создал Бьёрн Страуструп?";
	string q12a = "Java";
	string q12b = "Python";
	string q12c = "C++";
	string q12d = "C#";
	char q12Answer = 'C';

	while (GameRun) {
		system("cls");
		cout << "=== ВИКТОРИНА ПО ПРОГРАММИРОВАНИЮ ===\n\n";
		cout << "1. Начать игру\n";
		cout << "2. Настройки\n";
		cout << "3. Правила\n";
		cout << "4. Выйти\n";
		cout << "Выберите пункт: ";
		cin >> MenuChoice;
		system("cls");
		if (MenuChoice == 1) {
			PlayerLives = 3;
			PlayerScore = 0;

			int QuestionsUsed[12] = { 0 };
			int QuestionsDone = 0;
			bool GameOver = false;
			while (!GameOver && QuestionsDone < QuestionsCount) {
				system("cls");
				cout << "[+] Игрок: " << PlayerName;
				cout << " | жизни: " << PlayerLives;
				cout << " | Очки: " << PlayerScore << "\n\n";

				int randomq;
				bool found = false;
				while (!found) {
					randomq = rand() % 12 + 1;
					if (QuestionsUsed[randomq - 1] == 0); {
						QuestionsUsed[randomq - 1] = 1;
						found = true;
					}
				}
				cout << "[" << (QuestionsDone + 1) << "] ";
				char UserAnswer;

				if (randomq == 1) {
					cout << "Вопрос: " << q1 << "\n\n";
					cout << "[A] " << q1a << "\t";
					cout << "[B] " << q1b << "\n";
					cout << "[C] " << q1c << "\t";
					cout << "[D] " << q1d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;
					
					if (UserAnswer == 'D' || UserAnswer == 'd') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: D\n";
						PlayerLives--;
					}
				}

				else if (randomq == 2) {
					cout << "Вопрос: " << q2 << "\n\n";
					cout << "[A] " << q2a << "\t";
					cout << "[B] " << q2b << "\n";
					cout << "[C] " << q2c << "\t";
					cout << "[D] " << q2d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 3) {
					cout << "Вопрос: " << q3 << "\n\n";
					cout << "[A] " << q3a << "\t";
					cout << "[B] " << q3b << "\n";
					cout << "[C] " << q3c << "\t";
					cout << "[D] " << q3d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 4) {
					cout << "Вопрос: " << q4 << "\n\n";
					cout << "[A] " << q4a << "\t";
					cout << "[B] " << q4b << "\n";
					cout << "[C] " << q4c << "\t";
					cout << "[D] " << q4d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'C' || UserAnswer == 'c') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: C\n";
						PlayerLives--;
					}
				}

				else if (randomq == 5) {
					cout << "Вопрос: " << q5 << "\n\n";
					cout << "[A] " << q5a << "\t";
					cout << "[B] " << q5b << "\n";
					cout << "[C] " << q5c << "\t";
					cout << "[D] " << q5d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'C' || UserAnswer == 'c') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: C\n";
						PlayerLives--;
					}
				}

				else if (randomq == 6) {
					cout << "Вопрос: " << q6 << "\n\n";
					cout << "[A] " << q6a << "\t";
					cout << "[B] " << q6b << "\n";
					cout << "[C] " << q6c << "\t";
					cout << "[D] " << q6d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 7) {
					cout << "Вопрос: " << q7 << "\n\n";
					cout << "[A] " << q7a << "\t";
					cout << "[B] " << q7b << "\n";
					cout << "[C] " << q7c << "\t";
					cout << "[D] " << q7d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 8) {
					cout << "Вопрос: " << q8 << "\n\n";
					cout << "[A] " << q8a << "\t";
					cout << "[B] " << q8b << "\n";
					cout << "[C] " << q8c << "\t";
					cout << "[D] " << q8d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'D' || UserAnswer == 'd') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: D\n";
						PlayerLives--;
					}
				}

				else if (randomq == 9) {
					cout << "Вопрос: " << q9 << "\n\n";
					cout << "[A] " << q9a << "\t";
					cout << "[B] " << q9b << "\n";
					cout << "[C] " << q9c << "\t";
					cout << "[D] " << q9d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 10) {
					cout << "Вопрос: " << q10 << "\n\n";
					cout << "[A] " << q10a << "\t";
					cout << "[B] " << q10b << "\n";
					cout << "[C] " << q10c << "\t";
					cout << "[D] " << q10d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'C' || UserAnswer == 'c') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: C\n";
						PlayerLives--;
					}
				}

				else if (randomq == 11) {
					cout << "Вопрос: " << q11 << "\n\n";
					cout << "[A] " << q11a << "\t";
					cout << "[B] " << q11b << "\n";
					cout << "[C] " << q11c << "\t";
					cout << "[D] " << q11d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'B' || UserAnswer == 'b') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: B\n";
						PlayerLives--;
					}
				}

				else if (randomq == 12) {
					cout << "Вопрос: " << q12 << "\n\n";
					cout << "[A] " << q12a << "\t";
					cout << "[B] " << q12b << "\n";
					cout << "[C] " << q12c << "\t";
					cout << "[D] " << q12d << "\n\n";
					cout << "[+] Выбрать ответ: ";
					cin >> UserAnswer;

					if (UserAnswer == 'C' || UserAnswer == 'c') {
						cout << "\nПравильно! +10 очков\n";
						PlayerScore += 10;
					}
					else {
						cout << "\nНеправильно! Правильный ответ: C\n";
						PlayerLives--;
					}
				}

				if (PlayerLives <= 0) {
					cout << "\n === ИГРА ОКОНЧЕНА ===\n";
					cout << "Вы проиграли! Нет больше жизней.\n";
					cout << "Ваш счет: " << PlayerScore << " очков\n";
					GameOver = true;
				}
				QuestionsDone++;

				if (!GameOver) {
					cout << "\nНажмите Enter чтобы продолжить...";
					cin.ignore();
					cin.get();
				}

			}

			if (!GameOver) {
				cout << "\n=== ПОБЕДА! ===\n";
				cout << "Вы ответили на все вопросы!\n";
				cout << "Ваш счет: " << PlayerScore << " очков\n";
				cout << "ОСталось жизней: " << PlayerLives << "\n";
			}

			cout << "\nНажмите Enter чтобы продолжить...";
			cin.ignore();
			cin.get();

		}
		
		else if (MenuChoice == 2) {
			bool InSettings = true;
			while (InSettings) {
				system("cls");
				cout << "=== НАСТРОЙКИ ===\n\n";
				cout << "1. Изменить имя игрока\n";
				cout << "2. Изменить кол-во вопросов\n";
				cout << "3. Изменить цвет интерфейса\n";
				cout << "4. Вернуться в меню\n\n";
				cout << "Текущие настройки:\n";
				cout << "Имя: " <<PlayerName<< "\n";
				cout << "Вопросов: "<<QuestionsCount<<"\n";
				cout << "Цвет: "<<InterfaceColor<<"\n";
				cout << "Выберите пункт: ";

				int SettingChoice;
				cin >> SettingChoice;
				if (SettingChoice == 1) {
					cout << "Введите новое имя: ";
					cin >> PlayerName;
					cout << "Имя изменено на: " << PlayerName << "\n";
				}
				if (SettingChoice == 1) {
					cout << "Введите новое имя: ";
					cin >> PlayerName;
					cout << "Имя изменено на: " << PlayerName << "\n";
				}
				if (SettingChoice == 1) {
					cout << "Выберите цвет (1-белый, 2-зеленый, 3-желтый, 4-синий): ";
					int ColorChoice;
					cin >> ColorChoice;
					if (ColorChoice == 1) InterfaceColor = "белый";
					else if (ColorChoice == 2) InterfaceColor = "зеленый";
					else if (ColorChoice == 3) InterfaceColor = "желтый";
					else if (ColorChoice == 4) InterfaceColor = "синий";
					else cout<<""

				}
				if (SettingChoice == 4) {
					InSettings == false;
				}
			}
		}
	}

	return 0;
}
