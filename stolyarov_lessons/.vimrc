"отступы и нумерация строк
set expandtab "замена табов на пробелы"
set smarttab "добавление количества пробелов в начале строки равно shiftwidth"
set tabstop =4 "количество пробелов в одном обычном табе"
set softtabstop =4 "количество пробелов в табе при удалении"
set shiftwidth =4 "количество пробелов"
set number "нумерация строк"
set foldcolumn =2 "отстп от левой части окна"
colorscheme torte "цветовая схема
syntax on "включение синтаксиса"
set noerrorbells "выключить ошибки клавиш звук"
set novisualbell
set mouse =a "одновременно все режимы работы мыши"
set ignorecase
set smartcase "игнор регистра при поиске"
set hlsearch "подсветка поиска"
set colorcolumn=110 "установка переменной для столбца"
highlight ColorColumn ctermbg=darkgray "подсветка столбца"
augroup project
    autocmd!
    autocmd BufRead,BufNewFile *.h, *.c set filetype=c.doxygen
augroup END
