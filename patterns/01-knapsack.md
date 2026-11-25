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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2UA3B5S%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDBX6gCvZjU8iT%2Bo5pANcBTfhy0pWP3pFHMkjmZEJkw9QIgd4tDP9Lweucin6du6mLNTeZ8UJ3FKb5J3kXRBJm1lucqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPrJO0mPsWaPWrkLoCrcA5GQvG5gGQtyaMp2EGW7XMKExnd2pa1wzDA56eJSGWuIj7GZstaNFUYbe%2B6kH4anrywMvQF0IY%2Fa6lzCFGqqgzSLHCTCEG%2FNkffufs799iLVqE01EZiNiTRJIC4RCBiGTTVDzrFYY6vlsmpDDGh010vMwHAEV15TI0pWNq%2FMtEfANkKWnq9EJ5uCH%2BCchPtZ0leBvvIWYhcHubPJH0kbImB3KhsQjf3DBKAAtc6NRD%2F2ZQXlU2%2B%2FvI6bSNlQgs6ZtqpPL2Opa7A3ijC1RScfcjhK9HtSxCoZ5s4EKZISS7izgk4TTs%2FMRV7RUHtKP9knlA6MoHtZRKLcQ0MjwFGV3%2BZK3FfIEoWF1WB4%2BUxCOOmwn4IiI4TJb6UxV7l91hjibYHf5d8kaMsD%2FCDcDcVwVy3noDWJs9qTCs5IrNz4xbWYey9RQXLNpaTESf4bqGYzKjLaWTNWmhJKLA6TQ%2FgXTll%2BzDx3UXfXXExjHvIMYN70WOf9%2FRRkSwT69UkeW5Mf9S3Ec%2BJGGLxO70El3HQlgGKB8Hgqqc6zjIwla9%2FE5jKMimM3H%2BtEG%2FrgnXCHY3o8PFsI7gDjLeVFQ9%2F3owKxARrSyotFYPuCPblU%2BNNAR69lTzYkdaENaBfeU2rXMMjNnNgGOqUBf2fS6JnIFA954GxsN4pTC%2FEqdTQ2ofktwzQj3ziYKjg159tCvHIvSLjoP9%2BqRG5SqLER%2F9SIW81zOaj5Kftv2Fi2H23EdGmkwEJj2VvU1%2FrnJuTtTvDU7O8WXb2bYVznhpEIm9vlBjNujmMDqb%2BOgINinthG34ym%2BQFvttjrYD6BhWslFxWnqGupCGrrPXeYnjpMyO%2BcuMINXO0TcKNPoFa3QorY&X-Amz-Signature=3fd052aec9e582b6bab2117e11bf1c459fed189cd4336ba07cc949add6425b1d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2UA3B5S%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDBX6gCvZjU8iT%2Bo5pANcBTfhy0pWP3pFHMkjmZEJkw9QIgd4tDP9Lweucin6du6mLNTeZ8UJ3FKb5J3kXRBJm1lucqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPrJO0mPsWaPWrkLoCrcA5GQvG5gGQtyaMp2EGW7XMKExnd2pa1wzDA56eJSGWuIj7GZstaNFUYbe%2B6kH4anrywMvQF0IY%2Fa6lzCFGqqgzSLHCTCEG%2FNkffufs799iLVqE01EZiNiTRJIC4RCBiGTTVDzrFYY6vlsmpDDGh010vMwHAEV15TI0pWNq%2FMtEfANkKWnq9EJ5uCH%2BCchPtZ0leBvvIWYhcHubPJH0kbImB3KhsQjf3DBKAAtc6NRD%2F2ZQXlU2%2B%2FvI6bSNlQgs6ZtqpPL2Opa7A3ijC1RScfcjhK9HtSxCoZ5s4EKZISS7izgk4TTs%2FMRV7RUHtKP9knlA6MoHtZRKLcQ0MjwFGV3%2BZK3FfIEoWF1WB4%2BUxCOOmwn4IiI4TJb6UxV7l91hjibYHf5d8kaMsD%2FCDcDcVwVy3noDWJs9qTCs5IrNz4xbWYey9RQXLNpaTESf4bqGYzKjLaWTNWmhJKLA6TQ%2FgXTll%2BzDx3UXfXXExjHvIMYN70WOf9%2FRRkSwT69UkeW5Mf9S3Ec%2BJGGLxO70El3HQlgGKB8Hgqqc6zjIwla9%2FE5jKMimM3H%2BtEG%2FrgnXCHY3o8PFsI7gDjLeVFQ9%2F3owKxARrSyotFYPuCPblU%2BNNAR69lTzYkdaENaBfeU2rXMMjNnNgGOqUBf2fS6JnIFA954GxsN4pTC%2FEqdTQ2ofktwzQj3ziYKjg159tCvHIvSLjoP9%2BqRG5SqLER%2F9SIW81zOaj5Kftv2Fi2H23EdGmkwEJj2VvU1%2FrnJuTtTvDU7O8WXb2bYVznhpEIm9vlBjNujmMDqb%2BOgINinthG34ym%2BQFvttjrYD6BhWslFxWnqGupCGrrPXeYnjpMyO%2BcuMINXO0TcKNPoFa3QorY&X-Amz-Signature=e96ad12f2255024932a62f8a6d8833dbfe15a04d4383cbf7829f76dd3c6b906a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2UA3B5S%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182549Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDBX6gCvZjU8iT%2Bo5pANcBTfhy0pWP3pFHMkjmZEJkw9QIgd4tDP9Lweucin6du6mLNTeZ8UJ3FKb5J3kXRBJm1lucqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPrJO0mPsWaPWrkLoCrcA5GQvG5gGQtyaMp2EGW7XMKExnd2pa1wzDA56eJSGWuIj7GZstaNFUYbe%2B6kH4anrywMvQF0IY%2Fa6lzCFGqqgzSLHCTCEG%2FNkffufs799iLVqE01EZiNiTRJIC4RCBiGTTVDzrFYY6vlsmpDDGh010vMwHAEV15TI0pWNq%2FMtEfANkKWnq9EJ5uCH%2BCchPtZ0leBvvIWYhcHubPJH0kbImB3KhsQjf3DBKAAtc6NRD%2F2ZQXlU2%2B%2FvI6bSNlQgs6ZtqpPL2Opa7A3ijC1RScfcjhK9HtSxCoZ5s4EKZISS7izgk4TTs%2FMRV7RUHtKP9knlA6MoHtZRKLcQ0MjwFGV3%2BZK3FfIEoWF1WB4%2BUxCOOmwn4IiI4TJb6UxV7l91hjibYHf5d8kaMsD%2FCDcDcVwVy3noDWJs9qTCs5IrNz4xbWYey9RQXLNpaTESf4bqGYzKjLaWTNWmhJKLA6TQ%2FgXTll%2BzDx3UXfXXExjHvIMYN70WOf9%2FRRkSwT69UkeW5Mf9S3Ec%2BJGGLxO70El3HQlgGKB8Hgqqc6zjIwla9%2FE5jKMimM3H%2BtEG%2FrgnXCHY3o8PFsI7gDjLeVFQ9%2F3owKxARrSyotFYPuCPblU%2BNNAR69lTzYkdaENaBfeU2rXMMjNnNgGOqUBf2fS6JnIFA954GxsN4pTC%2FEqdTQ2ofktwzQj3ziYKjg159tCvHIvSLjoP9%2BqRG5SqLER%2F9SIW81zOaj5Kftv2Fi2H23EdGmkwEJj2VvU1%2FrnJuTtTvDU7O8WXb2bYVznhpEIm9vlBjNujmMDqb%2BOgINinthG34ym%2BQFvttjrYD6BhWslFxWnqGupCGrrPXeYnjpMyO%2BcuMINXO0TcKNPoFa3QorY&X-Amz-Signature=28c2e18becae1415b8bd8d00f30a2aef8f9ee69e87f150f02e071f25eb362f3c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665HDKU6DT%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDuKJpMQb1ffVmtafCuq%2FIlVeXehX3hPdyyMEaJq%2BZnjAiAhaACt0vPzcYrwy9ZTmtjonK1SMxU0qn0jEusUFW4IRSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM9J%2Bx6hAX8eJ3qcNqKtwD0aFGZ6YJsjXc6Peq1J5pCCI84wEr0uFRJ1XJPxeCJ2N2eyftC4w2WAF%2B6jCehZGUM6qev%2B5By4hb0P6HUI2dVoNiBYfLaTpfueAGZVbiCW2gfUrBHZLzYXwn6qpc1uqtGS6diQnDjtS22Buirzys%2B10JR%2FmiTK4XOZVPnwrjs5CcmCpn0mZCoGLsIC6VUKCywARuINFrTCmjn%2BQeoOkUygVwQODOZ82gVfewlE6oxfMIq2oIAjJESjNDC4MinlECnEhOsFEcynLboT9IMSDlrcvMyTaLIIUisPzby0NN34IXL1V9TqcCAPsWbJ%2B6NrbRcHt163%2FnVo53H4x2HpO9jCBafuQkC8FGjK76t%2FWgWBK6x%2FRWy8BkUjZCRhewhOMgxJFKrNMUcVzTwXnj6qMenON4mL33rtu0LHK1tSSiwphQDxmzxa2wOLyt1cwneVWqtRrgBq0gouYa4Q827bvBzgaFsyHke8o3YJU0IcvTIXzpedCmyZb3hCIOx6wVCQ2Q%2FU9sRjuVmJ0PFj1ijERk9hBB2po5YPDv7Al332eY1MlkrHKe4jojfMTYLgLp%2FkTx0pOdy0oq5txpmTprfGlsBv5mNMFF5oS%2FbXLJ759faENkAo4OTbUZ0v0qREwwpM2c2AY6pgEGtlPrBKhYyulnmELjEWZ%2BEoUbj2EPkNn2Je3jcWchkI9CtTBjjC35noFfIe22vcMZbvrKPbcwZf0FM6dbGSWjls6ZjNKdm3PHIXtcnN89ojbqzDwNEFkIPdbf6r%2FnndPZOaVl3%2F%2B6uNzrL9JHaRiFf7Pqw1T6P0l2bu7AcFR0h0Zs%2F53u8rFlGoLzJuYX6DThDKVoQM%2BS2jyQUvD9CxjzgYE7oxkS&X-Amz-Signature=920c20179099dc02ac3adae12cc9a6b8f32dfe0137316dd4ecf82641153d3f17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665HDKU6DT%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDuKJpMQb1ffVmtafCuq%2FIlVeXehX3hPdyyMEaJq%2BZnjAiAhaACt0vPzcYrwy9ZTmtjonK1SMxU0qn0jEusUFW4IRSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM9J%2Bx6hAX8eJ3qcNqKtwD0aFGZ6YJsjXc6Peq1J5pCCI84wEr0uFRJ1XJPxeCJ2N2eyftC4w2WAF%2B6jCehZGUM6qev%2B5By4hb0P6HUI2dVoNiBYfLaTpfueAGZVbiCW2gfUrBHZLzYXwn6qpc1uqtGS6diQnDjtS22Buirzys%2B10JR%2FmiTK4XOZVPnwrjs5CcmCpn0mZCoGLsIC6VUKCywARuINFrTCmjn%2BQeoOkUygVwQODOZ82gVfewlE6oxfMIq2oIAjJESjNDC4MinlECnEhOsFEcynLboT9IMSDlrcvMyTaLIIUisPzby0NN34IXL1V9TqcCAPsWbJ%2B6NrbRcHt163%2FnVo53H4x2HpO9jCBafuQkC8FGjK76t%2FWgWBK6x%2FRWy8BkUjZCRhewhOMgxJFKrNMUcVzTwXnj6qMenON4mL33rtu0LHK1tSSiwphQDxmzxa2wOLyt1cwneVWqtRrgBq0gouYa4Q827bvBzgaFsyHke8o3YJU0IcvTIXzpedCmyZb3hCIOx6wVCQ2Q%2FU9sRjuVmJ0PFj1ijERk9hBB2po5YPDv7Al332eY1MlkrHKe4jojfMTYLgLp%2FkTx0pOdy0oq5txpmTprfGlsBv5mNMFF5oS%2FbXLJ759faENkAo4OTbUZ0v0qREwwpM2c2AY6pgEGtlPrBKhYyulnmELjEWZ%2BEoUbj2EPkNn2Je3jcWchkI9CtTBjjC35noFfIe22vcMZbvrKPbcwZf0FM6dbGSWjls6ZjNKdm3PHIXtcnN89ojbqzDwNEFkIPdbf6r%2FnndPZOaVl3%2F%2B6uNzrL9JHaRiFf7Pqw1T6P0l2bu7AcFR0h0Zs%2F53u8rFlGoLzJuYX6DThDKVoQM%2BS2jyQUvD9CxjzgYE7oxkS&X-Amz-Signature=94345fbbac36dde1f747c29c2946b2187e8d138c5c6ded91468fceb85747ad3f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665HDKU6DT%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDuKJpMQb1ffVmtafCuq%2FIlVeXehX3hPdyyMEaJq%2BZnjAiAhaACt0vPzcYrwy9ZTmtjonK1SMxU0qn0jEusUFW4IRSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM9J%2Bx6hAX8eJ3qcNqKtwD0aFGZ6YJsjXc6Peq1J5pCCI84wEr0uFRJ1XJPxeCJ2N2eyftC4w2WAF%2B6jCehZGUM6qev%2B5By4hb0P6HUI2dVoNiBYfLaTpfueAGZVbiCW2gfUrBHZLzYXwn6qpc1uqtGS6diQnDjtS22Buirzys%2B10JR%2FmiTK4XOZVPnwrjs5CcmCpn0mZCoGLsIC6VUKCywARuINFrTCmjn%2BQeoOkUygVwQODOZ82gVfewlE6oxfMIq2oIAjJESjNDC4MinlECnEhOsFEcynLboT9IMSDlrcvMyTaLIIUisPzby0NN34IXL1V9TqcCAPsWbJ%2B6NrbRcHt163%2FnVo53H4x2HpO9jCBafuQkC8FGjK76t%2FWgWBK6x%2FRWy8BkUjZCRhewhOMgxJFKrNMUcVzTwXnj6qMenON4mL33rtu0LHK1tSSiwphQDxmzxa2wOLyt1cwneVWqtRrgBq0gouYa4Q827bvBzgaFsyHke8o3YJU0IcvTIXzpedCmyZb3hCIOx6wVCQ2Q%2FU9sRjuVmJ0PFj1ijERk9hBB2po5YPDv7Al332eY1MlkrHKe4jojfMTYLgLp%2FkTx0pOdy0oq5txpmTprfGlsBv5mNMFF5oS%2FbXLJ759faENkAo4OTbUZ0v0qREwwpM2c2AY6pgEGtlPrBKhYyulnmELjEWZ%2BEoUbj2EPkNn2Je3jcWchkI9CtTBjjC35noFfIe22vcMZbvrKPbcwZf0FM6dbGSWjls6ZjNKdm3PHIXtcnN89ojbqzDwNEFkIPdbf6r%2FnndPZOaVl3%2F%2B6uNzrL9JHaRiFf7Pqw1T6P0l2bu7AcFR0h0Zs%2F53u8rFlGoLzJuYX6DThDKVoQM%2BS2jyQUvD9CxjzgYE7oxkS&X-Amz-Signature=240f7e023b5beeca9a09a11e073c831b79cd3910dbef533dcd035ecaf18216ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665HDKU6DT%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDuKJpMQb1ffVmtafCuq%2FIlVeXehX3hPdyyMEaJq%2BZnjAiAhaACt0vPzcYrwy9ZTmtjonK1SMxU0qn0jEusUFW4IRSqIBAir%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM9J%2Bx6hAX8eJ3qcNqKtwD0aFGZ6YJsjXc6Peq1J5pCCI84wEr0uFRJ1XJPxeCJ2N2eyftC4w2WAF%2B6jCehZGUM6qev%2B5By4hb0P6HUI2dVoNiBYfLaTpfueAGZVbiCW2gfUrBHZLzYXwn6qpc1uqtGS6diQnDjtS22Buirzys%2B10JR%2FmiTK4XOZVPnwrjs5CcmCpn0mZCoGLsIC6VUKCywARuINFrTCmjn%2BQeoOkUygVwQODOZ82gVfewlE6oxfMIq2oIAjJESjNDC4MinlECnEhOsFEcynLboT9IMSDlrcvMyTaLIIUisPzby0NN34IXL1V9TqcCAPsWbJ%2B6NrbRcHt163%2FnVo53H4x2HpO9jCBafuQkC8FGjK76t%2FWgWBK6x%2FRWy8BkUjZCRhewhOMgxJFKrNMUcVzTwXnj6qMenON4mL33rtu0LHK1tSSiwphQDxmzxa2wOLyt1cwneVWqtRrgBq0gouYa4Q827bvBzgaFsyHke8o3YJU0IcvTIXzpedCmyZb3hCIOx6wVCQ2Q%2FU9sRjuVmJ0PFj1ijERk9hBB2po5YPDv7Al332eY1MlkrHKe4jojfMTYLgLp%2FkTx0pOdy0oq5txpmTprfGlsBv5mNMFF5oS%2FbXLJ759faENkAo4OTbUZ0v0qREwwpM2c2AY6pgEGtlPrBKhYyulnmELjEWZ%2BEoUbj2EPkNn2Je3jcWchkI9CtTBjjC35noFfIe22vcMZbvrKPbcwZf0FM6dbGSWjls6ZjNKdm3PHIXtcnN89ojbqzDwNEFkIPdbf6r%2FnndPZOaVl3%2F%2B6uNzrL9JHaRiFf7Pqw1T6P0l2bu7AcFR0h0Zs%2F53u8rFlGoLzJuYX6DThDKVoQM%2BS2jyQUvD9CxjzgYE7oxkS&X-Amz-Signature=fcd5cf041ba1c1ff36354462844c138459ef451f5f10c61aa8ecc6b545196110&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667FDUQCAQ%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDM0CmvFIKY6vMRveSAiJgoaJ5eauvBeRR9TJ7kq8fwvgIhAJdsuOWvLR774td7gBZk96pdZZV3HOqHS8hB4KkPvhsKKogECKv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx7p4dayD%2Fdx1dF6F4q3AONFYUUCvth4d1a6Nmh1NV4lCMxklPO6ObcLMDb8ECHrj%2F%2FdY2f4OHZyhWjvV0KT6sYklZAQXg6GAlMNbTQniiOyvMA83fuCPsx6EeRLrNEDbvngQp8NwC53mKZYb151uFNHyucKxlUIDYYgR0XRsz2Q6abtDphhOtvXD0H496REpa%2BXwF8l2KWAgcaIC00XxEBpAwwPWrlOgB3cEJPvjgemDMkj2lpRWBqoxoRiAIDN4eG796FDCDYjaFT7WRV3NvG5Rvz5C2Jy6IjJQLABObr4w8sdRuWooNLpY7dlflkygP%2F8bTFOBFQKFMXalUuCS7FB3q2BO%2BlRUQ9rH33JmVdqtbDuCBFdhwOhg90Cb%2BwF93W8CqyrNXgqlH8MU377p2GOa0%2FjIX1wn5u%2FCkCq13TLu0lvB%2BQHcDL0LcHGCCHvlbA3znMiCuKhj8WE9X7FCR03%2B4YgD8E9DYj4sHJUnd5I2XzueMeeW2nWPHPJT1%2B4sYdBoOjq5lh4U9laeoVkOSIJ4IrfY3jKpgqxuX4CWdZByUsecJixYv%2FuBSQlzdAUvGr2GfQyVObR3eSXJy2joZK0c68KtJ7EuZk8iWuRc9Ri41TKwd6fN0AcwY%2BPsQIboL%2BQM03cS2ebHTJ2TDpy5zYBjqkAd9%2B%2Fwby1W9JB7HAqJF971vHjW0QT%2F0nY%2Fc0XOAOym711ECitKIdGnEzLjzB2J2vpqonx2bV0vp18fe1sTuO2ZqsdvywC65ChYxCsnV63KjUgzYX2ZxaIcweDCKk3ie%2Baab1Ele%2BUJJXI9PP84TXJeoayKC%2B58AhvajoOg6aqZsH9sff3t6TQPZPYsMlKEvrPSWPRF%2FdCqF1kXReA3T3V9cOgyie&X-Amz-Signature=695fa10c529484db35526b56a929623ca57a42d0924217188cfe9aba487590c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWAJDC6V%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDBpoZUVnls3adzJ8ZCaOeSlHX3XsxrUGrfhlcp8J2oDQIgPFtymz7sVIVG8v6jtm6B3y23dsX9Cp2s%2FMWs7JxCwyQqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHlUCf31C4Xw9D9YPyrcA1mOwsSlW7mz5AECwnO3dkqk%2BgiTXXRLxgkU1oG7wuRkcckOJi9DYs5SnOhRdehqPoJrW1W4QEBkLkbmsQaHXng9rEdPfdHIeEAwhOCBZH0q2LVw9w2SdxXdVWAWeEEywaluiWOWCHyEZ7HefgeraA15QNzF16TkzXPht%2ByvPJtcYqOUAl6nqLyREWCG5zHhlP7y9ZTNkqFSjkQQ9fUiNXJmbgV0s0grrqIrpzowT9nj1hsp5wtckP2oMlDVJeXgtJ%2FTpyfZFgJ2L2apCS5i%2F54DCu5ClrQo%2FMdzJCtazaA0ak5uKx3X9uzZeH440ER%2FXscmsZFkfUWAApumi69lbBSdwdBwSii2YJq8F9P3cSu2ttQ6bE4ciQvxSUIGpLqvsQZvrPlmOA5MLCfYPXZq5QhgIhI28c%2BQWiZ6PdyfoD2a7Uh40AmRoyVMCPXDTPK7jRQfoFn9aN51nnBXwyaKkLRZT9VitkGw4bYt5zzaaZ5L9YnvBZYL5fi8irdBrRp%2FS%2FZtnpjBuRKeWnNvi34Mpp0Zjn85KQR%2BB63jQP0L%2FOJLlA8zmSob1WkI0SZExzZSv0NJo54kDE%2Bc9DXHLDg2pr93Moj2PXA8I6IT3cswJrAFDNC%2Fw6Yh7gaoh5vQMLfMnNgGOqUBzePsBB0ahy5p0%2BPOj3hC4rysOWWrws4%2BErbQcqRHI%2F4PKVRoXjPumuWcik%2BERpP5c47r879xWVY23i3VZJzOb7jIxLvYYR6dpXx3vNcY2Zyj0ImdVvKcUvlqBKfpxJoWIgSySnq%2F%2F8LE55UHvc%2BxdGBY9dqNsEgoKdsduaA57AWhn%2FlDt3UqOqz2qBEeVHfTT1bA5v7S5BthtB1QoPe99BGkc0Vm&X-Amz-Signature=67d8769564a854bc504cafa473e4be57c2445b3433c76902739e0fade9b65eed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWAJDC6V%2F20261125%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261125T182550Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDBpoZUVnls3adzJ8ZCaOeSlHX3XsxrUGrfhlcp8J2oDQIgPFtymz7sVIVG8v6jtm6B3y23dsX9Cp2s%2FMWs7JxCwyQqiAQIq%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHlUCf31C4Xw9D9YPyrcA1mOwsSlW7mz5AECwnO3dkqk%2BgiTXXRLxgkU1oG7wuRkcckOJi9DYs5SnOhRdehqPoJrW1W4QEBkLkbmsQaHXng9rEdPfdHIeEAwhOCBZH0q2LVw9w2SdxXdVWAWeEEywaluiWOWCHyEZ7HefgeraA15QNzF16TkzXPht%2ByvPJtcYqOUAl6nqLyREWCG5zHhlP7y9ZTNkqFSjkQQ9fUiNXJmbgV0s0grrqIrpzowT9nj1hsp5wtckP2oMlDVJeXgtJ%2FTpyfZFgJ2L2apCS5i%2F54DCu5ClrQo%2FMdzJCtazaA0ak5uKx3X9uzZeH440ER%2FXscmsZFkfUWAApumi69lbBSdwdBwSii2YJq8F9P3cSu2ttQ6bE4ciQvxSUIGpLqvsQZvrPlmOA5MLCfYPXZq5QhgIhI28c%2BQWiZ6PdyfoD2a7Uh40AmRoyVMCPXDTPK7jRQfoFn9aN51nnBXwyaKkLRZT9VitkGw4bYt5zzaaZ5L9YnvBZYL5fi8irdBrRp%2FS%2FZtnpjBuRKeWnNvi34Mpp0Zjn85KQR%2BB63jQP0L%2FOJLlA8zmSob1WkI0SZExzZSv0NJo54kDE%2Bc9DXHLDg2pr93Moj2PXA8I6IT3cswJrAFDNC%2Fw6Yh7gaoh5vQMLfMnNgGOqUBzePsBB0ahy5p0%2BPOj3hC4rysOWWrws4%2BErbQcqRHI%2F4PKVRoXjPumuWcik%2BERpP5c47r879xWVY23i3VZJzOb7jIxLvYYR6dpXx3vNcY2Zyj0ImdVvKcUvlqBKfpxJoWIgSySnq%2F%2F8LE55UHvc%2BxdGBY9dqNsEgoKdsduaA57AWhn%2FlDt3UqOqz2qBEeVHfTT1bA5v7S5BthtB1QoPe99BGkc0Vm&X-Amz-Signature=3e3427534d5c7d7d7a25319dd75bbe41d327d754b3dbc3fb0597d5df31017d30&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
