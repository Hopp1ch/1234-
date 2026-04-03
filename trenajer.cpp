#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    char names[10][50];
    int scores[10];
    int corrects[10];
    int leaderCount = 0;

    srand(time(0));
    int settings = 1;
    int choice;

    do {
        cout << "=== ТРЕНАЖЕР ===\n";
        cout << "1. Запуск\n";
        cout << "2. Настройки (сейчас: ";
        switch (settings) {
        case 1: cout << "Лёгкая +"; break;
        case 2: cout << "Средняя -"; break;
        case 3: cout << "Высокая * и /"; break;
        case 4: cout << "Очень высокая микс"; break;
        }

        cout << ")\n";
        cout << "3. Таблица лидеров\n";
        cout << "4. Выход\n";
        cout << "Выбор: ";
        cin >> choice;
        system("cls");
        switch (choice) {
            case 2: {
                cout << "--- НАСТРОЙКИ ---\n";
                cout << "1. Лёгкая (сложение, двузначные числа)\n";
                cout << "2. Средняя (вычитание, двузначные числа)\n";
                cout << "3. Высокая (умножение и деление, трезначные числа)\n";
                cout << "4. Очень высокая (микс из всех операций, четырехзначные числа)\n";
                cout << "Выберите сложность: ";
                cin >> settings;
                system("cls");
                break;
            }
            case 1: {
                char name[50];
                cout << "\nВаше имя: ";
                cin.ignore();
                cin.getline(name, 50);

                int correct = 0;
                int score = 0;

                cout << "\nНачинаем игру! 10 вопросов\n\n";

                for (int q = 1; q <= 10; q++) {
                    int a, b, ans, user;
                    char op;

                    switch (settings) {
                    case 1: {
                        a = rand() % 90 + 10;
                        b = rand() % 90 + 10;
                        op = '+';
                        ans = a + b;
                        break;
                    }
                    case 2: {
                        a = rand() % 90 + 10;
                        b = rand() % 90 + 10;
                        if (a < b) {
                            int t = a;
                            a = b;
                            b = t;
                        }
                        op = '-';
                        ans = a - b;
                        break;
                    }
                    case 3: {
                        int opType = rand() % 2;
                        if (opType == 0) {
                            a = rand() % 900 + 100;
                            b = rand() % 900 + 100;
                            op = '*';
                            ans = a * b;
                        }
                        else {
                            ans = rand() % 900 + 100;
                            b = rand() % 900 + 100;
                            a = ans * b;
                            op = '/';
                        }
                        break;
                    }
                    case 4: {
                        int opType = rand() % 4;
                        switch (opType) {
                        case 0: {
                            a = rand() % 9000 + 1000;
                            b = rand() % 9000 + 1000;
                            op = '+';
                            ans = a + b;
                            break;
                        }
                        case 1: {
                            a = rand() % 9000 + 1000;
                            b = rand() % 9000 + 1000;
                            if (a < b) {
                                int t = a;
                                a = b;
                                b = t;
                            }
                            op = '-';
                            ans = a - b;
                            break;
                        }
                        case 2: {
                            a = rand() % 9000 + 1000;
                            b = rand() % 9000 + 1000;
                            op = '*';
                            ans = a * b;
                            break;
                        }
                        case 3: {
                            ans = rand() % 9000 + 1000;
                            b = rand() % 9000 + 1000;
                            a = ans * b;
                            op = '/';
                            break;
                        }
                        }
                        break;
                    }
                    }

                    cout << q << ". " << a << " " << op << " " << b << " = ";
                    cin >> user;
                    if (user == ans) {
                        cout << "Верно! +10 очков\n";
                        correct++;
                        score += 10;
                    }
                    else {
                        cout << "Ошибка! Правильный ответ: " << ans << "\n";
                    }
                }

                cout << "\n=== РЕЗУЛЬТАТ ===\n";
                cout << "Игрок: " << name << "\n";
                cout << "Правильно: " << correct << " из 10\n";
                cout << "Очки: " << score << "\n";

                if (leaderCount < 10) {
                    int i;
                    for (i = 0; name[i] != '\0'; i++) {
                        names[leaderCount][i] = name[i];
                    }
                    names[leaderCount][i] = '\0';

                    scores[leaderCount] = score;
                    corrects[leaderCount] = correct;
                    leaderCount++;
                }
                break;
            }
            case 3: {
                cout << "\n=== ТАБЛИЦА ЛИДЕРОВ ===\n";
                if (leaderCount == 0) {
                    cout << "Таблица лидеров пуста\n";
                }
                else {
                    for (int i = 0; i < leaderCount - 1; i++) {
                        for (int j = 0; j < leaderCount - i - 1; j++) {
                            if (scores[j] < scores[j + 1]) {
                                int tempScore = scores[j];
                                scores[j] = scores[j + 1];
                                scores[j + 1] = tempScore;

                                int tempCorrect = corrects[j];
                                corrects[j] = corrects[j + 1];
                                corrects[j + 1] = tempCorrect;

                                char tempName[50];
                                int k;
                                for (k = 0; names[j][k] != '\0'; k++) {
                                    tempName[k] = names[j][k];
                                }
                                tempName[k] = '\0';

                                for (k = 0; names[j + 1][k] != '\0'; k++) {
                                    names[j][k] = names[j + 1][k];
                                }
                                names[j][k] = '\0';

                                for (k = 0; tempName[k] != '\0'; k++) {
                                    names[j + 1][k] = tempName[k];
                                }
                                names[j + 1][k] = '\0';
                            }
                        }
                    }

                    for (int i = 0; i < leaderCount; i++) {
                        cout << i + 1 << ". " << names[i] << " - " << scores[i] << " очков (" << corrects[i] << "/10)\n";
                    }
                }
                break;
            }
            case 4: {
                cout << "\nСпасибо за игру!\n";
                break;
            }
            default: {
                cout << "\nНеверный выбор! Попробуйте снова.\n";
                break;
            }
        }
        if (choice != 4 && choice != 2) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
            system("cls");
        }

    } while (choice != 4);
    return 0;
}
