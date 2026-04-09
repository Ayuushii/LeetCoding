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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WHQDL7JK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090718Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEcaCXVzLXdlc3QtMiJGMEQCIDIAeHEtL1DB3GpJdosBtPrA5mkDrH6crIf4WZU3DLWHAiBKxJvNQkFsE88YbJbXWbz6DhTPsx8afTw8VeAPNrWguCr%2FAwgQEAAaDDYzNzQyMzE4MzgwNSIMJFqLTXKE8Jh7Z6GiKtwDR4ppqbp9DjVlYr0wgXsQE3%2B1o%2B6gK%2Bsvqv%2FUCvxQYDfHoMptyJOXF59QWq2HOtRl%2F8oUFV6dTj%2BNxwt6kxc9qRxBYiykAu0IkoxN9K1hsqZRDC2OeJig9oJhZzWNoKpsSj2xbeG4TaRkG0MH5IL7tK%2BMrx%2Bw6wVOUpWHlGDMToLNIOmMl1Ho5BjokUGot6vF7%2BAOKnKjgfUyrG6eLIIChmeNfvslwU6Oucv9r59pkvwqUISZUGFoXFjHj68scFgsUwSNocOgE7kh%2BlrJxhDvmcRf2klJVjgvWK1N5F5lsAe2P1xp4CMEE61MTYJYxS6UyQ9RZ9d39e5Jew8B0TrEzZlqTSadIx0jHbxdKJHY15FUrpd%2BHqkXJuUYbyhcd5UjdYmMQyFK5CTIm9EGY%2BLgSqt2l5qfS%2B%2BTYW1lbslDflPBVlBDAaMzznMKDkQKwqaa6oB8kvpi3gT5vNUfmybufga4VO35JSm2x7BPnFqAqx30lJSwlVG3x3H6WgHmHWfIXuC%2Ftk4fmcOZzqF04lVh7YnnWYgO2DuYMmrbivsAv19sc1TfotVWymwqqM4p8acsKiGctbDrocGXOEObgZBKWcic%2FSPVR43B4mK53WDsJLQ84BqMaM3F2gp4G%2Bww2KTdzgY6pgGjqMQWjZfcwbIzVOw4hf9XGXVBUHQCz%2Fc5SenH3pB1Ib8RPMJ3vNt6vPjUz8gfy2rWqQKjrV4x1RXWGYsNSC4SraTrAoD%2FeDpeefnp3uCv5QttJTaezlYN%2BdDpM%2F3PxtCC7G7bkLPbBffYSHFtkyqh%2BNynHuv8bVDhtL1YMI6iJ3y5f1F1emjBxnFsEKtHhbApyu%2FMM1P5wu1IfVmaFXxn979Ft3kj&X-Amz-Signature=caed2858e367d0c78efe997d5862a14a0314b696efc9dfef6c76ba49f7b4732e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WHQDL7JK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090718Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEcaCXVzLXdlc3QtMiJGMEQCIDIAeHEtL1DB3GpJdosBtPrA5mkDrH6crIf4WZU3DLWHAiBKxJvNQkFsE88YbJbXWbz6DhTPsx8afTw8VeAPNrWguCr%2FAwgQEAAaDDYzNzQyMzE4MzgwNSIMJFqLTXKE8Jh7Z6GiKtwDR4ppqbp9DjVlYr0wgXsQE3%2B1o%2B6gK%2Bsvqv%2FUCvxQYDfHoMptyJOXF59QWq2HOtRl%2F8oUFV6dTj%2BNxwt6kxc9qRxBYiykAu0IkoxN9K1hsqZRDC2OeJig9oJhZzWNoKpsSj2xbeG4TaRkG0MH5IL7tK%2BMrx%2Bw6wVOUpWHlGDMToLNIOmMl1Ho5BjokUGot6vF7%2BAOKnKjgfUyrG6eLIIChmeNfvslwU6Oucv9r59pkvwqUISZUGFoXFjHj68scFgsUwSNocOgE7kh%2BlrJxhDvmcRf2klJVjgvWK1N5F5lsAe2P1xp4CMEE61MTYJYxS6UyQ9RZ9d39e5Jew8B0TrEzZlqTSadIx0jHbxdKJHY15FUrpd%2BHqkXJuUYbyhcd5UjdYmMQyFK5CTIm9EGY%2BLgSqt2l5qfS%2B%2BTYW1lbslDflPBVlBDAaMzznMKDkQKwqaa6oB8kvpi3gT5vNUfmybufga4VO35JSm2x7BPnFqAqx30lJSwlVG3x3H6WgHmHWfIXuC%2Ftk4fmcOZzqF04lVh7YnnWYgO2DuYMmrbivsAv19sc1TfotVWymwqqM4p8acsKiGctbDrocGXOEObgZBKWcic%2FSPVR43B4mK53WDsJLQ84BqMaM3F2gp4G%2Bww2KTdzgY6pgGjqMQWjZfcwbIzVOw4hf9XGXVBUHQCz%2Fc5SenH3pB1Ib8RPMJ3vNt6vPjUz8gfy2rWqQKjrV4x1RXWGYsNSC4SraTrAoD%2FeDpeefnp3uCv5QttJTaezlYN%2BdDpM%2F3PxtCC7G7bkLPbBffYSHFtkyqh%2BNynHuv8bVDhtL1YMI6iJ3y5f1F1emjBxnFsEKtHhbApyu%2FMM1P5wu1IfVmaFXxn979Ft3kj&X-Amz-Signature=46ba41ffa788586df15a5f7221c0aebe2d4c7e561d336169a8a0ac52d6187261&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WHQDL7JK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090718Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEcaCXVzLXdlc3QtMiJGMEQCIDIAeHEtL1DB3GpJdosBtPrA5mkDrH6crIf4WZU3DLWHAiBKxJvNQkFsE88YbJbXWbz6DhTPsx8afTw8VeAPNrWguCr%2FAwgQEAAaDDYzNzQyMzE4MzgwNSIMJFqLTXKE8Jh7Z6GiKtwDR4ppqbp9DjVlYr0wgXsQE3%2B1o%2B6gK%2Bsvqv%2FUCvxQYDfHoMptyJOXF59QWq2HOtRl%2F8oUFV6dTj%2BNxwt6kxc9qRxBYiykAu0IkoxN9K1hsqZRDC2OeJig9oJhZzWNoKpsSj2xbeG4TaRkG0MH5IL7tK%2BMrx%2Bw6wVOUpWHlGDMToLNIOmMl1Ho5BjokUGot6vF7%2BAOKnKjgfUyrG6eLIIChmeNfvslwU6Oucv9r59pkvwqUISZUGFoXFjHj68scFgsUwSNocOgE7kh%2BlrJxhDvmcRf2klJVjgvWK1N5F5lsAe2P1xp4CMEE61MTYJYxS6UyQ9RZ9d39e5Jew8B0TrEzZlqTSadIx0jHbxdKJHY15FUrpd%2BHqkXJuUYbyhcd5UjdYmMQyFK5CTIm9EGY%2BLgSqt2l5qfS%2B%2BTYW1lbslDflPBVlBDAaMzznMKDkQKwqaa6oB8kvpi3gT5vNUfmybufga4VO35JSm2x7BPnFqAqx30lJSwlVG3x3H6WgHmHWfIXuC%2Ftk4fmcOZzqF04lVh7YnnWYgO2DuYMmrbivsAv19sc1TfotVWymwqqM4p8acsKiGctbDrocGXOEObgZBKWcic%2FSPVR43B4mK53WDsJLQ84BqMaM3F2gp4G%2Bww2KTdzgY6pgGjqMQWjZfcwbIzVOw4hf9XGXVBUHQCz%2Fc5SenH3pB1Ib8RPMJ3vNt6vPjUz8gfy2rWqQKjrV4x1RXWGYsNSC4SraTrAoD%2FeDpeefnp3uCv5QttJTaezlYN%2BdDpM%2F3PxtCC7G7bkLPbBffYSHFtkyqh%2BNynHuv8bVDhtL1YMI6iJ3y5f1F1emjBxnFsEKtHhbApyu%2FMM1P5wu1IfVmaFXxn979Ft3kj&X-Amz-Signature=719f2542f2b52287633aa151aee0a26c38378edb9b397770e3479db9eaca1221&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYTKJBEK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090719Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDfOiqrILwpToKDIAqOapZk6EXG4am0Vbxh%2BPDMi1wzeAIgWypaRI1zlegVGMmzA%2FDHheyJ2wxq%2BmIXs10%2F%2Fj8l3Hwq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDPJWkjRd40nGGv%2B%2ByyrcA26jqH15CKuuPuDXraTgIIokk%2FLi0FXke%2FmMZgePv7AZsCmBXYNgQrJtseW85FklvkLY0EehPjejnHEK3rwxniIe%2B3krufYszfwiRD97UoCF8wAlLD0QuK%2F%2F2%2BcQI%2FVapEMcJaLuGH16bUX5uJ1JtrI9xkIiaMQe%2BLa%2F4y1SQMdwvFqdia9c%2FtHn4nrHfIjRW4017hw1mtTCyZ5MrI2fj%2F9xeEeu55tihWSNfgl0VjBCvB8CN2RSA6rr3jAUwFuLQLY%2BIlSn1QArf1mBV%2BB4MXRFiD1zxKc%2FaPXMNbUzU%2BxifKpBLX328X7NEGkfop18g6ARcsM5H6J6JrsfaeaP4Eo4Q6JX4GXpMMpPXJ%2FbtPHcS2hsyprS6fnjrFafdw2kXYG1ooAZU6LI8N02pr%2FTqp0gy6AG%2FxUH4tpqf%2FvguM8rRLj8%2FMazo7DydPBmNi2srvAhCOgHzIoACmlUliKqIko1dKRuk8dIkT1ysgyK0LwwO4ykiwfcbKBS015m7TgvM%2FjTyD5sq63%2FSxJLSXPccbhWXduv6EMMONb8wmBj6KOru%2FNDLxPp7rX0gFwhbJRfuIfOSbdTxvWIcqkwW9xlvJoVAgYOt2DSEmCBXbck%2FeH%2FkscnLsgOpqP%2BaVrcMOil3c4GOqUBlfbxRUynroZ7U4yr%2FRsmXhkJw%2FxJNVxD12cL6KZkQIu0vi3CIZd8mgruw5XIwFYVG8%2BrOBOwHo8M57vqLNQWHJ5BkYvQIiRGnOKAjlgCeR%2FseS%2FUWYFLl8I4saqptki2Asp%2FgF1evDFus1O0EXwY4TUqyzI2pSYSHOnZV8ocPwIG%2BIz1pjdyoPPh7CIKyygZ9YPRqc8FVVbKcPAOcek8oK1o23LW&X-Amz-Signature=ed5e2c8728cbee1356cb40b4aae123c9d2aa2b17770ce7d9d5b08759d73cf4ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYTKJBEK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090719Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDfOiqrILwpToKDIAqOapZk6EXG4am0Vbxh%2BPDMi1wzeAIgWypaRI1zlegVGMmzA%2FDHheyJ2wxq%2BmIXs10%2F%2Fj8l3Hwq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDPJWkjRd40nGGv%2B%2ByyrcA26jqH15CKuuPuDXraTgIIokk%2FLi0FXke%2FmMZgePv7AZsCmBXYNgQrJtseW85FklvkLY0EehPjejnHEK3rwxniIe%2B3krufYszfwiRD97UoCF8wAlLD0QuK%2F%2F2%2BcQI%2FVapEMcJaLuGH16bUX5uJ1JtrI9xkIiaMQe%2BLa%2F4y1SQMdwvFqdia9c%2FtHn4nrHfIjRW4017hw1mtTCyZ5MrI2fj%2F9xeEeu55tihWSNfgl0VjBCvB8CN2RSA6rr3jAUwFuLQLY%2BIlSn1QArf1mBV%2BB4MXRFiD1zxKc%2FaPXMNbUzU%2BxifKpBLX328X7NEGkfop18g6ARcsM5H6J6JrsfaeaP4Eo4Q6JX4GXpMMpPXJ%2FbtPHcS2hsyprS6fnjrFafdw2kXYG1ooAZU6LI8N02pr%2FTqp0gy6AG%2FxUH4tpqf%2FvguM8rRLj8%2FMazo7DydPBmNi2srvAhCOgHzIoACmlUliKqIko1dKRuk8dIkT1ysgyK0LwwO4ykiwfcbKBS015m7TgvM%2FjTyD5sq63%2FSxJLSXPccbhWXduv6EMMONb8wmBj6KOru%2FNDLxPp7rX0gFwhbJRfuIfOSbdTxvWIcqkwW9xlvJoVAgYOt2DSEmCBXbck%2FeH%2FkscnLsgOpqP%2BaVrcMOil3c4GOqUBlfbxRUynroZ7U4yr%2FRsmXhkJw%2FxJNVxD12cL6KZkQIu0vi3CIZd8mgruw5XIwFYVG8%2BrOBOwHo8M57vqLNQWHJ5BkYvQIiRGnOKAjlgCeR%2FseS%2FUWYFLl8I4saqptki2Asp%2FgF1evDFus1O0EXwY4TUqyzI2pSYSHOnZV8ocPwIG%2BIz1pjdyoPPh7CIKyygZ9YPRqc8FVVbKcPAOcek8oK1o23LW&X-Amz-Signature=ff4d7b30c39a6c155bc213a8257f9a1e0c6c2f8011e01353b0f8b18d88462e36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYTKJBEK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090719Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDfOiqrILwpToKDIAqOapZk6EXG4am0Vbxh%2BPDMi1wzeAIgWypaRI1zlegVGMmzA%2FDHheyJ2wxq%2BmIXs10%2F%2Fj8l3Hwq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDPJWkjRd40nGGv%2B%2ByyrcA26jqH15CKuuPuDXraTgIIokk%2FLi0FXke%2FmMZgePv7AZsCmBXYNgQrJtseW85FklvkLY0EehPjejnHEK3rwxniIe%2B3krufYszfwiRD97UoCF8wAlLD0QuK%2F%2F2%2BcQI%2FVapEMcJaLuGH16bUX5uJ1JtrI9xkIiaMQe%2BLa%2F4y1SQMdwvFqdia9c%2FtHn4nrHfIjRW4017hw1mtTCyZ5MrI2fj%2F9xeEeu55tihWSNfgl0VjBCvB8CN2RSA6rr3jAUwFuLQLY%2BIlSn1QArf1mBV%2BB4MXRFiD1zxKc%2FaPXMNbUzU%2BxifKpBLX328X7NEGkfop18g6ARcsM5H6J6JrsfaeaP4Eo4Q6JX4GXpMMpPXJ%2FbtPHcS2hsyprS6fnjrFafdw2kXYG1ooAZU6LI8N02pr%2FTqp0gy6AG%2FxUH4tpqf%2FvguM8rRLj8%2FMazo7DydPBmNi2srvAhCOgHzIoACmlUliKqIko1dKRuk8dIkT1ysgyK0LwwO4ykiwfcbKBS015m7TgvM%2FjTyD5sq63%2FSxJLSXPccbhWXduv6EMMONb8wmBj6KOru%2FNDLxPp7rX0gFwhbJRfuIfOSbdTxvWIcqkwW9xlvJoVAgYOt2DSEmCBXbck%2FeH%2FkscnLsgOpqP%2BaVrcMOil3c4GOqUBlfbxRUynroZ7U4yr%2FRsmXhkJw%2FxJNVxD12cL6KZkQIu0vi3CIZd8mgruw5XIwFYVG8%2BrOBOwHo8M57vqLNQWHJ5BkYvQIiRGnOKAjlgCeR%2FseS%2FUWYFLl8I4saqptki2Asp%2FgF1evDFus1O0EXwY4TUqyzI2pSYSHOnZV8ocPwIG%2BIz1pjdyoPPh7CIKyygZ9YPRqc8FVVbKcPAOcek8oK1o23LW&X-Amz-Signature=fbaa104662f25bed3ee270c5e1787632aaeef9f60c93401533f0fb1ddd78018c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XYTKJBEK%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090719Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDfOiqrILwpToKDIAqOapZk6EXG4am0Vbxh%2BPDMi1wzeAIgWypaRI1zlegVGMmzA%2FDHheyJ2wxq%2BmIXs10%2F%2Fj8l3Hwq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDPJWkjRd40nGGv%2B%2ByyrcA26jqH15CKuuPuDXraTgIIokk%2FLi0FXke%2FmMZgePv7AZsCmBXYNgQrJtseW85FklvkLY0EehPjejnHEK3rwxniIe%2B3krufYszfwiRD97UoCF8wAlLD0QuK%2F%2F2%2BcQI%2FVapEMcJaLuGH16bUX5uJ1JtrI9xkIiaMQe%2BLa%2F4y1SQMdwvFqdia9c%2FtHn4nrHfIjRW4017hw1mtTCyZ5MrI2fj%2F9xeEeu55tihWSNfgl0VjBCvB8CN2RSA6rr3jAUwFuLQLY%2BIlSn1QArf1mBV%2BB4MXRFiD1zxKc%2FaPXMNbUzU%2BxifKpBLX328X7NEGkfop18g6ARcsM5H6J6JrsfaeaP4Eo4Q6JX4GXpMMpPXJ%2FbtPHcS2hsyprS6fnjrFafdw2kXYG1ooAZU6LI8N02pr%2FTqp0gy6AG%2FxUH4tpqf%2FvguM8rRLj8%2FMazo7DydPBmNi2srvAhCOgHzIoACmlUliKqIko1dKRuk8dIkT1ysgyK0LwwO4ykiwfcbKBS015m7TgvM%2FjTyD5sq63%2FSxJLSXPccbhWXduv6EMMONb8wmBj6KOru%2FNDLxPp7rX0gFwhbJRfuIfOSbdTxvWIcqkwW9xlvJoVAgYOt2DSEmCBXbck%2FeH%2FkscnLsgOpqP%2BaVrcMOil3c4GOqUBlfbxRUynroZ7U4yr%2FRsmXhkJw%2FxJNVxD12cL6KZkQIu0vi3CIZd8mgruw5XIwFYVG8%2BrOBOwHo8M57vqLNQWHJ5BkYvQIiRGnOKAjlgCeR%2FseS%2FUWYFLl8I4saqptki2Asp%2FgF1evDFus1O0EXwY4TUqyzI2pSYSHOnZV8ocPwIG%2BIz1pjdyoPPh7CIKyygZ9YPRqc8FVVbKcPAOcek8oK1o23LW&X-Amz-Signature=839bff302649c444f41d7bd5d3c978fb1c06962a9d51d0064dbfff261a040cbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667BAFWYX7%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090720Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDpwR7R52XzukjmhObEvdma0ITVLdOonXRTgZtTwK0kRwIhAKnze0uz5MIR9PVeidLxpnKOFflTpPdEEhZj6fYhVBlGKv8DCBAQABoMNjM3NDIzMTgzODA1Igz1kljgadrFT9et5zgq3ANhijSmbiU97miKH9S7MGxfg0yEfelVepYhyxFqwg2Fj63%2FPVZFIGWN9vz7AlZSCvgljEInIFNGq1ocvkzDHyHsLh84VdgW%2BS0TfhWMBgFbbJBva47aptOhQecFIcsiRepI7GP9OYFXipaoosyK9ymrT98W8ZYgkyd8mwSfIaQN6Bm30Gcj36yHl%2FmEheKbXOBg45nI5J2bhRsoyGj6ZMxJQpOxLd1uyo5ys3N9Q3e3Czj3CdtytQ5afRyJP3HTVNBvRqwvd3qgp0y51yXZEJuesQRGc5FU5pXszh467SFtbq6Kyx3ht%2B7miJhpEwIXzSDDI2qG5%2BW%2B8dT%2BHEB5txkYjin8cAPU%2Fix71LOj2c%2FhaTpPid1RLvWgpjXe3nBn3T0XHTOhDj00E58FDZcpaYjggIk27N2ym9LYbQy4XBn5TYjXy19D4f5fZ8p3gZ60ha7No%2BeEH3kXWfFuEDweJcRDz1wtnjOJxnuRtmxSeKBfUY7%2F5v%2Fc%2FlhDcZwSlXi10ONb8MO%2FmtJ%2F9iUY6hIWxTkRlniX4MzgpicXRcPDVywr0X1Ag072h7O8Pc%2FntInMKA65arZK%2BhQoLEz52%2FJeaeBLtrez9T5SyULzBGpl7xVWLF3AFPua0WDWn%2BOAizDApd3OBjqkAccJpLmFJjqcnL9%2BlBrHuntfPOO2CdHLHnggNPtn3mzslW8gY7rMEhuf8QZ8fWPtXFo6bv83zxAZP4dxBaicZ8dUilkYdMAljZbbfgI12C2DqsJW0HDPzmCZB%2FOItDLdjoiyO6ztsdGMIqI2U5pTXSyoI8qEwlqu5zZMkvhAFudrhOJyoTiUPCpSEu4PYSwOyOWVGRf9tkravM5NPuS4bfYUorvR&X-Amz-Signature=be848b5d10aef3ab7551e2fd9fae3e6c23a1a27fb81df6d4d8d284211b4eb080&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YWGKVLWR%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQCfw8OEDkJ9AlUuzCTeI4QS08WyzLPt9mjBRxR60k54ugIgVNM4ZxyaaQ1NDnJcZ753nYpnqOAjpCYdU%2FhzXRzYT3Qq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDN%2BnAZQuYMnQc5sVRircAyzFMU6wOmyvgnUftJqi1yB%2BkYY64G1k5mFv3TeGOvMx9YmyXKiILhlRUqR4Jb1NGduUKqwkstjMeASAgfdwJKpqZm1aIp7edbincxBi%2BB6e13053J9JyO1%2F7PbQZElk5OUQW8YPoL1cu8gqCO6o0eay2jhiYhcTVJyG0Wv%2BPihc1FD21qpioo5RDnsqJxCT1v4ZslmaR955X03McfNsOuTNB5JwilA8DVkZdHvcpniyGwADnFYtSfAhoFCoX1bcf002HE7pYujlqZ%2BInt%2Fey0yMlebia%2BCjvdoaU85lKHkHeUNFVZOmW5Na%2FofPBY7APlCcy5%2FOgU%2Fuk7N1yVpp%2BYINSBq2ircnUjKySO4Vja4d2AtyzKDJQg3JF0%2Fng2C9NdHRYdWRLL674RGSGKsSPKxjtdXvI6xMiNpd%2FFgx0IJtGlPR9vlQuy0nVT3jcxu1l8%2FTXExPfJWN0%2Fhhn4khSjQzQskc1tAdAadAAhNypxnl2%2FLOjFk6akxBE%2BkeYFV4qfN%2Fi0SkNlHfGUaP8QikDuRguMOE3EDvBQ1NRQ5ADmSfCl2hMbraYn3bXGD%2Bybd7qlSmYrWNmcw9EdbHrxkEABGsGx9nwUZpVX05LiKPZCMzxNeKlAarNslbn5grMO2l3c4GOqUB%2FfynG%2Bc6Wc8AdbjWspfHIxTaPBRm7Ihn4OaGwpYrA4sl6TzKP26aUQP8G5YsKoqxgVSEWoSsS2TuD%2FO9wOS%2FL%2Bx7cDlLLyFNtwyd3BJdP7767AsR8%2FJQ9T1p9Vtw3ZFVwMoVist56nYuIYFzBSvMNfYQuyPk8UmN%2B6JtMhmbnwN3e2bQpIQWpVtQLpiK9QuxZyxYCKhGWWzVMKlwK7fGaF9WIAhS&X-Amz-Signature=ab3f8bc22275a21d1202b9010d5ac1c57fc3ed5578971ce545bf67c5525d7f62&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YWGKVLWR%2F20260409%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260409T090721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQCfw8OEDkJ9AlUuzCTeI4QS08WyzLPt9mjBRxR60k54ugIgVNM4ZxyaaQ1NDnJcZ753nYpnqOAjpCYdU%2FhzXRzYT3Qq%2FwMIEBAAGgw2Mzc0MjMxODM4MDUiDN%2BnAZQuYMnQc5sVRircAyzFMU6wOmyvgnUftJqi1yB%2BkYY64G1k5mFv3TeGOvMx9YmyXKiILhlRUqR4Jb1NGduUKqwkstjMeASAgfdwJKpqZm1aIp7edbincxBi%2BB6e13053J9JyO1%2F7PbQZElk5OUQW8YPoL1cu8gqCO6o0eay2jhiYhcTVJyG0Wv%2BPihc1FD21qpioo5RDnsqJxCT1v4ZslmaR955X03McfNsOuTNB5JwilA8DVkZdHvcpniyGwADnFYtSfAhoFCoX1bcf002HE7pYujlqZ%2BInt%2Fey0yMlebia%2BCjvdoaU85lKHkHeUNFVZOmW5Na%2FofPBY7APlCcy5%2FOgU%2Fuk7N1yVpp%2BYINSBq2ircnUjKySO4Vja4d2AtyzKDJQg3JF0%2Fng2C9NdHRYdWRLL674RGSGKsSPKxjtdXvI6xMiNpd%2FFgx0IJtGlPR9vlQuy0nVT3jcxu1l8%2FTXExPfJWN0%2Fhhn4khSjQzQskc1tAdAadAAhNypxnl2%2FLOjFk6akxBE%2BkeYFV4qfN%2Fi0SkNlHfGUaP8QikDuRguMOE3EDvBQ1NRQ5ADmSfCl2hMbraYn3bXGD%2Bybd7qlSmYrWNmcw9EdbHrxkEABGsGx9nwUZpVX05LiKPZCMzxNeKlAarNslbn5grMO2l3c4GOqUB%2FfynG%2Bc6Wc8AdbjWspfHIxTaPBRm7Ihn4OaGwpYrA4sl6TzKP26aUQP8G5YsKoqxgVSEWoSsS2TuD%2FO9wOS%2FL%2Bx7cDlLLyFNtwyd3BJdP7767AsR8%2FJQ9T1p9Vtw3ZFVwMoVist56nYuIYFzBSvMNfYQuyPk8UmN%2B6JtMhmbnwN3e2bQpIQWpVtQLpiK9QuxZyxYCKhGWWzVMKlwK7fGaF9WIAhS&X-Amz-Signature=a4bd486f9d13162a7bfa9a8c0f27cc5f8ef0fc245784890f2f232dd701ea4d17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
