select avg(rating) from movies m
join ratings r on m.id = r.movie_id where year = 2012