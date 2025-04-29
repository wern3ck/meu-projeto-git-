CREATE DATABASE produtos;
use produtos;
drop table if exists produtos;
create table produtos(
id int primary key,
nome varchar(100),
preco decimal(10,2) not null,
categoria varchar(50) not null
);

insert into produtos (id, nome, preco, categoria) values
(1, 'lucas', 25, 'eletronicos'),
(2, 'luis', 200, 'acessorios'),
(3, 'vieira', 25, 'roupas'),
(4, 'tunico', 200, 'farmacia'),
(5, 'ana', 50, 'mouse'),
(6, 'joana', 40, 'obsoleto');

select * from produtos where categoria = 'eletronicos';
select * from produtos where nome like 'T%';
select count(*) from produtos where preco > 100;
select AVG(preco) from produtos;
update produtos set categoria = '75.90'
where id = 5;
delete from produtos where categoria = 'obsoleto';

