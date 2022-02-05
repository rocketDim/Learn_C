
// возвращает количество видимых ящиков
int count_boxes();

// есть ли ящики?
// 0 - нет ни одного
// 1 - есть один или более ящик
int any_box()
{
    return count_boxes() > 0;
}

// подойти к ближайшему ящику
void closest_box();

// открыть ящик
void open_box();

// закрыть ящик
void close_box();

// выкинуть ящик
void trash_box();

// пустой ли ящик?
// 1 - да (true, пустой)
// 0 - нет (false, заполненный)
int is_empty_box();

// взять из ящика 1 штуку
void take_food();

// хорошая ли штука, или уже портится?
// 1 - да (true, хорошая)
// 0 - нет (false, плохая)
int is_good_food();

//положить в кастрюлю
void cook_food();

// выкинуть в мусорку
void trash_food();

void main()
{
    // начало

    closest_box();
    open_box();

    while (is_empty_box() == 0)
    {
        take_food();

        if (is_good_food() == 1)
        {
            cook_food();
        }
        else
        {
            trash_food();
        }
    }

    close_box();
    trash_box();

    // конец
}
