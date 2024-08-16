SELECT customer_id, COUNT(*) AS count_no_trans
FROM (
    SELECT E1.customer_id, E2.visit_id AS count_no_trans 
    FROM Visits AS E1 
    LEFT JOIN Transactions AS E2 
    ON E1.visit_id = E2.visit_id 
    WHERE E2.transaction_id IS NULL
) AS derived_table
GROUP BY customer_id 
ORDER BY count_no_trans;