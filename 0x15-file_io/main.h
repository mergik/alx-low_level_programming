#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024

/* BUILT-IN FUNCTIONS */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <errno.h>
#include <elf.h>

/* FUNCTION PROTOTYPES */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
