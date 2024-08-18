select round(count(w1.player_id)/(select count(distinct player_id) from Activity),2) as fraction from Activity as w1 inner join Activity as w2 using(player_id) where (w1.player_id,w1.event_date) in 
(select player_id,min(event_date) from Activity group by player_id) and datediff(w2.event_date,w1.event_date) = 1;
