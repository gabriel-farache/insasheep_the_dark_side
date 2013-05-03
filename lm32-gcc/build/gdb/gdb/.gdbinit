echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir ../../../src/gcc-4.5.3/gdb/gdb/../libiberty
dir ../../../src/gcc-4.5.3/gdb/gdb/../bfd
dir ../../../src/gcc-4.5.3/gdb/gdb
dir .
set prompt (top-gdb) 

define pdie
  if $argc == 1
    call dump_die ($arg0, 1)
  else
    if $argc == 2
      call dump_die ($arg0, $arg1)
    else
      printf "Syntax: pdie die [depth]\n"
    end
  end
end

document pdie
Pretty print a DWARF DIE.
Syntax: pdie die [depth]
end