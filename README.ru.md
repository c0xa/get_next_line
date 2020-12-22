

# :construction: 

- [:ru: RUS](./README.ru.md) - Русская документация
- [:uk: ENG](./README.md) - English documentation

# О проекте
Это программа для считывания строки из файла,
написанная на C. Она позволяет возращать следующую строку при каждом вызове программы. Бонусная часть 
работает с более чем одним файлом.

# Примеры main

```
int main()
{
    int fd;
    char *c;

    fd = open("test.txt", O_RDONLY);
    while (get_next_line(fd, &c) != 0)
        printf("%s\n", c);
    printf("%s\n", c);
    return 0;
}
```

C бонусной частью

```
int main()
{
    int fd;
    char *c;

    fd1 = open("test.txt", O_RDONLY);
    fd2 = open("test2.txt", O_RDONLY);
    fd3 = open("test3.txt", O_RDONLY);
    if (get_next_line(fd1, &c) != -1)
        printf("%s\n", c);
    if (get_next_line(fd2, &c) != -1)
        printf("%s\n", c);
    if (get_next_line(fd3, &c) != -1)
        printf("%s\n", c);
    return 0;
}
```