select name from employee as e where 5 <= (select count(*) from employee as r where e.id = r.managerId);