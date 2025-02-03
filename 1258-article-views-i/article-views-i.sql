# Write your MySQL query statement below
-- SELECT author_id as id
-- FROM Views
-- WHERE author_id = viewer_id
-- ORDER BY author_id;


select distinct(author_id) as id
 from views
  where author_id=viewer_id order by author_id;