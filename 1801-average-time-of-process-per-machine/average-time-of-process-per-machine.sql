# Write your MySQL query statement below
Select 
    a.machine_id,
    Round(AVG(b.timestamp-a.timestamp),3) As processing_time
From activity a
Join activity b
ON a.machine_id=b.machine_id
and a.process_id=b.process_id
where a.activity_type = 'start'
    and b.activity_type ='end'
group by a.machine_id;