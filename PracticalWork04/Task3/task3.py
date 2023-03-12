#
# Практика (4 курс коледжу)
# Практична робота 4: Завдання 3
#

import os

try:
    # Відкриття файлів для читання та запису
    with open("Input.txt", "r") as file_input, open("Output.txt", "w") as file_output:
        # Зчитування тексту з файлу Input.txt
        text = file_input.read()

        uppercase_count = 0
        lowercase_count = 0

        # Підрахунок кількості великих та маленьких літер
        for char in text:
            if char.isupper():
                uppercase_count += 1
            elif char.islower():
                lowercase_count += 1

        # Зчитування символу, який користувач хоче порівняти
        symbol = input("Enter a symbol to compare: ")

        # Підрахунок кількості введених символів у тексті
        symbol_count = text.count(symbol)

        # Запис результатів у файл Output.txt
        file_output.write(f"""Number of uppercase letters: {uppercase_count}
Number of lowercase letters: {lowercase_count}
Number of '{symbol}' characters: {symbol_count}
""")

        # Отримання повного шляху до файлу Output.txt з результатами та виведення його у консоль
        full_file_output_path = os.path.abspath(file_output.name)
        print(f"""
Results saved in '{full_file_output_path}'.
""")

except Exception as error:
    print(f"Error: {error}")
