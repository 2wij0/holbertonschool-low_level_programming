int cp(void){
    char *s;

    s = malloc(12);
    if (s == NULL) // Always check for failure!
        return (1); 

    strcpy(s, "Best School");
    /* ... do something with s ... */
    
    free(s); // Don't forget to free what you malloc'd
    return (0);
}
