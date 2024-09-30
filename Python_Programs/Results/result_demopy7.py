def libdef_lua(ctx, p, arg):
    if ctx.mode == "BUILD_libdef":
        i = 0
        while libbc_map[i].name is not None:
            if p == libbc_map[i].name:
                ofs = libbc_map[i].ofs
                len = libbc_map[i + 1].ofs - ofs
                obuf[2] += 1
                optr.append("LIBINIT_LUA")
                libdef_name(p, 0)
                optr.extend(libbc_code[ofs:ofs + len])
                libdef_fixupbc(optr)
                return
            i += 1
        print(f"Error: missing libbc definition for {p}", file=sys.stderr)
        exit(1)