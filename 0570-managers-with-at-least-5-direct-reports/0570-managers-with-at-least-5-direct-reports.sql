select w1.name from Employee as w1 where 5<=(select count(*) from Employee as w2 where w1.id = w2.managerId and w1.id != w2.id);
