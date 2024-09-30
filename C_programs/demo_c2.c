void cpp_register_pragma_space ( pfile , space ) cpp_reader * pfile ; const char * space ; { struct pragma_entry * new ; const struct pragma_entry * p = pfile -> pragmas ; size_t len = strlen ( space ) ; while ( p ) { if ( p -> isnspace && 

    p -> len == len 
    
    && ! memcmp ( p -> name , space , len ) ) return ; p = p -> next ; } new = xnew ( struct pragma_entry ) ; new -> name = space ; new -> len = len ; new -> isnspace = 1 ; new -> u . space = 0 ; new -> next = pfile -> pragmas ; pfile -> pragmas = new ; }