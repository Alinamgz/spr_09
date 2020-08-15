int mx_strcmp(const char *s1, const char *s2) {
    int s1_char = *s1;
    int s2_char = *s2;

    while (s1_char != '\0' && s2_char !='\0') {
      if (s1_char != s2_char) {
          break;
        }
        s1_char = *(s1++);
        s2_char = *(s2++);
    }
    return (s1_char - s2_char);
}
