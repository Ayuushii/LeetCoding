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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFEHZ4BH%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083408Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwhfv7G%2BYjwzEtezdCoS8CKcLQt22yE%2Fxzf2nZVIaO3AiAMgAILVZgRkWIUqzmvxrJy8TIvw77e4MS7MuNSm8NUMSr%2FAwhgEAAaDDYzNzQyMzE4MzgwNSIMJdNnvFcZu%2FiZ5GlYKtwDImxHl5yOmJhsFzJxcaGkLcmGklZJvvC8OPZemnL9JFKgwc0ehy1PNp%2F5E2N3K%2Bsq9z4JG%2BuSgw0AkXIyLVg3slNV%2Ff05MFSR67fl3wpM6TuRY910ROBGM8Hc1fdfy%2BLl%2F%2Ft4OlhsDUJJngDwAC%2Bt2%2Fi7scAv6AoRyJuJ64ShSnsJzMA4DXHYhOfEgVt5pD8oTUl7dHTH3wk0kR67ulZyLPpXunz%2F7eAukDP9AtKUzU2yTRHcZMHWwFKFc6tEwJUDLdgEgD0jEv3Xkb3snguO4bEbic5S7XN2nlcGQFy6Cjqz%2FmgqoBSDN7yjzw%2F%2BOzgUvd%2BttsfWLAKAyp5H4H905BuKpaiwYJEoBt3eYc4d2MIx9KN5tfLH1DotmsZUatWGKX5GdpLhMmIdK06OREOHiK6%2BzlL%2BdUfEZIGhup8WjHjOkFR%2BddH6C3uXUFny8uCnYAN7yB2ItynGuKz0pla%2BziMVV4XXSLRQ%2FpRmUbu8GURoFhpxrOWnNDkHP%2BY1P9QhDex2kxfsz3sr4Yab7TOnIFlVuZxHit%2B6c6tb%2F8zMIZ5R5R%2BTQ3sLSOhtJp%2BJkj1%2FSRRB9jIkCwv2Wp%2BSdFoJEdmr9fgG1GTn6CpP1%2Bunl1Q4fIJ7g%2FzP7IvARcAwnqL%2BzQY6pgE84czKlRSnRX15vTm%2FdmTh7MrTaxUMqDd5oFCVUL6o4w73bYhVo8F6X%2B6q1Tz8DjfiZO8Y59W7BHsdYZGMFT%2FHmjqGmUmqdwpD8mbe2TolYDpuPgCVCOivQmypemv4ObC5Nq39g6RumKVB61uZJr7m9KgmMzT5BPpXHcPr4e65D7djH9HMIS%2Fqv9glM4Z0E%2F86aOiEfn4FUCrcmRGLhj53DY3TFZxf&X-Amz-Signature=0cd974a34710c3d4f7001b59d838522b3075770ea2a1160e6f4a6016396d38bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFEHZ4BH%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083408Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwhfv7G%2BYjwzEtezdCoS8CKcLQt22yE%2Fxzf2nZVIaO3AiAMgAILVZgRkWIUqzmvxrJy8TIvw77e4MS7MuNSm8NUMSr%2FAwhgEAAaDDYzNzQyMzE4MzgwNSIMJdNnvFcZu%2FiZ5GlYKtwDImxHl5yOmJhsFzJxcaGkLcmGklZJvvC8OPZemnL9JFKgwc0ehy1PNp%2F5E2N3K%2Bsq9z4JG%2BuSgw0AkXIyLVg3slNV%2Ff05MFSR67fl3wpM6TuRY910ROBGM8Hc1fdfy%2BLl%2F%2Ft4OlhsDUJJngDwAC%2Bt2%2Fi7scAv6AoRyJuJ64ShSnsJzMA4DXHYhOfEgVt5pD8oTUl7dHTH3wk0kR67ulZyLPpXunz%2F7eAukDP9AtKUzU2yTRHcZMHWwFKFc6tEwJUDLdgEgD0jEv3Xkb3snguO4bEbic5S7XN2nlcGQFy6Cjqz%2FmgqoBSDN7yjzw%2F%2BOzgUvd%2BttsfWLAKAyp5H4H905BuKpaiwYJEoBt3eYc4d2MIx9KN5tfLH1DotmsZUatWGKX5GdpLhMmIdK06OREOHiK6%2BzlL%2BdUfEZIGhup8WjHjOkFR%2BddH6C3uXUFny8uCnYAN7yB2ItynGuKz0pla%2BziMVV4XXSLRQ%2FpRmUbu8GURoFhpxrOWnNDkHP%2BY1P9QhDex2kxfsz3sr4Yab7TOnIFlVuZxHit%2B6c6tb%2F8zMIZ5R5R%2BTQ3sLSOhtJp%2BJkj1%2FSRRB9jIkCwv2Wp%2BSdFoJEdmr9fgG1GTn6CpP1%2Bunl1Q4fIJ7g%2FzP7IvARcAwnqL%2BzQY6pgE84czKlRSnRX15vTm%2FdmTh7MrTaxUMqDd5oFCVUL6o4w73bYhVo8F6X%2B6q1Tz8DjfiZO8Y59W7BHsdYZGMFT%2FHmjqGmUmqdwpD8mbe2TolYDpuPgCVCOivQmypemv4ObC5Nq39g6RumKVB61uZJr7m9KgmMzT5BPpXHcPr4e65D7djH9HMIS%2Fqv9glM4Z0E%2F86aOiEfn4FUCrcmRGLhj53DY3TFZxf&X-Amz-Signature=f672e3cd7221f44c4da25ab620b0f1e066c14c27c7975168be07ba6a999f0ecf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZFEHZ4BH%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083408Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBwhfv7G%2BYjwzEtezdCoS8CKcLQt22yE%2Fxzf2nZVIaO3AiAMgAILVZgRkWIUqzmvxrJy8TIvw77e4MS7MuNSm8NUMSr%2FAwhgEAAaDDYzNzQyMzE4MzgwNSIMJdNnvFcZu%2FiZ5GlYKtwDImxHl5yOmJhsFzJxcaGkLcmGklZJvvC8OPZemnL9JFKgwc0ehy1PNp%2F5E2N3K%2Bsq9z4JG%2BuSgw0AkXIyLVg3slNV%2Ff05MFSR67fl3wpM6TuRY910ROBGM8Hc1fdfy%2BLl%2F%2Ft4OlhsDUJJngDwAC%2Bt2%2Fi7scAv6AoRyJuJ64ShSnsJzMA4DXHYhOfEgVt5pD8oTUl7dHTH3wk0kR67ulZyLPpXunz%2F7eAukDP9AtKUzU2yTRHcZMHWwFKFc6tEwJUDLdgEgD0jEv3Xkb3snguO4bEbic5S7XN2nlcGQFy6Cjqz%2FmgqoBSDN7yjzw%2F%2BOzgUvd%2BttsfWLAKAyp5H4H905BuKpaiwYJEoBt3eYc4d2MIx9KN5tfLH1DotmsZUatWGKX5GdpLhMmIdK06OREOHiK6%2BzlL%2BdUfEZIGhup8WjHjOkFR%2BddH6C3uXUFny8uCnYAN7yB2ItynGuKz0pla%2BziMVV4XXSLRQ%2FpRmUbu8GURoFhpxrOWnNDkHP%2BY1P9QhDex2kxfsz3sr4Yab7TOnIFlVuZxHit%2B6c6tb%2F8zMIZ5R5R%2BTQ3sLSOhtJp%2BJkj1%2FSRRB9jIkCwv2Wp%2BSdFoJEdmr9fgG1GTn6CpP1%2Bunl1Q4fIJ7g%2FzP7IvARcAwnqL%2BzQY6pgE84czKlRSnRX15vTm%2FdmTh7MrTaxUMqDd5oFCVUL6o4w73bYhVo8F6X%2B6q1Tz8DjfiZO8Y59W7BHsdYZGMFT%2FHmjqGmUmqdwpD8mbe2TolYDpuPgCVCOivQmypemv4ObC5Nq39g6RumKVB61uZJr7m9KgmMzT5BPpXHcPr4e65D7djH9HMIS%2Fqv9glM4Z0E%2F86aOiEfn4FUCrcmRGLhj53DY3TFZxf&X-Amz-Signature=cefaaaa3e1d08611dfe5f26c5e3c51f87eeb9cef7112b38ef97258b9cdafdebe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMR7VBMI%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDPZJqpr%2Bhl4N1suFEJy9SHSrL2SBDVP11ZCuo8QGj3wwIgJCnJJKSp8tcYls0kdSzMWYV%2BeeHW%2FdjNp7Sw%2FcVGzt0q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDCmHKbqh0wNGLhptKyrcA3xSXbNMO1IPWuqjo6Fd5%2F%2BJbVW%2B%2FtyNzHrCVir9kzxoTRD74cqz38fit69i47oTD3kaaQybx1Lp%2F9L1j%2Fm0cCaZWD8XzrYAbap1Qxo2xgbwSg1hB3ytNrWO%2B89s1zyvJSNbdUT7evcovyoxGewjhk61ZY6otYuz4IUE5t9brJSsPuXAcAItTqPjaY1JFnR2vmXdbpOYLSU9s4zEz1F4TK4ep%2Fa7QIvQhSxKcRhBYCQckYZEsCKUp%2Bn%2FmzBwXnrhv9LJ3XJ%2BaxVGQH3QwqpCHKFkocIIR6btmmff95LiBgl9xCEcKpNDGSAnoqLQXEqpvuQEe60K8PnRA0UY2NT7zQZ3x296bsIzDyxCU4jgItG57NkKvQnyZC8ujn04fqM4RlbU6LeB6Ka7SNEds8kBoEZ8IcI2BJSS7ZRmQhRUDipI2bKPAJVuW0ON%2BxxYfScb1OyI0xGg%2FXkxU8nsNYlQznMXp8KS5%2Fao2%2FjIP1%2B8RAdiYYdHrl6juQVZOfzXo1gDtc6YRAeO9q3fdeAbhN7z8a3NYbPOM5bovaoiXzyNo%2BC5LgD7yd9la7nAR7fNdZo3n9WW4lk%2B9YLSNtl3LI%2BMBwaJAwsiGIYSlVJQ%2FHxxx546Hn9SY2KgOQQYJ7HIMKai%2Fs0GOqUBRhqDrGxdP8Q7qawoT9qePOzt4klcOdUjsmWx0WHRhBdEDSAs%2Bhf38zZcaaC4nEa0nhg1C3tKeJ0%2FfI3b1f89S42rQSWDtRblIE9tZIbt9YnF3ZXJn612vkvAoNj8nxINvkbwreOENWgb%2BHtWp3RryGGqhdRl6PbOCbPz22B%2FXQOv7SJE%2Bmy13GhmqGw5r5e0Wuhk%2Bt3Cl5NdcU89WJENQ77jzUtx&X-Amz-Signature=f05d47b0ef1c521fe8457d9cd27cf44749af7b7629e8dbd5d6e4159feadf0cf1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMR7VBMI%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDPZJqpr%2Bhl4N1suFEJy9SHSrL2SBDVP11ZCuo8QGj3wwIgJCnJJKSp8tcYls0kdSzMWYV%2BeeHW%2FdjNp7Sw%2FcVGzt0q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDCmHKbqh0wNGLhptKyrcA3xSXbNMO1IPWuqjo6Fd5%2F%2BJbVW%2B%2FtyNzHrCVir9kzxoTRD74cqz38fit69i47oTD3kaaQybx1Lp%2F9L1j%2Fm0cCaZWD8XzrYAbap1Qxo2xgbwSg1hB3ytNrWO%2B89s1zyvJSNbdUT7evcovyoxGewjhk61ZY6otYuz4IUE5t9brJSsPuXAcAItTqPjaY1JFnR2vmXdbpOYLSU9s4zEz1F4TK4ep%2Fa7QIvQhSxKcRhBYCQckYZEsCKUp%2Bn%2FmzBwXnrhv9LJ3XJ%2BaxVGQH3QwqpCHKFkocIIR6btmmff95LiBgl9xCEcKpNDGSAnoqLQXEqpvuQEe60K8PnRA0UY2NT7zQZ3x296bsIzDyxCU4jgItG57NkKvQnyZC8ujn04fqM4RlbU6LeB6Ka7SNEds8kBoEZ8IcI2BJSS7ZRmQhRUDipI2bKPAJVuW0ON%2BxxYfScb1OyI0xGg%2FXkxU8nsNYlQznMXp8KS5%2Fao2%2FjIP1%2B8RAdiYYdHrl6juQVZOfzXo1gDtc6YRAeO9q3fdeAbhN7z8a3NYbPOM5bovaoiXzyNo%2BC5LgD7yd9la7nAR7fNdZo3n9WW4lk%2B9YLSNtl3LI%2BMBwaJAwsiGIYSlVJQ%2FHxxx546Hn9SY2KgOQQYJ7HIMKai%2Fs0GOqUBRhqDrGxdP8Q7qawoT9qePOzt4klcOdUjsmWx0WHRhBdEDSAs%2Bhf38zZcaaC4nEa0nhg1C3tKeJ0%2FfI3b1f89S42rQSWDtRblIE9tZIbt9YnF3ZXJn612vkvAoNj8nxINvkbwreOENWgb%2BHtWp3RryGGqhdRl6PbOCbPz22B%2FXQOv7SJE%2Bmy13GhmqGw5r5e0Wuhk%2Bt3Cl5NdcU89WJENQ77jzUtx&X-Amz-Signature=011087b9c1c3dd82b55f961d6c3e072806b5448d33e7c3660a14cd12c8ff4702&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMR7VBMI%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDPZJqpr%2Bhl4N1suFEJy9SHSrL2SBDVP11ZCuo8QGj3wwIgJCnJJKSp8tcYls0kdSzMWYV%2BeeHW%2FdjNp7Sw%2FcVGzt0q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDCmHKbqh0wNGLhptKyrcA3xSXbNMO1IPWuqjo6Fd5%2F%2BJbVW%2B%2FtyNzHrCVir9kzxoTRD74cqz38fit69i47oTD3kaaQybx1Lp%2F9L1j%2Fm0cCaZWD8XzrYAbap1Qxo2xgbwSg1hB3ytNrWO%2B89s1zyvJSNbdUT7evcovyoxGewjhk61ZY6otYuz4IUE5t9brJSsPuXAcAItTqPjaY1JFnR2vmXdbpOYLSU9s4zEz1F4TK4ep%2Fa7QIvQhSxKcRhBYCQckYZEsCKUp%2Bn%2FmzBwXnrhv9LJ3XJ%2BaxVGQH3QwqpCHKFkocIIR6btmmff95LiBgl9xCEcKpNDGSAnoqLQXEqpvuQEe60K8PnRA0UY2NT7zQZ3x296bsIzDyxCU4jgItG57NkKvQnyZC8ujn04fqM4RlbU6LeB6Ka7SNEds8kBoEZ8IcI2BJSS7ZRmQhRUDipI2bKPAJVuW0ON%2BxxYfScb1OyI0xGg%2FXkxU8nsNYlQznMXp8KS5%2Fao2%2FjIP1%2B8RAdiYYdHrl6juQVZOfzXo1gDtc6YRAeO9q3fdeAbhN7z8a3NYbPOM5bovaoiXzyNo%2BC5LgD7yd9la7nAR7fNdZo3n9WW4lk%2B9YLSNtl3LI%2BMBwaJAwsiGIYSlVJQ%2FHxxx546Hn9SY2KgOQQYJ7HIMKai%2Fs0GOqUBRhqDrGxdP8Q7qawoT9qePOzt4klcOdUjsmWx0WHRhBdEDSAs%2Bhf38zZcaaC4nEa0nhg1C3tKeJ0%2FfI3b1f89S42rQSWDtRblIE9tZIbt9YnF3ZXJn612vkvAoNj8nxINvkbwreOENWgb%2BHtWp3RryGGqhdRl6PbOCbPz22B%2FXQOv7SJE%2Bmy13GhmqGw5r5e0Wuhk%2Bt3Cl5NdcU89WJENQ77jzUtx&X-Amz-Signature=18a95f9399999d8506c6b660e5c1cd126ee5ea62343061870c18ef1d1a182c62&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMR7VBMI%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDPZJqpr%2Bhl4N1suFEJy9SHSrL2SBDVP11ZCuo8QGj3wwIgJCnJJKSp8tcYls0kdSzMWYV%2BeeHW%2FdjNp7Sw%2FcVGzt0q%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDCmHKbqh0wNGLhptKyrcA3xSXbNMO1IPWuqjo6Fd5%2F%2BJbVW%2B%2FtyNzHrCVir9kzxoTRD74cqz38fit69i47oTD3kaaQybx1Lp%2F9L1j%2Fm0cCaZWD8XzrYAbap1Qxo2xgbwSg1hB3ytNrWO%2B89s1zyvJSNbdUT7evcovyoxGewjhk61ZY6otYuz4IUE5t9brJSsPuXAcAItTqPjaY1JFnR2vmXdbpOYLSU9s4zEz1F4TK4ep%2Fa7QIvQhSxKcRhBYCQckYZEsCKUp%2Bn%2FmzBwXnrhv9LJ3XJ%2BaxVGQH3QwqpCHKFkocIIR6btmmff95LiBgl9xCEcKpNDGSAnoqLQXEqpvuQEe60K8PnRA0UY2NT7zQZ3x296bsIzDyxCU4jgItG57NkKvQnyZC8ujn04fqM4RlbU6LeB6Ka7SNEds8kBoEZ8IcI2BJSS7ZRmQhRUDipI2bKPAJVuW0ON%2BxxYfScb1OyI0xGg%2FXkxU8nsNYlQznMXp8KS5%2Fao2%2FjIP1%2B8RAdiYYdHrl6juQVZOfzXo1gDtc6YRAeO9q3fdeAbhN7z8a3NYbPOM5bovaoiXzyNo%2BC5LgD7yd9la7nAR7fNdZo3n9WW4lk%2B9YLSNtl3LI%2BMBwaJAwsiGIYSlVJQ%2FHxxx546Hn9SY2KgOQQYJ7HIMKai%2Fs0GOqUBRhqDrGxdP8Q7qawoT9qePOzt4klcOdUjsmWx0WHRhBdEDSAs%2Bhf38zZcaaC4nEa0nhg1C3tKeJ0%2FfI3b1f89S42rQSWDtRblIE9tZIbt9YnF3ZXJn612vkvAoNj8nxINvkbwreOENWgb%2BHtWp3RryGGqhdRl6PbOCbPz22B%2FXQOv7SJE%2Bmy13GhmqGw5r5e0Wuhk%2Bt3Cl5NdcU89WJENQ77jzUtx&X-Amz-Signature=9f92ec92ddaa443800f804c93d94e83a28cce45a625632f63f17729601d37339&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WTHWU4H5%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHjAndarjIP9Di%2F4vBV0G1nmjkSdY%2BK%2BhcbqyAGgSDEcAiEAhKu9r4QL04yQxLPr99NeyitLpPrhVQw0cH%2Fdp%2Bicr9sq%2FwMIYBAAGgw2Mzc0MjMxODM4MDUiDFF5556PewUMB5qr7CrcA2YuzCZZNO7Mzw4Y%2FOOooWqtrDlvwO8vPspvWhmBLBNzw1LbkBY2%2Fjn5J6Kv82D0q4yDj3%2FGHecXa25nUlBS0mfBl5J8Rt3FYIpqUEzhI1d7c690pD%2FIqwHfToqcr6LCIa31u%2Bx47%2FdLX3aUZHt2wfo7eWzKVo05nIelw8hjJAypaR3v%2Fx%2FbJffwruXmHaq9wCtbm%2BXW%2Fq83%2BkwPPB%2B7rmae8itv3OCWc3cRnWx2%2F6qjE7z0wfIDIdAdNwXFZkAtw3vMw5xVbQqgnB0BDxUmnENYTnLk%2BJ2wi%2BK5MEI85KHE1aHLHMDTPBIJTqzLIJsqnVnrRNHENC1rqWIwtbKMwKMDNn%2Fj8scM6x%2FnakEohodoRN3zSu%2BO8kBNwsFdWbw4vfXHRuMCuejfpHgWUF6SKqn8yIGB3kYR4VDTbvDd056pQHayTwnG5uQ7JuEOQs%2BPzLXHkZwc7d6J21hXYEH1Yhx8duN7uTtJhfaOKXJkUfuj5MJMsJJMDKCTP6NVCsLTN5PzX%2Be7Q3hI7Zqx3GLV9PxSHsHB235OPNwcTmzX66QgDp5Gre0f0Sfb8gVqpuAeL8mtFGuFWHk137bNq1fg2SFBXu1bCZVLsA3JrcC9XdiVrpoyEImAYeyJ0hhEMO6i%2Fs0GOqUBtOAlkcNVhC2882kwb2a6BVZRbphayF6Feh8krYuFDGZAlphooVICgpE%2B9EihDDly22hDcPc9m3XsRVqprxpvn5PHBtIzWSivm4yHVyLeWD28oBQJ0gRx9KUKFY7X5j2Iij5wZZqqEr%2BYBYRuM1tA1AgXNC075eas5h%2FINkEP4p2isr5kNpZph28bZY6Z5Zu08l0D9lJ7pSzqz%2BHWOgx8MfLja5BU&X-Amz-Signature=581ecce5b8f18d34f32649570660bf0f6c618c2679451e13dd98499d5ac6527c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664VHFIQEL%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICTAruVDkiFbuL7eKZpK7ttDsu76Kz7APwQkSedKZAbWAiA2B7a4yrDMQJ67P1nP3YkhYv8lSqrv%2FSxBCbDLFWvCgCr%2FAwhgEAAaDDYzNzQyMzE4MzgwNSIMLzCE4Ajpxezc5qYLKtwD9sSVB7rtiPX%2B7caezDgCFJ0Ul2S0XoH%2Fqrynz6g8v48lt9cJQvmVH9I2zIplEydueVZ2OK2Xt2Q7i%2BC0KLZTSsJpuqTYzXVI%2FKit7%2ByhCjAPowWUFw%2FniqtBDca81aVDhtgdZAD77hD0iFBcm8e3JhJMK3OzTBPfH12woDjdkz61Y4tUvpW9I95eVZWA2C35J2FErNCHcuctgt0f6oXU1%2B0sFKTrzrWEmcH1XHHwOLkkSbY098mmD6MsuBWcR%2BcfgcHpb74BIX%2FxN3CUfR%2FnIPyy1cWDOXQWIgAYPQgrQUSRZTACPjIvncwdyWszoguvKcqCND1e3SU2PzbLabEOHNqy9yrcyE0mGiEif2JsyT9noKN8WuGuHtudMkUj87jZ22ptjyOGfVATTF4GqRN%2BMDi9NVbCUrow5m8jpJ3hi3lE49sCmrVSx4mWyp30hm1BWhQMIjPob947Ua8paUkqCe7%2B5WS43yIAkrxDFqGUkmYl%2FXRGET38Mqash9a%2F%2BMxejfgczxIXitUJCH9agwg7bTYNLzzBst2Xik%2BU9gaj%2BBAufXzReSMRXfz%2BRG%2FcLpmKLi0h%2BhNNkAY3DiOmaw4QongH%2FTGM%2BY3rXV9fLfIBxFjPLq4b8KK5orqJ0NswgKL%2BzQY6pgHMxNIfeeX0oH%2FeSsLtsx0TB38OB2b3G5GtMMiX8myHF41mgESrlsrjnPX71STOJT6F8RYUeiAF9PpKKltMMrmW2oj9tBi%2BYv0Lj%2FawwWY8TTUZ%2BNm4iDTKBbcjnjl1%2Fj%2Fu%2BaAAXGDxjZYLrpop13nbJF8IqZkEJLR8RLrf6zHJ6EOtSTUQYUjb12FqTK5MWJ8qzqqXGDyTf4ebxoxBfm7nNeyfFHTS&X-Amz-Signature=760e6d7ddc7e433a1d3f1d1819fa723149965adef4186fe74f362ec7288815f5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664VHFIQEL%2F20260322%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260322T083409Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICTAruVDkiFbuL7eKZpK7ttDsu76Kz7APwQkSedKZAbWAiA2B7a4yrDMQJ67P1nP3YkhYv8lSqrv%2FSxBCbDLFWvCgCr%2FAwhgEAAaDDYzNzQyMzE4MzgwNSIMLzCE4Ajpxezc5qYLKtwD9sSVB7rtiPX%2B7caezDgCFJ0Ul2S0XoH%2Fqrynz6g8v48lt9cJQvmVH9I2zIplEydueVZ2OK2Xt2Q7i%2BC0KLZTSsJpuqTYzXVI%2FKit7%2ByhCjAPowWUFw%2FniqtBDca81aVDhtgdZAD77hD0iFBcm8e3JhJMK3OzTBPfH12woDjdkz61Y4tUvpW9I95eVZWA2C35J2FErNCHcuctgt0f6oXU1%2B0sFKTrzrWEmcH1XHHwOLkkSbY098mmD6MsuBWcR%2BcfgcHpb74BIX%2FxN3CUfR%2FnIPyy1cWDOXQWIgAYPQgrQUSRZTACPjIvncwdyWszoguvKcqCND1e3SU2PzbLabEOHNqy9yrcyE0mGiEif2JsyT9noKN8WuGuHtudMkUj87jZ22ptjyOGfVATTF4GqRN%2BMDi9NVbCUrow5m8jpJ3hi3lE49sCmrVSx4mWyp30hm1BWhQMIjPob947Ua8paUkqCe7%2B5WS43yIAkrxDFqGUkmYl%2FXRGET38Mqash9a%2F%2BMxejfgczxIXitUJCH9agwg7bTYNLzzBst2Xik%2BU9gaj%2BBAufXzReSMRXfz%2BRG%2FcLpmKLi0h%2BhNNkAY3DiOmaw4QongH%2FTGM%2BY3rXV9fLfIBxFjPLq4b8KK5orqJ0NswgKL%2BzQY6pgHMxNIfeeX0oH%2FeSsLtsx0TB38OB2b3G5GtMMiX8myHF41mgESrlsrjnPX71STOJT6F8RYUeiAF9PpKKltMMrmW2oj9tBi%2BYv0Lj%2FawwWY8TTUZ%2BNm4iDTKBbcjnjl1%2Fj%2Fu%2BaAAXGDxjZYLrpop13nbJF8IqZkEJLR8RLrf6zHJ6EOtSTUQYUjb12FqTK5MWJ8qzqqXGDyTf4ebxoxBfm7nNeyfFHTS&X-Amz-Signature=520fa1470de2ef2516664475bc61ff4f5d393c91fc6344b5bdd4f1fbd332bde9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
