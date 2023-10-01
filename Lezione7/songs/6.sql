Select name from songs
where artist_id = (select id from artists where name like 'Post Malone');