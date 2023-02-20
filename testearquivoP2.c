int main() {
  
  char *argumento = "`D0FAD`5b05_H?N";
  unsigned long int tamanhoString;
  char *string;
  int contador;
  
  string = strdup(argumento);
  tamanhoString = strlen(string);
  
  for (contador = 0; contador < tamanhoString; contador = contador + 1) 
  {
    if ((' ' < string[contador]) && (string[contador] != '\x7f')) {
      if (string[contador] < 'P') {
        string[contador] = string[contador] + '/';
      }
      else {
        string[contador] = string[contador] + -0x2f;
      }
    }
  }
  printf(string);
  return 0;
}