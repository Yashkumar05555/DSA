# Write your MySQL query statement below
select name as Customers from Customers where Customers.id not in(
    select Customers.id from Customers  inner join Orders where Customers.id= Orders.customerId 
);