# Dependencies
For toolchain with fortran rtools is selected and installed using choco as admin
```
PS> choco install rtools -y --no-progress --force --version=4.0.0.20220206
..
  Software installed to 'C:\rtools40\'
```

## Libraries
Run Rools https://github.com/r-windows/docs/blob/master/rtools40.md
```
$ pacman -Sy
$ pacman -Sl | grep blas
simon@MSI MINGW64 ~
$ pacman -S mingw-w64-x86_64-openblas
..
Set the environment variable OPENBLAS_NUM_THREADS to the number of threads to use.
```

# Setup venv
Based on https://scipy.github.io/devdocs/building/index.html
 * IDE support & editable installs
```
C:\Users\simon\github\scipy> python -m venv venv
PS C:\Users\simon\github\scipy> .\venv\Scripts\activate
C:\Users\simon\github\scipy> python -m pip install -r requirements/all.txt
(venv) PS C:\Users\simon\github\scipy> $env:PATH="$env:RTOOLS40_HOME\usr\bin;$env:RTOOLS40_HOME\mingw64\bin;$env:PATH"
(venv) PS C:\Users\simon\github\scipy> pip install -e . --no-build-isolation
```

## TODO
https://github.com/todomd/todo.md
 - [ ] scipy-openblas
 - [ ] ucrt

# Setup for usage
