#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
void print_ident(const Elf64_Ehdr *header);
void print_elf(const Elf64_Ehdr *header);
int is_elf(const Elf64_Ehdr *header);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
