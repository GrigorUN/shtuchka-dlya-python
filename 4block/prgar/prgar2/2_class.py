# class Ninja():
#     def whoareyou(self):
#         print("Я из рода ниндзя.")

# class Tomo(Ninja):
#     def Tomo_says(self):
#         print("Я не промахиавюсь!")
# class Itto(Ninja):
#     def Itto_says(self):
#         print("Мой отец - человек чести...")

# Tomo = Tomo()
# Itto = Itto()
# Tomo.whoareyou()
# Tomo.Tomo_says()
# Itto.whoareyou()
# Itto.Itto_says() 


# class Tomo():
#     def shuriken(self):
#         print("Мастерски бросает сюрикен.")
# class Andrey():
#     def shuriken(self):
#         print("Любительски бросает сюрикен.")

# Tomo = Tomo
# Andrey = Andrey
# for type in (Tomo, Andrey):
#     type.shuriken()


# class Tomo():
#     def shuriken(self):
#         print("Мастерски бросает сюрикен.")
#     def _where_is_treasure(): # где закопан свиток
#         print("Закопан возле дереав у самой высокой горы")

# Tomo = Tomo
# Tomo._where_is_treasure()


class Teacher():
    def whoareyou(self):
        print("Я учитель иностранного языка в 14 школе")

class Anna(Teacher):
    def Anna_says(self):
        print("Я учитель английского языка")
class Julia(Teacher):
    def Julia_says(self):
        print("Я учитель французского языка")

Anna = Anna()
Julia = Julia()
Anna.whoareyou()
Anna.Anna_says()
Julia.whoareyou()
Julia.Julia_says()