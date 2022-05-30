#include <elf.h>
#include <stdio.h>
#include <string.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

void read_elf_header(const char* elfFile) {
  // Either Elf64_Ehdr or Elf32_Ehdr depending on architecture.
  ElfW(Ehdr) header;

  FILE* file = fopen(elfFile, "rb");
  if(file) {
    // read the header
    fread(&header, sizeof(header), 1, file);

    // check so its really an elf file
    if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0) {
       // this is a valid elf file
    }

    // finally close the file
    fclose(file);
  }
}
