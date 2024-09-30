static void libdef_lua ( BuildCtx * ctx, char * p, int arg ) { UNUSED ( arg ) ; if ( ctx -> mode == BUILD_libdef ) { int i ; i = 0 ; for ( 

while ( libbc_map [ i ]. name!= NULL ) ; 

{ if (! strcmp ( libbc_map [ i ]. name, p ) ) { int ofs = libbc_map [ i ]. ofs ; int len = libbc_map [ i + 1 ]. ofs - ofs ; obuf [ 2 ] ++ ; * optr ++ = LIBINIT_LUA ; libdef_name ( p, 0 ) ; memcpy ( optr, libbc_code + ofs, len ) ; libdef_fixupbc ( optr ) ; optr += len ; i ++ ; return ; } i ++ ; } fprintf ( stderr, \"Error: missing libbc definition for %s\\ \", p ) ; exit ( 1 ) ; } }