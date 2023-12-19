#include <string>
#include <vector>

class Constants {
public:
    // Static function to get the instance of the Singleton class
    static Constants& getInstance() {
        static Constants instance; // Static instance of the class
        return instance;
    }

    std::vector<std::string> tnorinutyunHy = {"Ընդունարան (Տն․/ Փոխտն․)",
                                              "Տնօրեն (Ա․ Մակարյան)",
                                              "Փոխտնօրեն (Մ․ Օթարյան)",
                                              "Նիստերի դահլիճ"};
    std::vector<std::string> tnorinutyunEn = {"Reception (Director, Deputy Director)",
                                              "Director (A. Makaryan)",
                                              "Deputy director (M.Otaryan)",
                                              "Conference Hall"};
    std::vector<std::string> tnorinutyunRu = {"Рецепция (директор/заместитель директора)",
                                              "Режиссер (А.Макарян)",
                                              "Заместитель директора (М.Отариан)",
                                              "Зал заседаний"};


    std::vector<std::string> karucvatsqayinHy = {"Տեղեկատվական համակարգերի \nսպասարկման և \nզարգացման բաժին",
                                                 "Անձնակազմի կառավարման \nև իրավական \nապահովման բաժին",
                                                 "Մասնագիտական կրթության\n որակի ապահովման բաժին",
                                                 "Կրթական բարեփոխումների \nդասախոսների \nվերապատրաստման բաժին",
                                                 "Տնտեսական գործունեության \nկազմակերպման և \nսպասարկման բաժին",
                                                 "Պրակտիկայի կազմակերպման \nև շահակիցների հետ \nհամագործակցության բաժին",
                                                 "Ուսումնական գործընթացի \nկազմակերպման և \nվերահսկման բաժին"};
    std::vector<std::string> karucvatsqayinRu = {"Отдел обслуживания \nи развития\n информационных систем",
                                                 "Департамент управления \nперсоналом и правового \nобеспечения",
                                                 "Отдел обеспечения \nкачества профессионального \nобразования",
                                                 "Подготовка учителей \nДепартамента \nреформы образования",
                                                 "Отдел организации\n и обслуживания \nхозяйственной деятельности",
                                                 "Отдел организации\n практики и взаимодействия \nс заинтересованными сторонами",
                                                 "Отдел организации\n и контроля учебного\n процесса"};
    std::vector<std::string> karucvatsqayinEn = {"Department of service \nand development of\n information systems",
                                                 "Department of Personnel \nManagement and \nLegal Assurance",
                                                 "Vocational education \nquality assurance \ndepartment",
                                                 "Department of \nEducation Reform\n Teacher Training",
                                                 "Department of \norganization and service \nof economic activity",
                                                 "Practice Organization \nand Stakeholder \nCooperation Department",
                                                 "Educational process\n organization and \ncontrol department"};

    std::vector<std::string> dekanatnerHy = {"Տնտեսագիտության ֆակուլտետի դեկան",
                                             "Տնտեսագիտության ֆակուլտետի դեկանատ",
                                             "Հումանիտար գիտությունների ֆակուլտետի դեկան",
                                             "Հումանիտար գիտությունների ֆակուլտետի դեկանատ",
                                             "Հումանիտար գիտությունների ֆակուլտետի դեկանի տեղակալ"};
    std::vector<std::string> dekanatnerRu = {"Декан экономического факультета",
                                             "Деканат экономического факультета",
                                             "Декан гуманитарного факультета",
                                             "Деканат гуманитарного факультета",
                                             "Заместитель декана гуманитарного факультета"};
    std::vector<std::string> dekanatnerEn = {"Dean of the Faculty of Economics",
                                             "Dean's Office of the Faculty of Economics",
                                             "Dean of the Faculty of Humanities",
                                             "Dean's Office of the Faculty of Humanities",
                                             "Deputy Dean of the Faculty of Humanities"};

