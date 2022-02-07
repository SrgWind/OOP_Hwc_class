#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Привет World!\n";

    GoodBasic* universalPointer01 = new Soda(2);
    static_cast<Soda*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Soda(2, 2);
    static_cast<Soda*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Soda(3, 3, "Jivchick");
    static_cast<Soda*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Soda(4, 4, "Pepsi", "Yami", 2);
    static_cast<Soda*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Soda(5, 5, "Cola", "Yami-Yami", 1.5, "Lemon");
    static_cast<Soda*>(universalPointer05)->toString();

   /*Родительский класс GoodBasic включает 4 поля, обязательные для всех предметов
       Родительский класс Электроприборы мог бы включать обязат. для всех ЭЛЕКТРОприборов
                поля Энергопотребление, шумноть, класс энергоэкономии и другие
       Конечный дочерний класс Холодильник получает от двух родителей поля и методы, обязательные для
       предметов и электроприборов и реализует свои личные, которых не может быть у других классов
       предметов.*/
}