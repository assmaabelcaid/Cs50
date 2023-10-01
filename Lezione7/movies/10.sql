select distinct p.name from people p
join directors d on d.person_id = p.id
join ratings r on r.movie_id = d.movie_id
where r.rating >= 9