    std::vector<std::string> ambionnerHy = {"Ընդհանուր տնտեսագիտության ամբիոն",
                                           "Օտար լեզուների ամբիոն",
                                           "Հայոց լեզվի ամբիոն",
                                           "Ֆրանսերեն լեզվի ամբիոն",
                                           "Մանկավարժության և հոգեբանության ամբիոն",
                                           "Տուրիզմի կառավարման և մշակութաբանության ամբիոն",
                                           "Հայոց պատմության և հասարակագիտության ամբիոն"};
    std::vector<std::string> ambionnerRu = {"Кафедра общей экономики",
                                           "Кафедра иностранных языков",
                                           "Кафедра армянского языка",
                                           "Кафедра французского языка",
                                           "Кафедра педагогики и психологии",
                                           "Кафедра туристического менеджмента и культурологии",
                                           "Кафедра истории Армении и социальных исследований"};
    std::vector<std::string> ambionnerEn = {"Department of General Economics",
                                           "Chair of foreign languages",
                                           "Chair of Armenian language",
                                           "Chair of French language",
                                           "Department of Pedagogy and Psychology",
                                           "Chair of Tourism Management and Cultural Studies",
                                           "Department of Armenian History and Social Studies"};

    std::vector<std::string> varchakanHy = {"Հաշվապահություն",
                                            "Գլխավոր հաշվապահ",
                                            "Գլխավոր քարտուղար",
                                            "Իրավախորհրդատու",
                                            "Կրթական ծրագրի պատասխանատու",
                                            "Ուսումնամեթոդական վարչություն"};
    std::vector<std::string> varchakanRu = {"Бухгалтерский учет",
                                            "Главный бухгалтер",
                                            "Генеральный секретарь",
                                            "Юридический консультант",
                                            "Менеджер образовательных программ",
                                            "Образовательный отдел"};
    std::vector<std::string> varchakanEn = {"Accounting",
                                            "Chief Accountant",
                                            "General Secretary",
                                            "Legal advisor",
                                            "Educational program manager",
                                            "Educational Department"};

    std::vector<std::string> kentronnerHy = {"Ամերիկյան գրադարան",
                                             "Ռուսաց լեզվի և\n մշակույթի կենտրոն",
                                             "Русский дом"};
    std::vector<std::string> kentronnerRu = {"Американская библиотека",
                                             "Центр русского языка и культуры",
                                             "Русский дом"};
    std::vector<std::string> kentronnerEn = {"American Library",
                                             "Center of Russian language and culture",
                                             "Русский дом"};

    std::vector<std::string> tntesakanHy = {"Պահեստ N2",
                                            "Պարետ",
                                            "Պահակակաետ"};
    std::vector<std::string> tntesakanRu = {"Склад N2",
                                            "Сторож",
                                            "пост охраны"};
    std::vector<std::string> tntesakanEn = {"Warehouse N2",
                                            "security guard",
                                            "Security"};

    std::vector<std::string> buttonsHy = {"Գրադարան",
                                          "Բուժկետ",
                                          "Համակարգչային սրահ",
                                          "Պատճենահանման սենյակ",
                                          "Սանհանգույց",
                                          "1-ին հարկ",
                                          "2-րդ հարկ",
                                          "Ներս",
                                          "Դուրս",
                                          "Ձախ մաս",
                                          "Աջ մաս"};
    std::vector<std::string> buttonsRu = {"Библиотека",
                                          "Медицинский пункт",
                                          "Компьютерный зал",
                                          "Копировальная комната",
                                          "Туалет",
                                          "1-й этаж",
                                          "2-й этаж",
                                          "В",
                                          "Вне",
                                          "Левая сторона",
                                          "Правая сторона"};
    std::vector<std::string> buttonsEn = {"Library",
                                          "Medical point",
                                          "Computer hall",
                                          "Copy room",
                                          "Toilet",
                                          "1st floor",
                                          "2nd floor",
                                          "In",
                                          "Out",
                                          "Left side",
                                          "Right side"};
    // Delete copy constructor and assignment operator
    Constants(const Constants&) = delete;
    Constants& operator=(const Constants&) = delete;

private:
    // Private constructor to prevent instantiation
    Constants() {
        // Constructor code
    }

    // Private destructor to prevent deletion through pointers
    ~Constants() {
        // Destructor code
    }
};

