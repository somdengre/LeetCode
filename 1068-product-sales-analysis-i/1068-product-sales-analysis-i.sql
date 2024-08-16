# Write your MySQL query statement below
SELECT E1.product_name,E2.year,E2.price FROM Sales AS E2 INNER JOIN Product AS E1 ON E1.product_id = E2.product_id;