#ifndef VM_HPP
#define VM_HPP

extern "C"
{
    int vm_execute(wchar_t *aboslutePath, int argc, wchar_t *argv[]);
}

#endif //VM_HPP