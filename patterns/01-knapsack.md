# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZDHXMFET%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIQCxOcIPj9fxZAX80HfAN0093fKrZS3kPlPF6tzrWRnE9wIgSSvV6aXwp0Z6K38VAi4cz0QEFoZQ3%2F1sEo8soHGpH%2BQq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDFcFVw12bOylpLPrLCrcA1BdrbKY0w37E1dxNLB68txdnt7Cm%2B%2BVxSdSeu3yEDEF%2Bd%2B520brp9Jar1fMXFJtOrcqfkelnz3yz3z%2FqbswDEq%2F%2F72AQGYE4KUfCapniaZAnMYqYWiDmmm4xna4npzMERP%2B15hTP7NzL6YEvGI23DVHC3Gb2XlFAIAuPk5n%2BJ5UcOUeBgI92qL6PP2HbEnC5WxrYKqo8N90r7aaaSCPP6FkRgl3VQV0bvpi6M5XvE0Iv%2B86DoiWw22EobiVXbpGJkiO%2Fw%2FYEfkDYRkugw8DBXrWq4FQ27MeHM%2B8D6YCRazYQtOG3350id%2Bsog3yfl6dFL1DP20Sip1uqKww9x9UlEgK2mkc4JRuetBH3MCoriWLszwrnnqCNLt%2BXPz4htMnJ7949z4hvlwh%2BSBkI4GSV%2FvlPQFdk4EsaobYllyIN00iWEgJ2xfu9y3gSTcfp5faz0EDENRl%2Bi7NAY%2FUIDFuf0ZqkmNcV%2F583%2BLYEFZQf5WQBC6LfrYH9icv%2FoQYdzUEvTTBAoroU0N93b%2Bghk0iE0iQSnvT1XQ0x%2BqNZYVfMjbQYDvSTVyDBjIHOi17Nm3tOjCv4Lk5986yDDIYgZj0dKKdh86d6q5bQ0J4RQap5boLgXNHYn18ASUo%2BpFbMPPljNMGOqUBw9p1sTVgn%2B3rSyFLpp7WvYq7ct1%2Fl3wJKXN9uZcVvLOILlk8Um37%2FjbuXyLaMswocevmFI70TjKVDJU0D9LOLnnGQpB%2B4MMY0c0htfQ%2Bwj5XqNX%2B5TcK5hCy7IPEc2Dx1VkoX5UxD0PR2r1fvdol%2BKr80xRzkjOLJeDfyYKPcWgb%2Fj2xkZ%2FxelxmCB%2B7KflZfZd%2FXEH0sQqnfwa%2FpAMxEV0I2g%2FW&X-Amz-Signature=7b9c3e23f7fb5d7c7fa6738ee9e75aa949eb4b8b9cd2b906db50db0704635d5d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZDHXMFET%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIQCxOcIPj9fxZAX80HfAN0093fKrZS3kPlPF6tzrWRnE9wIgSSvV6aXwp0Z6K38VAi4cz0QEFoZQ3%2F1sEo8soHGpH%2BQq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDFcFVw12bOylpLPrLCrcA1BdrbKY0w37E1dxNLB68txdnt7Cm%2B%2BVxSdSeu3yEDEF%2Bd%2B520brp9Jar1fMXFJtOrcqfkelnz3yz3z%2FqbswDEq%2F%2F72AQGYE4KUfCapniaZAnMYqYWiDmmm4xna4npzMERP%2B15hTP7NzL6YEvGI23DVHC3Gb2XlFAIAuPk5n%2BJ5UcOUeBgI92qL6PP2HbEnC5WxrYKqo8N90r7aaaSCPP6FkRgl3VQV0bvpi6M5XvE0Iv%2B86DoiWw22EobiVXbpGJkiO%2Fw%2FYEfkDYRkugw8DBXrWq4FQ27MeHM%2B8D6YCRazYQtOG3350id%2Bsog3yfl6dFL1DP20Sip1uqKww9x9UlEgK2mkc4JRuetBH3MCoriWLszwrnnqCNLt%2BXPz4htMnJ7949z4hvlwh%2BSBkI4GSV%2FvlPQFdk4EsaobYllyIN00iWEgJ2xfu9y3gSTcfp5faz0EDENRl%2Bi7NAY%2FUIDFuf0ZqkmNcV%2F583%2BLYEFZQf5WQBC6LfrYH9icv%2FoQYdzUEvTTBAoroU0N93b%2Bghk0iE0iQSnvT1XQ0x%2BqNZYVfMjbQYDvSTVyDBjIHOi17Nm3tOjCv4Lk5986yDDIYgZj0dKKdh86d6q5bQ0J4RQap5boLgXNHYn18ASUo%2BpFbMPPljNMGOqUBw9p1sTVgn%2B3rSyFLpp7WvYq7ct1%2Fl3wJKXN9uZcVvLOILlk8Um37%2FjbuXyLaMswocevmFI70TjKVDJU0D9LOLnnGQpB%2B4MMY0c0htfQ%2Bwj5XqNX%2B5TcK5hCy7IPEc2Dx1VkoX5UxD0PR2r1fvdol%2BKr80xRzkjOLJeDfyYKPcWgb%2Fj2xkZ%2FxelxmCB%2B7KflZfZd%2FXEH0sQqnfwa%2FpAMxEV0I2g%2FW&X-Amz-Signature=e04cd971606eec320748b9e28c02dd36ded9b76e6208a17763e2b2e0c184bb82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZDHXMFET%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIQCxOcIPj9fxZAX80HfAN0093fKrZS3kPlPF6tzrWRnE9wIgSSvV6aXwp0Z6K38VAi4cz0QEFoZQ3%2F1sEo8soHGpH%2BQq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDFcFVw12bOylpLPrLCrcA1BdrbKY0w37E1dxNLB68txdnt7Cm%2B%2BVxSdSeu3yEDEF%2Bd%2B520brp9Jar1fMXFJtOrcqfkelnz3yz3z%2FqbswDEq%2F%2F72AQGYE4KUfCapniaZAnMYqYWiDmmm4xna4npzMERP%2B15hTP7NzL6YEvGI23DVHC3Gb2XlFAIAuPk5n%2BJ5UcOUeBgI92qL6PP2HbEnC5WxrYKqo8N90r7aaaSCPP6FkRgl3VQV0bvpi6M5XvE0Iv%2B86DoiWw22EobiVXbpGJkiO%2Fw%2FYEfkDYRkugw8DBXrWq4FQ27MeHM%2B8D6YCRazYQtOG3350id%2Bsog3yfl6dFL1DP20Sip1uqKww9x9UlEgK2mkc4JRuetBH3MCoriWLszwrnnqCNLt%2BXPz4htMnJ7949z4hvlwh%2BSBkI4GSV%2FvlPQFdk4EsaobYllyIN00iWEgJ2xfu9y3gSTcfp5faz0EDENRl%2Bi7NAY%2FUIDFuf0ZqkmNcV%2F583%2BLYEFZQf5WQBC6LfrYH9icv%2FoQYdzUEvTTBAoroU0N93b%2Bghk0iE0iQSnvT1XQ0x%2BqNZYVfMjbQYDvSTVyDBjIHOi17Nm3tOjCv4Lk5986yDDIYgZj0dKKdh86d6q5bQ0J4RQap5boLgXNHYn18ASUo%2BpFbMPPljNMGOqUBw9p1sTVgn%2B3rSyFLpp7WvYq7ct1%2Fl3wJKXN9uZcVvLOILlk8Um37%2FjbuXyLaMswocevmFI70TjKVDJU0D9LOLnnGQpB%2B4MMY0c0htfQ%2Bwj5XqNX%2B5TcK5hCy7IPEc2Dx1VkoX5UxD0PR2r1fvdol%2BKr80xRzkjOLJeDfyYKPcWgb%2Fj2xkZ%2FxelxmCB%2B7KflZfZd%2FXEH0sQqnfwa%2FpAMxEV0I2g%2FW&X-Amz-Signature=5fbba4c0aa2b4a22de8628e8d1d78f5b02f2a7d9b6093bbba71392d53c0ec09e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEXLPKPX%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIAouRkCi3lI6uLQHVa3vcYQ0m1CvVYtQiRhaF8cynLhxAiBmoKvLKL3FfiYfKKrwL%2FwyFSOsbO1qnv6h5zBe6%2BV4hyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIM70B%2FHjhQBFoVWR0iKtwDh8%2Fhz7cg0r8dQCHtq%2FZT8IuEfKsNW2qwmTeoULiDu9kVddi1Ud7zmZ2mTYJZr%2Fm4ROFSww%2FUul8UIrf5SthIqP5JmGQ%2BjbNgm7679Dyat6gpehhlL0kYHFismagGZ5Iyc%2Fi7tuPmHHs7nigb1QlC3THnp0eOo9%2F18%2BAXyM2ubJvBxZqESisKojJV4Kocpwc3NWYx2zG%2FUZqNohFk9PFBRdV%2F3r0cSFpnmWpiENZYTEPfp4ik7WPbuz8hy7Z%2FX3ve8fiTAQuCLuy6mBFbfPGHuwO21iPcO7NYdHUBF%2BptavNlKyCu02dJTiLFtjNK%2FPrKiPWNvAltvNCYOxCu4jv4rWX6lFRxxZH5OupOYJKjcdqkMEb5rzcooXL1y6iSOBFleQGNl5py6WXHLCyo7kbVaC6IIbwFtAqtVE3OypHpyAtg5gfv%2F2Pzb4Z9V%2FIMGGYq2EU7tkufuYclkFITa9yR2vqHIDRdPrT%2F5UcEPYO5w0GX0B7jtPK%2BlU32IaxVZ%2FtUjWK7vSPxCahS0rfXDj4xDx%2F0ifmh%2FNIqfgwgQlNyNcYnG6BarfzqhLzEsDevIABSwO3yZm46bEUpSZupPqVgMYLN3jvmXdzYcx%2F6fL3gA%2F7AECnmamPmh5VhNzsw%2BuSM0wY6pgEJFp63jA2yp%2BZiXATeSvR14MsewJdWSASd4h4urrhhv3wN6hJWgS20LmQzoy6bJ%2B42F4AQ0q5cjrddtGYcnmoElCosGJzPp1uedYnWGv%2FuZRM5SUpCMn9TSQgdIkg1nIb9i9YfodAY4D1pOk2SJWkmAKT5PFVG4Sz7ZhbPjkGgvmC23umErVXNnug8U9%2FADGZOJECtdOPvaBxSlk1IdU7WyixqxTYL&X-Amz-Signature=25feb32a1a95c7d8059037be77e8ce4fb9217b49d55460c58c0d90dca0a45196&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEXLPKPX%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIAouRkCi3lI6uLQHVa3vcYQ0m1CvVYtQiRhaF8cynLhxAiBmoKvLKL3FfiYfKKrwL%2FwyFSOsbO1qnv6h5zBe6%2BV4hyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIM70B%2FHjhQBFoVWR0iKtwDh8%2Fhz7cg0r8dQCHtq%2FZT8IuEfKsNW2qwmTeoULiDu9kVddi1Ud7zmZ2mTYJZr%2Fm4ROFSww%2FUul8UIrf5SthIqP5JmGQ%2BjbNgm7679Dyat6gpehhlL0kYHFismagGZ5Iyc%2Fi7tuPmHHs7nigb1QlC3THnp0eOo9%2F18%2BAXyM2ubJvBxZqESisKojJV4Kocpwc3NWYx2zG%2FUZqNohFk9PFBRdV%2F3r0cSFpnmWpiENZYTEPfp4ik7WPbuz8hy7Z%2FX3ve8fiTAQuCLuy6mBFbfPGHuwO21iPcO7NYdHUBF%2BptavNlKyCu02dJTiLFtjNK%2FPrKiPWNvAltvNCYOxCu4jv4rWX6lFRxxZH5OupOYJKjcdqkMEb5rzcooXL1y6iSOBFleQGNl5py6WXHLCyo7kbVaC6IIbwFtAqtVE3OypHpyAtg5gfv%2F2Pzb4Z9V%2FIMGGYq2EU7tkufuYclkFITa9yR2vqHIDRdPrT%2F5UcEPYO5w0GX0B7jtPK%2BlU32IaxVZ%2FtUjWK7vSPxCahS0rfXDj4xDx%2F0ifmh%2FNIqfgwgQlNyNcYnG6BarfzqhLzEsDevIABSwO3yZm46bEUpSZupPqVgMYLN3jvmXdzYcx%2F6fL3gA%2F7AECnmamPmh5VhNzsw%2BuSM0wY6pgEJFp63jA2yp%2BZiXATeSvR14MsewJdWSASd4h4urrhhv3wN6hJWgS20LmQzoy6bJ%2B42F4AQ0q5cjrddtGYcnmoElCosGJzPp1uedYnWGv%2FuZRM5SUpCMn9TSQgdIkg1nIb9i9YfodAY4D1pOk2SJWkmAKT5PFVG4Sz7ZhbPjkGgvmC23umErVXNnug8U9%2FADGZOJECtdOPvaBxSlk1IdU7WyixqxTYL&X-Amz-Signature=e1716563a3ad5583a7b667ed7f50d175957fce3fa812c7c5cea99b305346ca37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEXLPKPX%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIAouRkCi3lI6uLQHVa3vcYQ0m1CvVYtQiRhaF8cynLhxAiBmoKvLKL3FfiYfKKrwL%2FwyFSOsbO1qnv6h5zBe6%2BV4hyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIM70B%2FHjhQBFoVWR0iKtwDh8%2Fhz7cg0r8dQCHtq%2FZT8IuEfKsNW2qwmTeoULiDu9kVddi1Ud7zmZ2mTYJZr%2Fm4ROFSww%2FUul8UIrf5SthIqP5JmGQ%2BjbNgm7679Dyat6gpehhlL0kYHFismagGZ5Iyc%2Fi7tuPmHHs7nigb1QlC3THnp0eOo9%2F18%2BAXyM2ubJvBxZqESisKojJV4Kocpwc3NWYx2zG%2FUZqNohFk9PFBRdV%2F3r0cSFpnmWpiENZYTEPfp4ik7WPbuz8hy7Z%2FX3ve8fiTAQuCLuy6mBFbfPGHuwO21iPcO7NYdHUBF%2BptavNlKyCu02dJTiLFtjNK%2FPrKiPWNvAltvNCYOxCu4jv4rWX6lFRxxZH5OupOYJKjcdqkMEb5rzcooXL1y6iSOBFleQGNl5py6WXHLCyo7kbVaC6IIbwFtAqtVE3OypHpyAtg5gfv%2F2Pzb4Z9V%2FIMGGYq2EU7tkufuYclkFITa9yR2vqHIDRdPrT%2F5UcEPYO5w0GX0B7jtPK%2BlU32IaxVZ%2FtUjWK7vSPxCahS0rfXDj4xDx%2F0ifmh%2FNIqfgwgQlNyNcYnG6BarfzqhLzEsDevIABSwO3yZm46bEUpSZupPqVgMYLN3jvmXdzYcx%2F6fL3gA%2F7AECnmamPmh5VhNzsw%2BuSM0wY6pgEJFp63jA2yp%2BZiXATeSvR14MsewJdWSASd4h4urrhhv3wN6hJWgS20LmQzoy6bJ%2B42F4AQ0q5cjrddtGYcnmoElCosGJzPp1uedYnWGv%2FuZRM5SUpCMn9TSQgdIkg1nIb9i9YfodAY4D1pOk2SJWkmAKT5PFVG4Sz7ZhbPjkGgvmC23umErVXNnug8U9%2FADGZOJECtdOPvaBxSlk1IdU7WyixqxTYL&X-Amz-Signature=abb8ea0da591c642f67c7fb1481e10cb8614da4d69799693af4375c15f503e03&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEXLPKPX%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIAouRkCi3lI6uLQHVa3vcYQ0m1CvVYtQiRhaF8cynLhxAiBmoKvLKL3FfiYfKKrwL%2FwyFSOsbO1qnv6h5zBe6%2BV4hyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIM70B%2FHjhQBFoVWR0iKtwDh8%2Fhz7cg0r8dQCHtq%2FZT8IuEfKsNW2qwmTeoULiDu9kVddi1Ud7zmZ2mTYJZr%2Fm4ROFSww%2FUul8UIrf5SthIqP5JmGQ%2BjbNgm7679Dyat6gpehhlL0kYHFismagGZ5Iyc%2Fi7tuPmHHs7nigb1QlC3THnp0eOo9%2F18%2BAXyM2ubJvBxZqESisKojJV4Kocpwc3NWYx2zG%2FUZqNohFk9PFBRdV%2F3r0cSFpnmWpiENZYTEPfp4ik7WPbuz8hy7Z%2FX3ve8fiTAQuCLuy6mBFbfPGHuwO21iPcO7NYdHUBF%2BptavNlKyCu02dJTiLFtjNK%2FPrKiPWNvAltvNCYOxCu4jv4rWX6lFRxxZH5OupOYJKjcdqkMEb5rzcooXL1y6iSOBFleQGNl5py6WXHLCyo7kbVaC6IIbwFtAqtVE3OypHpyAtg5gfv%2F2Pzb4Z9V%2FIMGGYq2EU7tkufuYclkFITa9yR2vqHIDRdPrT%2F5UcEPYO5w0GX0B7jtPK%2BlU32IaxVZ%2FtUjWK7vSPxCahS0rfXDj4xDx%2F0ifmh%2FNIqfgwgQlNyNcYnG6BarfzqhLzEsDevIABSwO3yZm46bEUpSZupPqVgMYLN3jvmXdzYcx%2F6fL3gA%2F7AECnmamPmh5VhNzsw%2BuSM0wY6pgEJFp63jA2yp%2BZiXATeSvR14MsewJdWSASd4h4urrhhv3wN6hJWgS20LmQzoy6bJ%2B42F4AQ0q5cjrddtGYcnmoElCosGJzPp1uedYnWGv%2FuZRM5SUpCMn9TSQgdIkg1nIb9i9YfodAY4D1pOk2SJWkmAKT5PFVG4Sz7ZhbPjkGgvmC23umErVXNnug8U9%2FADGZOJECtdOPvaBxSlk1IdU7WyixqxTYL&X-Amz-Signature=fd3e3b79a495039ad36bc2cb9d037e194c20e28d49586b22ec6523aa7228e05f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z3YJM3JQ%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIFJootR32Fzunsh%2BduyGxhUaYYUIjUFvUfqtvGNZsTmVAiEA3HWoS%2FhNgDYYDdVn7AFEyXXY00%2B5Abr%2BnZcNMNbBmOgq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDFpTMe6Hb85VzPhwxCrcAyC6L5p0jjzaYgJkFILCcEUgdvn7yub%2FHzzqXJinroVTM1SoLIYFRSGIda3TCq9zxRWNIWrOZznLpRC7F7cnEmJnVBoKYOXViSlWTSq2Aivabx8KcniiYnWAFsMUMrGItan2PdLFC8xth%2Br96Bjiu5xQS0j8MQ8xpySXAbVsP7p%2F6VpCMpnVJaSLI5KfYZpT3iOczRvS5MoX%2Bcpo8tpquHMNrPtDHjRxcQ%2FKQKbZXuAWHxpom%2FozdLlihOlwCzSyHjYoFS%2BIzA1qBp7AcLpD5NDVhBAWSlF6rcsv%2BfSTjTHegkMmU%2Fv2NoHl0IVYI51IrF4EFMIHzOBjwwoamhgDk4g8HaMGS5JKyyuhTUrVB1mjhrbo4sFOcgrhStXt%2FgBG2j%2F7%2FfgRsQuGSeTyoIfDu8HaxPN8zplf2PC%2BqhqvsXZuDgpl0A%2F%2Bis07qFc%2FIdikCu3TVD3ymPe9Sjmrj%2FgATWuMR3aVlCaRSBuewUvDoTW8c%2By4SyQUuPhQfB5UonEKR3owZpdNke%2FpG2dd7tMSthZLBc0p5%2FQN6EnkXr35e1MsXlC7AnRh0yEspXNO5n7rcclS5Cxjs4ivkSEIjxg1jBhpV1D8A7o%2B7HfvUuBS0p81e3vZyVTRizugZuBAMLbhjNMGOqUBvnuicv4yPTjtB1WqVCtG4wFXoxFQsRieihF3MF3E74ExwqGEZRfh%2BCpLA09GIRkCW55QCYBd%2FueukM0YMro9HByzWtE9iJe1TciPDlNRg1omW%2FOvwr5W6WzWbyGS1pW5tnlPPVTGG0bShh3%2FSJN%2FvTqmz%2Bksu70kd10tMdJ5%2FJUfSSjdV4voJtKHsyqRe7kW2QWef2JjfnIRZQAeZbQQz4WFx8Hv&X-Amz-Signature=f9e3ec4303936c74a2844abb31bc254013e30a2655ae790908862fa75d4d84a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOASM5DG%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJIMEYCIQD%2Bo%2F%2FdKtNZU1qRDmh40tRGt6c%2BXFl%2FN8dgAyw8oNqlYQIhAL0Q%2FtrH1Cx1s2CiGsmVlmM1kBmccHlwIKk%2BoHVrte5HKv8DCAMQABoMNjM3NDIzMTgzODA1IgzDj%2F5i%2FNGg5Ei343Yq3APRWEJkOZjiEm7snOi8aE1MDsONcP1Yk1Frswrd741tyi%2FGj%2BaSKa0UVqm3EN184yhIUqqmzh0DF%2BBAvwGuDvGrEDuTqUpqpTJGKSp0gwhJSZWxgg%2Bn9tINhNl9mSMxH%2FtS9VHk%2B1XoFZW9wU7H5mtMaL0UDN9MY%2F3iYIiaha%2BlE3krCgkyNvRRZkWH46bxsyfPVYuhejyp%2FxKn9mNYWOskNsKtnfAC7i3rAJqNLojq180zmXKwkdp5cFgRi%2F4QZ3hndgsET%2B6auYs1b80MolNiSs1xFzyc3mOEErX5%2FQhh7Jp669EJMV2pQ9%2Fgcy54oCIx4f3JnLMqpDgAc5Wwv%2BqkhgsBGTEW18bmhpBwgApkNq0SsKrH89U8WG9%2BstzV6vRhJvoJ0jOxbTfEwY0UHU5a9onfha93os%2FGjH7x5GPLySChGT6mXvr6Lyk0WlAltaMaLeAps%2Bb5cq4jRH0%2B9u3IAiVQ77h3UwoxUMJT0pT1SSOMmqtglNxeAp6oVD1jaLhJ7IUhrHBvaXQszGMRjQbYBnQPnsyG2LrNjbTz9vyeHQyJjlNkgX5i0X%2F%2Fc2Ncwptj8oz6fzUcgJQGhoiwlWtKrwEqF%2B0URicjGlhp13ao8ry6sMo85BWY5lB6RjD%2F5ozTBjqkAVNo3LuG5bwYzgrwQ8hvgmnaQFqTGF860Ioaaiq%2BYJt6essydkcKM63W8pufc1%2BSE%2BGu5grXt2fn%2B0QCwg0n%2F%2FeRYUdZ4gmh6q01JUAbvp4jH%2BS9OnSPqE7Ik4%2FlLJXeCrn1xNMrz1ZuYfTMArxrB6tPwhiTd2bUYgux8n2liuKT0c7Hdg2KeyAuLEnY8Hq2CJuqpXfVrb3ASWQlDoUwDzQXbonR&X-Amz-Signature=bab29951445d69add5e184f28c6bde21003349f6013b8dd84762d4a0d317663f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOASM5DG%2F20260724%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260724T101436Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJIMEYCIQD%2Bo%2F%2FdKtNZU1qRDmh40tRGt6c%2BXFl%2FN8dgAyw8oNqlYQIhAL0Q%2FtrH1Cx1s2CiGsmVlmM1kBmccHlwIKk%2BoHVrte5HKv8DCAMQABoMNjM3NDIzMTgzODA1IgzDj%2F5i%2FNGg5Ei343Yq3APRWEJkOZjiEm7snOi8aE1MDsONcP1Yk1Frswrd741tyi%2FGj%2BaSKa0UVqm3EN184yhIUqqmzh0DF%2BBAvwGuDvGrEDuTqUpqpTJGKSp0gwhJSZWxgg%2Bn9tINhNl9mSMxH%2FtS9VHk%2B1XoFZW9wU7H5mtMaL0UDN9MY%2F3iYIiaha%2BlE3krCgkyNvRRZkWH46bxsyfPVYuhejyp%2FxKn9mNYWOskNsKtnfAC7i3rAJqNLojq180zmXKwkdp5cFgRi%2F4QZ3hndgsET%2B6auYs1b80MolNiSs1xFzyc3mOEErX5%2FQhh7Jp669EJMV2pQ9%2Fgcy54oCIx4f3JnLMqpDgAc5Wwv%2BqkhgsBGTEW18bmhpBwgApkNq0SsKrH89U8WG9%2BstzV6vRhJvoJ0jOxbTfEwY0UHU5a9onfha93os%2FGjH7x5GPLySChGT6mXvr6Lyk0WlAltaMaLeAps%2Bb5cq4jRH0%2B9u3IAiVQ77h3UwoxUMJT0pT1SSOMmqtglNxeAp6oVD1jaLhJ7IUhrHBvaXQszGMRjQbYBnQPnsyG2LrNjbTz9vyeHQyJjlNkgX5i0X%2F%2Fc2Ncwptj8oz6fzUcgJQGhoiwlWtKrwEqF%2B0URicjGlhp13ao8ry6sMo85BWY5lB6RjD%2F5ozTBjqkAVNo3LuG5bwYzgrwQ8hvgmnaQFqTGF860Ioaaiq%2BYJt6essydkcKM63W8pufc1%2BSE%2BGu5grXt2fn%2B0QCwg0n%2F%2FeRYUdZ4gmh6q01JUAbvp4jH%2BS9OnSPqE7Ik4%2FlLJXeCrn1xNMrz1ZuYfTMArxrB6tPwhiTd2bUYgux8n2liuKT0c7Hdg2KeyAuLEnY8Hq2CJuqpXfVrb3ASWQlDoUwDzQXbonR&X-Amz-Signature=19730b8de2f5cd809d9c82a6f9258ecfa01570082639b419c9931159d92be541&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
