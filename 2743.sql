/* Problem no-2746 */
/* https://www.beecrowd.com.br/judge/en/problems/view/2746 */

SELECT name, char_length(name) AS length
FROM people
ORDER BY length DESC