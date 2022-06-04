# Write your MySQL query statement below
select firstName, lastName, city, state
from person
LEFT JOIN Address on person.personId=Address.personId;