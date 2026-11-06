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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SO4TPK4%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDXSbzbpTEnGyjk9m6N%2BviCX00Nd4I1DlQCLs0jR82YQQIgFN4%2FrN36je9vtflD4gesnUKUHUk8U%2FNr%2B1%2FFCNdit8QqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGM10CyemzMIc94fqyrcA0jcAk2qKEc%2BH%2FldE1vDzuiUxd7yVeXE34KM%2BH7FMmg86QUxWPc84yCZJn4es%2FdRlhP4ZlUX8ohDQ4NUlZtbR9GzhjW6tGS%2BQ0GG36sGK9gTs6YSryWtkay0c1HpnSKyrnQwsuP%2B1tIzz7CRm0E4UDrrArZnXqxq6hUg0WunptxdQWNeYCLOXDg6%2FX8CnLXk4EdBXSbi873aMrNZv277EjSFNF9pVe%2Bgua2hsgW49ENvMAwDs%2BGpBY9dvVSJ8N242jtxsLR9Qd9kaRIxevHYVwLN3IMFHqiBZ7cy7F%2F1PP339xVdO5WKeh2pJ6q2k4h5k%2FoZuHavuWn7gOfZqsHlpg2Bx7dWuNiEIsyjHMM1AO98hXiHUZpVx3uRjK9gCrj8tumzF%2Fq0eOZQbMdESjTDZ8dCnIFZmSpM3UvBkOaoWAJ6Q%2Fg%2F9rZcjd8QldNx2nOjWj5asjkkQpDV637E99HH6jvRmMby%2BylE8iM1gSYfqFMjmEnmvDOQLhmieudZycyitVsKf%2BX5ux4f567rtsMIbwWqAPqJu7%2FXw1V93LXKC0Fz1IpvwdbYPIORbpVA4oLe9II1bBmvWwGAiJcQtD26Bzb%2FzCRfmYPN13PkVlbw5HzQjbGi%2FjJVmWTAARd7MKy8t9cGOqUBOWQIHPkLLxJovYR%2B0zYxSAYngpF9PDahBuZwQRnYltxBjoDXxS3Qae4YpgoJdwjzAbuGbTe7VOsiAoC83ID3jTYSlosrcTed6FRbaY3%2BYOwiovXlEZvQaH2WTdpEm5ZaLj3fKMPgHRUe5GDubo64YIu%2Bc82TksgO21%2F819AUMXFLZdadadUJuOQJwblbgU4HTGT95letg1okw3ap7U8kajtiPUB6&X-Amz-Signature=3ad91cf26bc42c8cfef1741bf2dfcb582586bb39b8af0a219ed5d6b14ef7135a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SO4TPK4%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDXSbzbpTEnGyjk9m6N%2BviCX00Nd4I1DlQCLs0jR82YQQIgFN4%2FrN36je9vtflD4gesnUKUHUk8U%2FNr%2B1%2FFCNdit8QqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGM10CyemzMIc94fqyrcA0jcAk2qKEc%2BH%2FldE1vDzuiUxd7yVeXE34KM%2BH7FMmg86QUxWPc84yCZJn4es%2FdRlhP4ZlUX8ohDQ4NUlZtbR9GzhjW6tGS%2BQ0GG36sGK9gTs6YSryWtkay0c1HpnSKyrnQwsuP%2B1tIzz7CRm0E4UDrrArZnXqxq6hUg0WunptxdQWNeYCLOXDg6%2FX8CnLXk4EdBXSbi873aMrNZv277EjSFNF9pVe%2Bgua2hsgW49ENvMAwDs%2BGpBY9dvVSJ8N242jtxsLR9Qd9kaRIxevHYVwLN3IMFHqiBZ7cy7F%2F1PP339xVdO5WKeh2pJ6q2k4h5k%2FoZuHavuWn7gOfZqsHlpg2Bx7dWuNiEIsyjHMM1AO98hXiHUZpVx3uRjK9gCrj8tumzF%2Fq0eOZQbMdESjTDZ8dCnIFZmSpM3UvBkOaoWAJ6Q%2Fg%2F9rZcjd8QldNx2nOjWj5asjkkQpDV637E99HH6jvRmMby%2BylE8iM1gSYfqFMjmEnmvDOQLhmieudZycyitVsKf%2BX5ux4f567rtsMIbwWqAPqJu7%2FXw1V93LXKC0Fz1IpvwdbYPIORbpVA4oLe9II1bBmvWwGAiJcQtD26Bzb%2FzCRfmYPN13PkVlbw5HzQjbGi%2FjJVmWTAARd7MKy8t9cGOqUBOWQIHPkLLxJovYR%2B0zYxSAYngpF9PDahBuZwQRnYltxBjoDXxS3Qae4YpgoJdwjzAbuGbTe7VOsiAoC83ID3jTYSlosrcTed6FRbaY3%2BYOwiovXlEZvQaH2WTdpEm5ZaLj3fKMPgHRUe5GDubo64YIu%2Bc82TksgO21%2F819AUMXFLZdadadUJuOQJwblbgU4HTGT95letg1okw3ap7U8kajtiPUB6&X-Amz-Signature=88b01ae891155f0467d946bc31d8c600a1cbb09932bfe6353941478906aa88a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SO4TPK4%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDXSbzbpTEnGyjk9m6N%2BviCX00Nd4I1DlQCLs0jR82YQQIgFN4%2FrN36je9vtflD4gesnUKUHUk8U%2FNr%2B1%2FFCNdit8QqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGM10CyemzMIc94fqyrcA0jcAk2qKEc%2BH%2FldE1vDzuiUxd7yVeXE34KM%2BH7FMmg86QUxWPc84yCZJn4es%2FdRlhP4ZlUX8ohDQ4NUlZtbR9GzhjW6tGS%2BQ0GG36sGK9gTs6YSryWtkay0c1HpnSKyrnQwsuP%2B1tIzz7CRm0E4UDrrArZnXqxq6hUg0WunptxdQWNeYCLOXDg6%2FX8CnLXk4EdBXSbi873aMrNZv277EjSFNF9pVe%2Bgua2hsgW49ENvMAwDs%2BGpBY9dvVSJ8N242jtxsLR9Qd9kaRIxevHYVwLN3IMFHqiBZ7cy7F%2F1PP339xVdO5WKeh2pJ6q2k4h5k%2FoZuHavuWn7gOfZqsHlpg2Bx7dWuNiEIsyjHMM1AO98hXiHUZpVx3uRjK9gCrj8tumzF%2Fq0eOZQbMdESjTDZ8dCnIFZmSpM3UvBkOaoWAJ6Q%2Fg%2F9rZcjd8QldNx2nOjWj5asjkkQpDV637E99HH6jvRmMby%2BylE8iM1gSYfqFMjmEnmvDOQLhmieudZycyitVsKf%2BX5ux4f567rtsMIbwWqAPqJu7%2FXw1V93LXKC0Fz1IpvwdbYPIORbpVA4oLe9II1bBmvWwGAiJcQtD26Bzb%2FzCRfmYPN13PkVlbw5HzQjbGi%2FjJVmWTAARd7MKy8t9cGOqUBOWQIHPkLLxJovYR%2B0zYxSAYngpF9PDahBuZwQRnYltxBjoDXxS3Qae4YpgoJdwjzAbuGbTe7VOsiAoC83ID3jTYSlosrcTed6FRbaY3%2BYOwiovXlEZvQaH2WTdpEm5ZaLj3fKMPgHRUe5GDubo64YIu%2Bc82TksgO21%2F819AUMXFLZdadadUJuOQJwblbgU4HTGT95letg1okw3ap7U8kajtiPUB6&X-Amz-Signature=05555db40685b15463697f00fa3cdb2d26c504e773628a1f5d9ef1b2e331ff3b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667X46RLXM%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCVBe%2FnTi05oWMJD55KK2vYx6HfIIJEhubbENoDLG1gRgIhANqOv1dvNPXGVkJ14p8XiKlhDo6Xr%2FWoCjPPlC%2B0Q6RtKogECN7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgytDrsRjStzhTb9qnQq3AOjO0VLNquBZfioApuKoQ33UrHbE2Os0wq0BbuV0VGyWwG2MgEWUmmlNkwuNV6wex9FL0BwkYMqrdh%2FiduQri%2FTofSDkheA0%2B5IbFdvSwWtNNqbU%2F%2BMAafZsmAAp%2FzmmpSt77Ft24XvF7py4YeICwd4dOSko9JuWmEzrMz5kaSBxTNrzLVo5fOMzV5kZ2%2B9LVK7tui4%2BTNW98JQ11VXQ6dHJwXfiiEDguBZa50IRu6ho6EKDE0Rx82jy5L935D6mH%2F51pZPzAYHy4dCN6PL0fat5SU9e7N%2Fb9CK0P5P6NBLrInyzmCMfVFmWcThq0K7Mq3WDIpyQWcbRCNmEjH6EOeJDFqyLni2Ajw5IRxrtdG3clSiiQ8aEgW9M9OhFOXQBjAKSbpbSd%2BcnIVNsRVem7Z4dmgHIjrrY%2FxU5PKXr3DlkC47UtyZFgXzyfpXdE97QjcyeRxgJCVLI3%2BMZs1Xj%2Fgk%2F0HPdVf1Fj9Tn762qwnaH8DGxTD0Ynl9J5gsbSs5fcOTdrjSV4lZxeJwIh94Q49aLAFqivx6l3xBCyMjLDKDoCVYLZ403ji8NFgHCPHqEavcr2O964CQA0nDlfVfRWUUsfe7Y7jcwZTtIC9VQsHFflGJ11nodh3rHPc04zCou7fXBjqkARTH0F03aXIeZr5MneoLgDeGR7iSt0HEHeqNTJQIi1yaDQMGOweos6QGXT1TAHata%2F45UzIt5ErIhhhQ9dx8228f3kSSTnWHWbOhMtQGUDzenKKDP6hqK9TU75G9YgRxKoVTqDOdoxjDXV%2BPgJNOFvIIXQifuTpW3ldb%2B%2BllOj%2FFuu6bSCbVr03f9DnDlbVWykKrGNneXLxESVZ96bfn5InZ13lD&X-Amz-Signature=465fa851dab56bf0826fcb1e8d18919a391b588cd5b26ced098fd8bbcee0dff0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667X46RLXM%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCVBe%2FnTi05oWMJD55KK2vYx6HfIIJEhubbENoDLG1gRgIhANqOv1dvNPXGVkJ14p8XiKlhDo6Xr%2FWoCjPPlC%2B0Q6RtKogECN7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgytDrsRjStzhTb9qnQq3AOjO0VLNquBZfioApuKoQ33UrHbE2Os0wq0BbuV0VGyWwG2MgEWUmmlNkwuNV6wex9FL0BwkYMqrdh%2FiduQri%2FTofSDkheA0%2B5IbFdvSwWtNNqbU%2F%2BMAafZsmAAp%2FzmmpSt77Ft24XvF7py4YeICwd4dOSko9JuWmEzrMz5kaSBxTNrzLVo5fOMzV5kZ2%2B9LVK7tui4%2BTNW98JQ11VXQ6dHJwXfiiEDguBZa50IRu6ho6EKDE0Rx82jy5L935D6mH%2F51pZPzAYHy4dCN6PL0fat5SU9e7N%2Fb9CK0P5P6NBLrInyzmCMfVFmWcThq0K7Mq3WDIpyQWcbRCNmEjH6EOeJDFqyLni2Ajw5IRxrtdG3clSiiQ8aEgW9M9OhFOXQBjAKSbpbSd%2BcnIVNsRVem7Z4dmgHIjrrY%2FxU5PKXr3DlkC47UtyZFgXzyfpXdE97QjcyeRxgJCVLI3%2BMZs1Xj%2Fgk%2F0HPdVf1Fj9Tn762qwnaH8DGxTD0Ynl9J5gsbSs5fcOTdrjSV4lZxeJwIh94Q49aLAFqivx6l3xBCyMjLDKDoCVYLZ403ji8NFgHCPHqEavcr2O964CQA0nDlfVfRWUUsfe7Y7jcwZTtIC9VQsHFflGJ11nodh3rHPc04zCou7fXBjqkARTH0F03aXIeZr5MneoLgDeGR7iSt0HEHeqNTJQIi1yaDQMGOweos6QGXT1TAHata%2F45UzIt5ErIhhhQ9dx8228f3kSSTnWHWbOhMtQGUDzenKKDP6hqK9TU75G9YgRxKoVTqDOdoxjDXV%2BPgJNOFvIIXQifuTpW3ldb%2B%2BllOj%2FFuu6bSCbVr03f9DnDlbVWykKrGNneXLxESVZ96bfn5InZ13lD&X-Amz-Signature=b13aa8a7e41cd76d9f7c8d9af4dfe26082e3e0176bcc8cfe08847ce286e972c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667X46RLXM%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCVBe%2FnTi05oWMJD55KK2vYx6HfIIJEhubbENoDLG1gRgIhANqOv1dvNPXGVkJ14p8XiKlhDo6Xr%2FWoCjPPlC%2B0Q6RtKogECN7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgytDrsRjStzhTb9qnQq3AOjO0VLNquBZfioApuKoQ33UrHbE2Os0wq0BbuV0VGyWwG2MgEWUmmlNkwuNV6wex9FL0BwkYMqrdh%2FiduQri%2FTofSDkheA0%2B5IbFdvSwWtNNqbU%2F%2BMAafZsmAAp%2FzmmpSt77Ft24XvF7py4YeICwd4dOSko9JuWmEzrMz5kaSBxTNrzLVo5fOMzV5kZ2%2B9LVK7tui4%2BTNW98JQ11VXQ6dHJwXfiiEDguBZa50IRu6ho6EKDE0Rx82jy5L935D6mH%2F51pZPzAYHy4dCN6PL0fat5SU9e7N%2Fb9CK0P5P6NBLrInyzmCMfVFmWcThq0K7Mq3WDIpyQWcbRCNmEjH6EOeJDFqyLni2Ajw5IRxrtdG3clSiiQ8aEgW9M9OhFOXQBjAKSbpbSd%2BcnIVNsRVem7Z4dmgHIjrrY%2FxU5PKXr3DlkC47UtyZFgXzyfpXdE97QjcyeRxgJCVLI3%2BMZs1Xj%2Fgk%2F0HPdVf1Fj9Tn762qwnaH8DGxTD0Ynl9J5gsbSs5fcOTdrjSV4lZxeJwIh94Q49aLAFqivx6l3xBCyMjLDKDoCVYLZ403ji8NFgHCPHqEavcr2O964CQA0nDlfVfRWUUsfe7Y7jcwZTtIC9VQsHFflGJ11nodh3rHPc04zCou7fXBjqkARTH0F03aXIeZr5MneoLgDeGR7iSt0HEHeqNTJQIi1yaDQMGOweos6QGXT1TAHata%2F45UzIt5ErIhhhQ9dx8228f3kSSTnWHWbOhMtQGUDzenKKDP6hqK9TU75G9YgRxKoVTqDOdoxjDXV%2BPgJNOFvIIXQifuTpW3ldb%2B%2BllOj%2FFuu6bSCbVr03f9DnDlbVWykKrGNneXLxESVZ96bfn5InZ13lD&X-Amz-Signature=25fcbb3485ff3acba95c2ea04e1886c8f95d0b2394ed1d47d7e9271a9bfd3e28&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667X46RLXM%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154007Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCVBe%2FnTi05oWMJD55KK2vYx6HfIIJEhubbENoDLG1gRgIhANqOv1dvNPXGVkJ14p8XiKlhDo6Xr%2FWoCjPPlC%2B0Q6RtKogECN7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgytDrsRjStzhTb9qnQq3AOjO0VLNquBZfioApuKoQ33UrHbE2Os0wq0BbuV0VGyWwG2MgEWUmmlNkwuNV6wex9FL0BwkYMqrdh%2FiduQri%2FTofSDkheA0%2B5IbFdvSwWtNNqbU%2F%2BMAafZsmAAp%2FzmmpSt77Ft24XvF7py4YeICwd4dOSko9JuWmEzrMz5kaSBxTNrzLVo5fOMzV5kZ2%2B9LVK7tui4%2BTNW98JQ11VXQ6dHJwXfiiEDguBZa50IRu6ho6EKDE0Rx82jy5L935D6mH%2F51pZPzAYHy4dCN6PL0fat5SU9e7N%2Fb9CK0P5P6NBLrInyzmCMfVFmWcThq0K7Mq3WDIpyQWcbRCNmEjH6EOeJDFqyLni2Ajw5IRxrtdG3clSiiQ8aEgW9M9OhFOXQBjAKSbpbSd%2BcnIVNsRVem7Z4dmgHIjrrY%2FxU5PKXr3DlkC47UtyZFgXzyfpXdE97QjcyeRxgJCVLI3%2BMZs1Xj%2Fgk%2F0HPdVf1Fj9Tn762qwnaH8DGxTD0Ynl9J5gsbSs5fcOTdrjSV4lZxeJwIh94Q49aLAFqivx6l3xBCyMjLDKDoCVYLZ403ji8NFgHCPHqEavcr2O964CQA0nDlfVfRWUUsfe7Y7jcwZTtIC9VQsHFflGJ11nodh3rHPc04zCou7fXBjqkARTH0F03aXIeZr5MneoLgDeGR7iSt0HEHeqNTJQIi1yaDQMGOweos6QGXT1TAHata%2F45UzIt5ErIhhhQ9dx8228f3kSSTnWHWbOhMtQGUDzenKKDP6hqK9TU75G9YgRxKoVTqDOdoxjDXV%2BPgJNOFvIIXQifuTpW3ldb%2B%2BllOj%2FFuu6bSCbVr03f9DnDlbVWykKrGNneXLxESVZ96bfn5InZ13lD&X-Amz-Signature=72589272f0eac28db598c362f2887fb70cf516f5102b24995781467ca7cf46b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MKRZAGC%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154008Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCw%2Befmq0dAZ8%2F5ptUrzSh8VmIx07St1FIJMaBGCI0Y6AIhAN0HDnaDsjeMEwke6dYy%2FpAbsdYHmYhtPKED3UqGYVw2KogECN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzJQxDuor0c7CVR%2Bkcq3ANpMg1K2va04vFzJBJyKhRGg9J2ztnbCaSMtovBtHejax0vPjUy7aqK3txHb5KOwC%2F7tHlUtzIiqcN1Bte4JrMe3GK8VO%2FdDL%2BYHV52rtIUXKRLeZF7%2FgT2wGYK4FMFE4f106smQsrs6NggJTCrRhWwer%2BeovFskHSvDGwnZNLSUrCd%2BT5u30sHNwTKJ4MbHWaye4UhJRz3uUNq93jcRP5Nih8%2FV4BalPIijUckngqN9APIOkKQPGi0Df48v%2B0HrmPzqWRjzFSrKzYeMEswrS8%2Fn8%2ByQghEX4Rcr4AVJnrVs53OHUxa1xdYVO7%2BqFMy7sNk6zRbmLFuF74DIsn6Vjo3g1DMA4TukyaujAxO14MgbLQCSBud8JMl6JJ3UTP0fGtqciO1nVSxVJFUst06OUGxUbzc7EsqL6N9CeB9iwy0YN3C2rQWi16LjIDnAOxY1mw%2FTHf5GIgUCO44aVsKby0SfXkd0hL1TNWOd4rEwmdCcr2v2t5f2nO6FokiAUPNg6ZFLDWSRjNlu%2FZXW5tYN4DgVSYLmId7W3Z65kpuvddeu6bu6PVWsev3P%2FRDSSpAkoqTC9xlM7tYsRawYPSaYfV6p6rR3%2F1s9Lp%2BgYIp9dahU22R%2FM3DMeXcu2wjBDCQurfXBjqkAfdZ7LX9spSvywvU8DWuxO549WiBHZTV6h9RGDhns%2FVVL0HnR2tEqnl7jb8QMnvT%2BOrQ6Nx6WjNsQzD74m48Por94qfIzFwDZNzhVDVRjiAXpzWAXQzH9bYbjtJ1mn9yDzG6Swu0uYy4QervbldwtbxdvuGPK9xUoTZ7k%2Bq7y39FX9RdGkM1F%2FUVSv87Hr8SOmACXOwrZEKTogu8qyfVuMYcIN%2FB&X-Amz-Signature=bff90c744ed51a1c3552c12176c87a10ad9646c53680acb6d3066d8ba7a50759&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFVVEUAB%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154008Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCyNBvtGC0A1H9cPu91joYxTKQs5IMRnbVqU%2F6JFdZ%2F%2BwIhANIM9nvVCv9MlZGNW9FC4yrZjN1QRRR9ijQ0%2FcKPWT4eKogECN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz9gS2o5EbFaIBiSbMq3APP0SmEd1Zg7plfDnOShdDQFKoLx4Pc4dYZdTw12%2Fozxi1nHgVD4YTiFx5xuP%2FsPYjtGrn6er%2FUkMYRvFviGex4nnoefXUQZi3AFXw5LQbIV8ni0cbjM%2FtIsp2n55CxqbfwARRaRhm78Mcy82z54MKW3wwhYYq9MutWtGBnhnONhnHjviK5%2BS7zVhBVWR9%2FQ0ddL5r1%2FNPJqbVxnwLN22TW7iqafDBqhaIZh8KNqSB6EQmzX%2Bcpcw0yqrSgqyDepd0sr5m6MONaj33UsX50YF%2BFa0LY04H1hzzz4Kv1Hipl890ET3WacQPwF0KdIGMqqo9vul9URMwWA7T08puDJYKDkIXYw%2FiI16rcfE5vqGT6tDHmfDsWSSNkOpq66N81Xvbzogwq2C7h1QXc3xs2UJcck4U03s0gbuAugst%2F0EwmkMIQ9GHzHmDywpKXKdaO8CBWbGhU9r5cmHJxJKiL2Vpwqt1vtkOgp0vzYPytoldD4exWQCXEsDd4hIwqQIwVFkuT%2FhlPih%2F8NX018XyZufN6FOAl8Q%2BGg1ld02WkwB6khJHXoE6BqOkaqRE3LttnDOO3E4cvnGaSVzIDxzMk8Cx%2ByYnA9rNv0EbLAX%2FRSSb3Kq1T%2BeQUjTk54ktiEzDYvLfXBjqkAa2rb0qltdF%2BUyJqDetNl157yYZ4JqQgZfyBKHYUXAQyCBFkVsrrGbIuSJyAhNv6g5f21sArPGZFpsKsMpbcEnlJ2gYsS1qRKE20O9jrIfrHCXRXHD9W6y5RXr2qZtv8F6NfQBfrWWh6aWr8wzvZGRcINNsmWWXmRIVfY4kDhBk0oOGsE2eIxatYhm3CcOc66S8UJEr%2FgcZfm6o0oRZpp4ILUQFW&X-Amz-Signature=50bd9c1c7d6a39e14ca477e786fdb49ad3de0c153340e1b93c61cba241057137&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFVVEUAB%2F20261106%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261106T154008Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCyNBvtGC0A1H9cPu91joYxTKQs5IMRnbVqU%2F6JFdZ%2F%2BwIhANIM9nvVCv9MlZGNW9FC4yrZjN1QRRR9ijQ0%2FcKPWT4eKogECN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz9gS2o5EbFaIBiSbMq3APP0SmEd1Zg7plfDnOShdDQFKoLx4Pc4dYZdTw12%2Fozxi1nHgVD4YTiFx5xuP%2FsPYjtGrn6er%2FUkMYRvFviGex4nnoefXUQZi3AFXw5LQbIV8ni0cbjM%2FtIsp2n55CxqbfwARRaRhm78Mcy82z54MKW3wwhYYq9MutWtGBnhnONhnHjviK5%2BS7zVhBVWR9%2FQ0ddL5r1%2FNPJqbVxnwLN22TW7iqafDBqhaIZh8KNqSB6EQmzX%2Bcpcw0yqrSgqyDepd0sr5m6MONaj33UsX50YF%2BFa0LY04H1hzzz4Kv1Hipl890ET3WacQPwF0KdIGMqqo9vul9URMwWA7T08puDJYKDkIXYw%2FiI16rcfE5vqGT6tDHmfDsWSSNkOpq66N81Xvbzogwq2C7h1QXc3xs2UJcck4U03s0gbuAugst%2F0EwmkMIQ9GHzHmDywpKXKdaO8CBWbGhU9r5cmHJxJKiL2Vpwqt1vtkOgp0vzYPytoldD4exWQCXEsDd4hIwqQIwVFkuT%2FhlPih%2F8NX018XyZufN6FOAl8Q%2BGg1ld02WkwB6khJHXoE6BqOkaqRE3LttnDOO3E4cvnGaSVzIDxzMk8Cx%2ByYnA9rNv0EbLAX%2FRSSb3Kq1T%2BeQUjTk54ktiEzDYvLfXBjqkAa2rb0qltdF%2BUyJqDetNl157yYZ4JqQgZfyBKHYUXAQyCBFkVsrrGbIuSJyAhNv6g5f21sArPGZFpsKsMpbcEnlJ2gYsS1qRKE20O9jrIfrHCXRXHD9W6y5RXr2qZtv8F6NfQBfrWWh6aWr8wzvZGRcINNsmWWXmRIVfY4kDhBk0oOGsE2eIxatYhm3CcOc66S8UJEr%2FgcZfm6o0oRZpp4ILUQFW&X-Amz-Signature=98799e39a97bc9e86933da6dca24f4abcd95f1a6d4d112bc265b45a79833d074&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
