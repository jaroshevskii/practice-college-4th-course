#
# Практика (4 курс коледжу)
# Практична робота 4: Завдання 1
#

import os

try:
    # Відкриття файлів для читання та запису
    with open("Input.txt", "r") as file_input, open("Count.txt", "w") as file_count:
        # Читання всіх символів з файлу Input.txt
        text = file_input.read()

        print(text)

        # Знаходження кількості символів
        count = len(text)

        # Запис кількості символів в файл Count.txt
        file_count.write(str(count))

        # Отримання повного шляху до файлу з результатами та виведення його у консоль
        full_file_count_path = os.path.abspath(file_count.name)
        print(f"""
Results saved in '{full_file_count_path}'.
        """)

except Exception as error:
    print(f"Error: {error}")
