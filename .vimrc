" Настройка отступов
set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab
set cindent

" Строки в пределах 110 символов
set colorcolumn=110
highlight ColorColumn ctermbg=darkgray

" Настройка Make
set makeprg=make\ -C\ ../build\ -j2

" Запуск Make по F4
nnoremap <F4> :make<cr>

" Запуск проекта по F9
nnoremap <F9> :./interpreter<cr>

" Очистка дерева по Ctrl-C
nnoremap <C-c> :../clean<cr>
