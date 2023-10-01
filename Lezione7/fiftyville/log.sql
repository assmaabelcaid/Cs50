-- Keep a log of any SQL queries you execute as you solve the mystery.

--July 28, 2021
--Humphrey Street

-select * from crime_scene_reports where street = "Humphrey Street" and year = 2021 and month = 7 and day = 28;
--Primo indizio: 10:15am, Humphrey Street bakery, 3 witnesses, all mention bakery

-select * from interviews where year = 2021 and day = 28 and month = 7 and transcript like '%bakery%'
--Secondo indizio: parking lot footage (ruth), eugene met him at the atm on Leggett Street, raymond phone call earliest flight less 1 min

Select * from atm_transactions where transaction_type = "withdraw" and year = 2021 and day = 28 and month = 7 and atm_location = "Leggett Street"

Select * from bakery_security_logs where year = 2021 and day = 28 and month = 7 and hour = 10 and activity = "exit" and minute <25

select * from phone_calls where year = 2021 and day = 28 and month = 7 and duration < 60

select * from flights where year = 2021 and day = 29 and month = 7

Select * from people where license_plate
in (Select license_plate from bakery_security_logs where year = 2021 and day = 28 and month = 7 and hour = 10 and activity = "exit" and minute <25 )
and phone_number in (select caller from phone_calls where year = 2021 and day = 28 and month = 7 and duration < 60)

Select * from passengers where flight_id in (select id from flights where year = 2021 and day = 29 and month = 7)

Select p.id, p.name,p.phone_number from people p where p.license_plate
in (Select license_plate from bakery_security_logs where year = 2021 and day = 28 and month = 7 and hour = 10 and activity = "exit" and minute <25 )
and phone_number in (select caller from phone_calls where year = 2021 and day = 28 and month = 7 and duration < 60)


select p.id,* from bank_accounts b
join people p on b.person_id = p.id
where person_id in (Select p.id from people p where p.license_plate
in (Select license_plate from bakery_security_logs where year = 2021 and day = 28 and month = 7 and hour = 10 and activity = "exit" and minute <25 )
and phone_number in (select caller from phone_calls where year = 2021 and day = 28 and month = 7 and duration < 60))


select * from people where name = "Eugene"

select p.name,* from phone_calls c
join people p on c.receiver = p.phone_number where c.caller in ("(367) 555-5533","(770) 555-1861") and day = 28 and duration <60


select p.name from phone_calls c
join people p on c.caller = p.phone_number where c.receiver = "(367) 555-5533" and c.day = 28 and c.duration <60 -- è Diana

select * from passengers p
join flights f on p.flight_id = f.id
 where p.passport_number = 3592750733 and f.day = 29


select * from airports a
join flights f on f.origin_airport_id = a.id where f.id = 18


select * from airports a
join flights f on f.destination_airport_id = a.id where f.id = 18


