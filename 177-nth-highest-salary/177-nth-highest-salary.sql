CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
RETURN (
SELECT salary from Employee group by salary order by salary desc limit 1 OFFSET N
);
END