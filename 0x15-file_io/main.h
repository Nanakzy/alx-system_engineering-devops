#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_elf_header(const Elf64_Ehdr *elf_header);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int copy_file(int fd_from, const char *file_to);

#endif
