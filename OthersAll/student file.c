#include <stdlib.h> /* exit, malloc, realloc, free */
#include <stdio.h>  /* fopen, fgetc, fputs, fwrite */

struct line_reader {
    /* All members are private. */
    FILE    *f;
    char    *buf;
    size_t   siz;
};

void
lr_init(struct line_reader *lr, FILE *f)
{
    lr->f = f;
    lr->buf = NULL;
    lr->siz = 0;
}
char *
next_line(struct line_reader *lr, size_t *len)
{
    size_t newsiz;
    int c;
    char *newbuf;

    *len = 0;           /* Start with empty line. */
    for (;;) {
        c = fgetc(lr->f);   /* Read next character. */
        if (ferror(lr->f))
            return NULL;

        if (c == EOF) {
            if (*len == 0)
                return NULL;
            else
                return lr->buf;
        } else {
            /* Append c to the buffer. */
            if (*len == lr->siz) {
                /* Need a bigger buffer! */
                newsiz = lr->siz + 4096;
                newbuf = realloc(lr->buf, newsiz);
                if (newbuf == NULL)
                    return NULL;
                lr->buf = newbuf;
                lr->siz = newsiz;
            }
            lr->buf[(*len)++] = c;

            /* '\n' is end of line. */
            if (c == '\n')
                return lr->buf;
        }
    }
}
void
lr_free(struct line_reader *lr)
{
    free(lr->buf);
    lr->buf = NULL;
    lr->siz = 0;
}
int
main()
{
    struct line_reader lr;
    FILE *f;
    size_t len;
    char *line;

    f = fopen("foobar.txt", "r");
    if (f == NULL) {
        perror("foobar.txt");
        exit(1);
    }
    lr_init(&lr, f);
    while (line = next_line(&lr, &len)) {
        fputs("LINE: ", stdout);
        fwrite(line, len, 1, stdout);
    }
    if (!feof(f)) {
        perror("next_line");
        exit(1);
    }
    lr_free(&lr);

    return 0;
}
