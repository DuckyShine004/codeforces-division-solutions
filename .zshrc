alias template='~/scripts/create_cpp_template.sh'

function compile {
    g++ -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -fmax-errors=2 -o "${1}.exe" "${1}.cpp"
}

function compile_debug {
    g++ -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2 -o "${1}.exe" "${1}.cpp"
}

function debug {
    (echo "run < $1.in" && cat) | gdb -q "${1}.exe"
}

function build_debug {
    compile_debug "$1"
    ./"${1}.exe"
}

function build {
    compile "$1"
    ./"${1}.exe"
}
