# ITStep-cpp7

### Завдання 1.
Використовуючи відкрите наслідування, створити ієрархію банківських рахунків: 
1) клас "Рахунок" (звичайний розрахунковий рахунок без можливості кредитування клієнта банку, абстрактний клас). 
Поля: номер рахунку, ім"я клієнта, баланс. 
Методи: 
перевірки балансу(невіртуальний), 
виведення інформації про рахунок (віртуальний), 
метод списання(переведення) коштів на інший рахунок (віртуальний),
метод поповнення рахунку готівкою (невіртуальний),
метод зняття готівки з рахунку (віртуальний)

2) клас "Захищений Рахунок" (звичайний захищений розрахунковий рахунок без можливості кредитування клієнта банку, неабстрактний клас). 
Поля: чотиризначний цілочисельний пін-код. 
Додатковий метод: зміна пін-коду. 


3) клас "Кредитний захищений рахунок" (з можливістю кредитування клієнта банку до деякої межі, неабстрактний клас). 
Додаткові поля: 			.
Методи: 
виведення інформації про рахунок (віртуальний перевизначений),  
метод списання(переведення) коштів на інший рахунок (віртуальний перевизначений),
метод зняття готівки з рахунку (віртуальний перевизначений),

### Завдання 2
Створіть клас Passport (паспорт), який буде містити паспортну інформацію про громадянина України.
За допомогою механізму спадкування, реалізуйте клас ForeignPassport (закордонний паспорт) похідний від Passport.
Нагадаємо, що закордонний паспорт містить крім паспортних даних, також дані про візи.

### Завдання 3
Створіть клас з ім'ям Person, що містить поля для зберігання імені та прізвища, дати народження, статі (тип - перерахування).
Далі від класу Person за допомогою успадкування створіть два класи: Student, Professor.
До класу Student додайте додаткове поле, що містить середній бал студента.
До класу Professor два поля: 1) число публікацій професора, 2) посаду (тип - перерахування) - викладач, старший викладач, доцент, професор.
За допомогою механізму спадкування, реалізуйте клас Aspirant (аспірант - студент, який готується до захисту
кандидатської роботи) похідний від Student (додаткові поля - спеціальність і тема кандидатської роботи).
