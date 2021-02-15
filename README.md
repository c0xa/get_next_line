
# :construction: 

- [:ru: RUS](./README.ru.md) - Русская документация
- [:uk: ENG](./README.md) - English documentation

# About
This is programm for read from file written on C .It returns a line read from a
file descriptor, without the newline.
The bonus part
works with more than one file.

# Example main

```
int main()
{
    int fd;
    char *c;

    fd = open("test.txt", O_RDONLY);
    while (get_next_line(fd, &c) >= 0)
    {
        printf("%s\n", c);
        free(c);
    }
    printf("%s\n", c);
    free(c);
    return 0;
}
```

With bonus

```
int main()
{
    int fd;
    char *c;

    fd1 = open("test.txt", O_RDONLY);
    fd2 = open("test2.txt", O_RDONLY);
    fd3 = open("test3.txt", O_RDONLY);
    if (get_next_line(fd1, &c) != -1)
    {
        printf("%s\n", c);
        free(c);
    }
    if (get_next_line(fd2, &c) != -1)
    {
        printf("%s\n", c);
        free(c);
    }
    if (get_next_line(fd3, &c) != -1)
    {
        printf("%s\n", c);
        free(c);
    }
    return 0;
}
```
