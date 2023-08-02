void _puts_recursion(char *s) {
  if (*s == '\0') {
    // The string is empty, so we just print a newline.
    _putchar('\n');
    return;
  }

  // Otherwise, we print the first character in the string, and then recursively call the function to print the rest of the string.
  _putchar(*s);
  _puts_recursion(s + 1);
}

