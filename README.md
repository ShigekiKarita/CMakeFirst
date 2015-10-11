# CMake First Template

1. git clone git@github.com:ShigekiKarita/CMakeFirst.git
1. DL some libs `./setup.sh`
1. Run test `./cmk.sh -t` or `./cmk.sh -c -t` (with clang)


## How to use `cmk.sh` more

+ usage
```
Usage:
    cmk.sh [command] [<options>]
    eg. cmk.sh debug test -V    # run all test in debug

Options:
    --clang, -c       use Clang compiler (default: CC and CXX)
    --debug, -d       enable debug-mode (default: release-mode)
    --help, -h        print this
    --jobs, -j        set parallel jobs number manually (default: /proc/cpuinfo)
    --run, -r         run exec file
    --test, -t        exec test (next arg: regex-pattern and other options)
    --version, -v     print cmk.sh version
```
