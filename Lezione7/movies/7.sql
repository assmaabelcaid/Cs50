select m.title,r.rating from movies m
join ratings r on r.movie_id = m.id and year = 2010 order by rating desc, title asc